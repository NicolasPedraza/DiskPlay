%% lineaRGB
% [lineaR,lineaG,lineaB,linea_ang,grid_theta,grid_rho,IB,IC,IO] =
% lineaRGB(imagen,leds,angulo)
% Autor: Nicolas Pedraza
% Proyecto: DiskPlay
% Fecha: 08/06/2020
% Version: 1.0
% En esta funcion se obtiene el RGB de cada LED correspondiente al angulo
% en el que se encuentre la linea de LEDS del diplay giratorio
% Ingresa:
% - Imagen a mostrar (.jpg .png .ppm)
% - Numero de LEDs
% - Angulo
% Regresa:
% - Linea RGB del LED mas cercano al centro al mas lejano
% - linea_ang: Coordenadas de los angulos de cada uno de los LEDS
% - IB: Imagen bicicleta
% - grid_theta, grid_rho: Grids en coordenadas polares
function [lineaR,lineaG,lineaB,linea_ang,grid_theta,grid_rho,IB,IC,IO] = lineaRGB(imagen,leds,angulo)
[IB,IC,IO] = vista_bicicleta(imagen,leds); % Hallo la imagen de la bicicleta
[grid_theta,grid_rho] = pixelpolar(length(IB)); % Cuadriculas en coordenadas polares de IB
% Se evalua el RGB correspondiente al # de LED y el angulo ingresado
for i=1:leds 
[r,g,b,ang_cercano] = pixelpolar_RGB(i,angulo,grid_rho,grid_theta,IB);
lineaR(i) = r;
lineaG(i) = g;
lineaB(i) = b;
linea_ang(i) = ang_cercano; % Linea de Angulos
end


   