#include <EEPROM.h>
/*
Nombre Imagen: apple_negro.jpg 
Numero de LEDs: 32 
Numero de Angulos: 128 
*/

const int theta = 128;
const int leds = 32;

byte matrizR[theta*leds] =
{0,0,0,0,0,0,0,0,25,230,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,175,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,2,0,107,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,1,1,2,0,32,227,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,1,1,1,0,0,114,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,1,1,0,12,184,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,1,1,0,0,30,202,27,183,255,255,249,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,1,1,0,1,0,0,10,107,8,117,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,1,0,0,1,1,1,0,1,0,0,238,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,1,1,0,1,1,0,41,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,42,236,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,153,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,60,245,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,190,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,110,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,52,237,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,11,131,255,254,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,83,250,254,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,1,0,229,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,207,255,254,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,232,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,37,115,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,15,241,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,11,189,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,27,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,60,250,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,20,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,97,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,55,206,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,1,1,0,86,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,1,1,0,101,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,1,1,0,82,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,1,1,0,56,251,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,1,1,0,18,219,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,1,0,134,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,39,156,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,77,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,37,239,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,232,232,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,40,240,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,87,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,168,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,58,192,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,16,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,45,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,84,255,254,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,138,249,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,1,2,0,23,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,70,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,142,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,1,0,99,217,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,1,0,14,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,86,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,1,10,203,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,1,0,104,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,27,229,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,1,0,156,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,1,0,0,75,254,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,1,1,24,219,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,162,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,56,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,230,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,207,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,193,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,183,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,177,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,190,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,203,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,226,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,54,248,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,103,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,171,234,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,36,255,254,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,114,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,14,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,26,220,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,3,164,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,114,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,252,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,253,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,19,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,214,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,1,20,103,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,1,2,0,0,222,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,1,1,1,0,85,254,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,1,1,0,39,238,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,1,1,1,0,33,234,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,1,1,0,28,229,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,1,1,0,32,230,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,1,1,0,54,245,234,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,103,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,1,177,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,44,241,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,1,151,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,1,0,27,231,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,1,0,78,254,255,255,246,248,252,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,1,0,89,255,255,248,87,50,59,92,148,213,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,1,0,71,253,255,254,78,0,0,0,1,0,0,16,126,244,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,1,0,16,214,255,255,129,0,0,0,0,1,1,0,0,0,86,245,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,113,255,255,195,57,0,1,1,0,1,1,1,1,0,15,203,255,255,255,255,255,255,
0,0,0,0,0,0,0,1,1,0,32,234,255,255,162,1,2,1,1,1,1,1,1,0,0,0,8,198,255,255,255,255,
0,0,0,0,0,0,0,1,1,0,0,168,255,254,255,245,63,24,0,1,0,1,1,1,1,1,0,31,236,255,255,255,
0,0,0,0,0,0,0,0,0,0,1,0,88,234,255,255,255,188,20,40,0,0,0,0,0,34,14,0,185,228,255,255,
0,0,0,0,0,0,0,0,0,0,1,0,34,200,255,255,255,255,194,255,232,255,221,151,254,236,211,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,1,1,1,0,0,161,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,1,1,1,0,124,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,118,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,119,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,208,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,9,67,249,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,176,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,69,250,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,17,147,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,253,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,63,250,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,1,0,4,0,0,113,255,255,246,255,230,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,1,0,4,174,239,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,151,68,252,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,20,151,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,53,220,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,90,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,89,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,89,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,89,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,1,1,0,89,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,1,1,0,50,246,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255
};

byte matrizG[theta*leds] =
{0,0,0,0,0,0,0,0,25,230,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,175,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,2,0,107,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,1,1,2,0,32,227,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,1,1,1,0,0,114,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,1,1,0,12,184,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,1,1,0,0,30,202,27,183,255,255,249,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,1,1,0,1,0,0,10,107,8,117,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,1,0,0,1,1,1,0,1,0,0,238,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,1,1,0,1,1,0,41,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,42,236,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,153,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,60,245,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,190,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,110,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,52,237,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,11,131,255,254,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,83,250,254,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,1,0,229,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,207,255,254,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,232,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,37,115,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,15,241,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,11,189,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,27,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,60,250,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,20,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,97,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,55,206,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,1,1,0,86,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,1,1,0,101,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,1,1,0,82,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,1,1,0,56,251,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,1,1,0,18,219,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,1,0,134,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,39,156,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,77,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,37,239,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,232,232,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,40,240,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,87,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,168,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,58,192,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,16,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,45,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,84,255,254,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,138,249,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,1,2,0,23,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,70,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,142,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,1,0,99,217,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,1,0,14,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,86,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,1,10,203,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,1,0,104,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,27,229,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,1,0,156,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,1,0,0,75,254,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,1,1,24,219,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,162,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,56,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,230,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,207,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,193,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,183,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,177,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,190,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,203,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,226,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,54,248,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,103,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,171,234,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,36,255,254,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,114,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,14,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,26,220,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,3,164,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,114,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,252,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,253,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,19,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,214,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,1,20,103,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,1,2,0,0,222,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,1,1,1,0,85,254,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,1,1,0,39,238,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,1,1,1,0,33,234,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,1,1,0,28,229,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,1,1,0,32,230,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,1,1,0,54,245,234,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,103,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,1,177,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,44,241,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,1,151,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,1,0,27,231,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,1,0,78,254,255,255,246,248,252,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,1,0,89,255,255,248,87,50,59,92,148,213,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,1,0,71,253,255,254,78,0,0,0,1,0,0,16,126,244,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,1,0,16,214,255,255,129,0,0,0,0,1,1,0,0,0,86,245,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,113,255,255,195,57,0,1,1,0,1,1,1,1,0,15,203,255,255,255,255,255,255,
0,0,0,0,0,0,0,1,1,0,32,234,255,255,162,1,2,1,1,1,1,1,1,0,0,0,8,198,255,255,255,255,
0,0,0,0,0,0,0,1,1,0,0,168,255,254,255,245,63,24,0,1,0,1,1,1,1,1,0,31,236,255,255,255,
0,0,0,0,0,0,0,0,0,0,1,0,88,234,255,255,255,188,20,40,0,0,0,0,0,34,14,0,185,228,255,255,
0,0,0,0,0,0,0,0,0,0,1,0,34,200,255,255,255,255,194,255,232,255,221,151,254,236,211,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,1,1,1,0,0,161,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,1,1,1,0,124,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,118,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,119,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,208,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,9,67,249,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,176,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,69,250,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,17,147,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,253,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,63,250,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,1,0,4,0,0,113,255,255,246,255,230,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,1,0,4,174,239,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,151,68,252,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,20,151,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,53,220,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,90,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,89,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,89,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,89,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,1,1,0,89,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,1,1,0,50,246,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255
};

