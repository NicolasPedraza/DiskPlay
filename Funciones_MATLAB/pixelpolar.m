%% pixelpolar
% Se cambia la cuadricula de coordenadas cartesianas a polares
% Autor: Nicolas Pedraza
% Proyecto: DiskPlay
% Fecha: 07/06/2020
% Version: 1.1
% A esta funcion se le ingresa la longitud de la imagen recortada de la bicicleta
% (circulo) para retornar en coordenadas polares la posicion de cada pixel
% donde:
% Angulos: Grados 
% Radios: Numero de LEDS
function [grid_theta,grid_rho] = pixelpolar(ancho)
lim = (ancho-1)/2;
[x,y] = meshgrid(-lim:lim,-lim:lim); % Matrices de coord. cartesianas
[theta,rho] = cart2pol(x,y); % Se transforman de cartesianas a polares
grid_rho = floor(rho); % Se aproxima al radio entero menor
grid_theta = theta*180/pi; % Se cambian los angulos de radianes a grados
aux = grid_theta; % Matriz aux de angulos
grid_theta(grid_theta<0) = aux(aux<0)+360; % Los angulos negativos se les suma 360
grid_theta = round(grid_theta); % Se aproximan los angulos