/****************************************************************************************
visualizacion_blanco_negro
Autor: Nicolas Pedraza
Proyecto: DiskPlay
Fecha: 09/06/2020
Version: 1.7
Esta funcion se encarga de asignar los datos guardados en la memoria EEPROM, para asignarlos
a los LED dependiendo de su radio y angulo correspondiente para su visualizacion en un display
giratorio.

Para este caso en particular, se realiza la asignacion a un solo blade o tira LED para su
posterior visualizacion A BLANCO Y NEGRO.

Entada:
- Sensor efecto hall para medida de angulos.
- Datos memoria EEPROM

Salida:
- LED a un solo color en el display giratorio para producir una imagen con 1 BLADE.

*****************************************************************************************/
#include <EEPROM.h>
#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
 #include <avr/power.h> // Required for 16 MHz Adafruit Trinket
#endif

#define PIN  3 // Pin de neopixels
#define NUMPIXELS 32 // Numero de leds
#define PIN_HALL  2 // Pin sensor hall 
#define BRILLO 10 // Brillo de LEDs 

Adafruit_NeoPixel tira = Adafruit_NeoPixel (NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800); // Numero LEDs, PIN

const int theta = 128;
const int leds = 32;

unsigned long cont1 = 0, cont2 = 0; // Contadores para tiempo de vuelta
byte estado_tiempo_vuelta = 0; // FSM estados

unsigned long calculo_tiempo_vuelta(); // Retorna el tiempo que se demora en dar una vuelta
int calculo_tiempos(unsigned long tiempo_vuelta); // Retorna el grado actual en el que se encuentran los leds

void setup() {
  Serial.begin(9600);
  tira.begin();
  tira.show();
}

void loop() {
  unsigned long tiempo_vuelta = 0;
  int angulo = 0;

  tiempo_vuelta = calculo_tiempo_vuelta(); // Calcula tiempo vuelta
  angulo = calculo_tiempos(tiempo_vuelta); // Calcula angulo presente

  angulo = angulo+(theta-1)-angulo*2; // Flip de la figura para empezar en el angulo mayor al menor

  // Corriendo angulo
  angulo = angulo+(theta/4);
  if(angulo > theta-1){angulo = angulo - theta;}

  tira.setBrightness(BRILLO);
  // Se le asigna su color a cada LED
  for(int i=0;i<leds;i++){
    tira.setPixelColor(i,EEPROM.read(angulo*leds+i),EEPROM.read(angulo*leds+i),EEPROM.read(angulo*leds+i)); 
  }
  tira.show();
  tira.clear();
  Serial.println(angulo);
  delay(1);  
}



unsigned long calculo_tiempo_vuelta() // Retorna el tiempo que se demora en dar una vuelta
{             
  byte sensor_hall = digitalRead(PIN_HALL);    // Valor sensor hall en D2 (Activo en bajo)  
  switch (estado_tiempo_vuelta)
  {
   case 0:
          // Estado sensor para medir tiempo por vuelta
          if(sensor_hall == 1){estado_tiempo_vuelta = 0;}
          else if(sensor_hall == 0){estado_tiempo_vuelta = 1;}  
   break;
      
   case 1:
          // Estado antirebote para contar cuando ya no detecte el iman
          if(sensor_hall == 0){estado_tiempo_vuelta = 1;}
          else 
          {
              estado_tiempo_vuelta = 0;
              cont1 = cont2; // Primer conteo
              cont2 = micros(); // Segundo conteo
          }
   break;
  }
  unsigned long tiempo_vuelta = cont2 - cont1;
  return tiempo_vuelta;
}

int calculo_tiempos(unsigned long tiempo_vuelta) // Retorna el grado actual en el que se encuentran los leds
{
  unsigned long tiempo_grado = 0, tiempo_curva = 0;
  int grados = 0; 
  // Calculo tiempo que se demora en realizar una vuelta y lo que se demora en recorrer 1 grado
  tiempo_grado = tiempo_vuelta / theta; 

  // Saber los grados donde se encuentran los LED
  tiempo_curva = micros() - cont2; // Se calcula el tiempo recorrido desde nueva vuelta
  grados = tiempo_curva / tiempo_grado; // Se divide el tiempo recorrido desde nueva vuelta (tiempo_curva) y el tiempo que se demora por grado (tiempo_grado)  
  
  // El valor maximo es theta grados
  if(grados > theta-1){grados = 0;}
  return grados;
}
