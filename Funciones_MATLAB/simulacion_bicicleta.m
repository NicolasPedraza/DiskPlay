%% simulacion_bicicleta
% simulacion_bicicleta(imagen,leds,helices)
% Autor: Nicolas Pedraza
% Proyecto: DiskPlay
% Fecha: 09/06/2020
% Version: 1.4
% Esta funcion se creo con el fin de observar el funcionamiento de un
% display giratorio, donde se le ingresa una imagen cualquiera y la adapta
% segun el numero de leds y helices que tenga disponibles 
% 
% Esta funcion se le ingresa:
% - Imagen a mostrar (.jpg .png .ppm)
% - Numero de leds de la linea LED
% - Numero de helices requeridas
% Retorna:
% Una simulacionn de como se veria el movimiento de los LED sobre la imagen a mostrar
function simulacion_bicicleta(imagen,leds,helices)
dif_angulo = 360/helices;
vueltas = 3; % Numero de vueltas de la simulacion
cambio_angulo = 12; % Cambio de angulo (Intervalo)

% Se crea la division por angulos
for angulo_aux = 0:cambio_angulo:360*vueltas 
    cont_vueltas = floor(angulo_aux/360); % Lleva el conteo de vueltas
    angulo = angulo_aux - 360*cont_vueltas; % Angulo en el que se encuentra la helice
    
    ang(1) = angulo;
    for i = 1:helices
        ang(i+1) = ang(i) + dif_angulo; % Se suma el intervalo para hallar los angulos de las helices
        if ang(i+1)>359
            ang(i+1) = ang(i+1) - 360; % Si supera la vuelta se le resta 360 grados
        end

    end
    I_N = zeros(2*leds+1,2*leds+1,3); % Se crea imagen negra
    [lineaR,lineaG,lineaB,linea_ang,grid_theta,grid_rho,IB,IC,IO] = lineaRGB(imagen,leds,ang(1));
    [T] = color_linea(I_N,grid_rho,grid_theta,linea_ang,lineaR,lineaG,lineaB);
    S(:,:,1:3) = T;
    % Se sobrepone la imagen de cada grado
    for i = 0:helices-2
        [lineaR,lineaG,lineaB,linea_ang,grid_theta,grid_rho,IB,IC,IO] = lineaRGB(imagen,leds,ang(i+2));
        [T] = color_linea(S(:,:,3*i+1:3*i+3),grid_rho,grid_theta,linea_ang,lineaR,lineaG,lineaB);
        S(:,:,3*(i+1)+1:3*(i+1)+3) = T;
    end
    subplot(224)
    imshow(S(:,:,helices*3-2:helices*3))
    title('Movimiento Linea LED')
    
    subplot(221)
    imshow(IO)
    title('Imagen Original')

    subplot(222)
    imshow(IC)
    title('Imagen Recortada')

    subplot(223)
    imshow(IB)
    title('Vista Bicicleta')
    
    pause(1e-3)
end