byte matrizB[theta*leds] =
{0,0,0,0,0,0,0,0,25,230,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,175,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,2,0,107,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,1,1,2,0,32,227,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,1,1,1,0,0,114,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,1,1,0,12,184,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,1,1,0,0,30,202,27,183,255,255,249,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,1,1,0,1,0,0,10,107,8,117,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,1,0,0,1,1,1,0,1,0,0,238,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,1,1,0,1,1,0,41,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,42,236,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,153,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,60,245,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,190,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,110,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,52,237,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,11,131,255,254,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,83,250,254,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,1,0,229,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,207,255,254,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,232,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,37,115,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,15,241,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,11,189,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,27,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,60,250,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,20,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,97,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,55,206,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,1,1,0,86,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,1,1,0,101,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,1,1,0,82,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,1,1,0,56,251,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,1,1,0,18,219,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,1,0,134,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,39,156,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,77,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,37,239,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,232,232,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,40,240,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,87,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,168,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,58,192,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,16,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,45,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,84,255,254,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,138,249,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,1,2,0,23,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,70,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,142,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,1,0,99,217,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,1,0,14,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,86,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,1,10,203,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,1,0,104,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,27,229,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,1,0,156,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,1,0,0,75,254,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,1,1,24,219,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,162,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,56,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,230,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,207,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,193,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,183,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,177,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,190,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,203,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,226,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,54,248,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,103,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,171,234,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,36,255,254,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,114,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,14,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,26,220,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,3,164,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,114,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,252,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,253,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,19,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,214,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,1,20,103,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,1,2,0,0,222,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,1,1,1,0,85,254,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,1,1,0,39,238,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,1,1,1,0,33,234,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,1,1,0,28,229,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,1,1,0,32,230,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,1,1,0,54,245,234,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,103,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,1,177,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,44,241,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,1,151,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,1,0,27,231,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,1,0,78,254,255,255,246,248,252,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,1,0,89,255,255,248,87,50,59,92,148,213,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,1,0,71,253,255,254,78,0,0,0,1,0,0,16,126,244,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,1,0,16,214,255,255,129,0,0,0,0,1,1,0,0,0,86,245,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,113,255,255,195,57,0,1,1,0,1,1,1,1,0,15,203,255,255,255,255,255,255,
0,0,0,0,0,0,0,1,1,0,32,234,255,255,162,1,2,1,1,1,1,1,1,0,0,0,8,198,255,255,255,255,
0,0,0,0,0,0,0,1,1,0,0,168,255,254,255,245,63,24,0,1,0,1,1,1,1,1,0,31,236,255,255,255,
0,0,0,0,0,0,0,0,0,0,1,0,88,234,255,255,255,188,20,40,0,0,0,0,0,34,14,0,185,228,255,255,
0,0,0,0,0,0,0,0,0,0,1,0,34,200,255,255,255,255,194,255,232,255,221,151,254,236,211,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,1,1,1,0,0,161,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,1,1,1,0,124,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,118,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,119,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,208,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,9,67,249,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,176,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,69,250,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,17,147,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,253,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,63,250,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,1,0,4,0,0,113,255,255,246,255,230,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,1,0,4,174,239,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,0,151,68,252,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,20,151,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,0,53,220,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,90,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,89,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,89,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,0,0,0,89,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,1,1,0,89,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
0,0,0,0,0,1,1,0,50,246,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255
};
void setup() {

  Serial.begin(9600);
  for(int i=theta*leds*0; i<theta*leds*1; i++){EEPROM.write(i, matrizR[i-theta*leds*0]);}
  for(int i=theta*leds*1; i<theta*leds*2; i++){EEPROM.write(i, matrizG[i-theta*leds*1]);}
  for(int i=theta*leds*2; i<theta*leds*3; i++){EEPROM.write(i, matrizB[i-theta*leds*2]);}
  //Serial.println(EEPROM.read(theta*leds*2+(320-1)));
  //Serial.println(EEPROM.length());

}

void loop() {

}
