%% color_linea
% [S] = color_linea(I_N,grid_rho,grid_theta,linea_ang,lineaR,lineaG,lineaB)
% Autor: Nicolas Pedraza
% Proyecto: DiskPlay
% Fecha: 09/06/2020
% Version: 1.0
% Esta funcion se le ingresa:
% - IB: la imagen oscura
% - grid_rho, grid_theta: los grid en coordenadas polares
% - linea_ang: linea que contiene los angulos de cada uno de los leds
% Retorna:
% - S: La imagen a color en el grado en el que se encuentra la linea LED
% Se descompone la imagen de la bicicleta
function [S] = color_linea(IB,grid_rho,grid_theta,linea_ang,lineaR,lineaG,lineaB)
IB = double(IB);
% Se declaran todos como negros (descomposicion de imagen)
R = IB(:,:,1);
G = IB(:,:,2);
B = IB(:,:,3);
[X,Y] = meshgrid(1:length(IB),1:length(IB)); % Cuadricula de coordenadas
% Se busca la posicion x,y , toca de esta forma para que no se repitan si
% hay mas de un valor
for cont_led = 1:(length(IB)-1)/2
    x = X(grid_rho == cont_led & grid_theta == linea_ang(cont_led)); % Se encuentra la posicion en cartesianas (x) segun # de LED y angulo
    y = Y(grid_rho == cont_led & grid_theta == linea_ang(cont_led)); % Se encuentra la posicion en cartesianas (y) segun # de LED y angulo
    for i=1:length(IB)
        for j = 1:length(IB)
            if i == x & j==y % Si se encuentra las coordenadas para pintar
                R(y,x) = lineaR(cont_led); % Se pinta pixel
                G(y,x) = lineaG(cont_led); % Se pinta pixel
                B(y,x) = lineaB(cont_led); % Se pinta pixel
            end
        end
    end
end
% Se reconstruye la imagen
S(:,:,1) = R;
S(:,:,2) = G;
S(:,:,3) = B;
S = uint8(S);