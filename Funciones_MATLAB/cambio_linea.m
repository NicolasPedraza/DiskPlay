%% cambio_linea
% Autor: Nicolas Pedraza
% Fecha: 09/06/2020
% Version: 1.0
% Esta funcion se le ingresa:
% - IB: la imagen
% - grid_rho, grid_theta: los grid en coordenadas polares
% - linea_ang: linea que contiene los angulos de cada uno de los leds
% Retorna:
% - S: La imagen oscureciendo el grado en el que se encuentra la linea LED
% Se descompone la imagen de la bicicleta
function [S] = cambio_linea(IB,grid_rho,grid_theta,linea_ang)
R = IB(:,:,1);
G = IB(:,:,2);
B = IB(:,:,3);
[X,Y] = meshgrid(1:length(IB),1:length(IB)); % Cuadricula de coordenadas
% Se busca la posicion x,y , toca de esta forma para que no se repitan si
% hay mas de un valor
for cont_angulo = 1:(length(IB)-1)/2
    x = X(grid_rho == cont_angulo & grid_theta == linea_ang(cont_angulo));
    y = Y(grid_rho == cont_angulo & grid_theta == linea_ang(cont_angulo));
    for i=1:length(IB)
        for j = 1:length(IB)
            if i == x & j==y
                R(y,x) = 0;
                G(y,x) = 0;
                B(y,x) = 0;
            end
        end
    end
end
% Se reconstruye la imagen
S(:,:,1) = R;
S(:,:,2) = G;
S(:,:,3) = B;
