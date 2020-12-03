%% pixelpolar_RGB
% Autor: Nicolas Pedraza
% Proyecto: DiskPlay
% Fecha: 08/06/2020
% Version: 1.3
% Se filtran las coordenadas (polares) para obtener el RGB correspondiente
% Esta funcion se le ingresa:
% - Los datos de la funcion pixelpolar (grid_theta,gird_rho) de la imagen
% - La imagen (del mismo tamano de pixelpolar)
% - Las coordenadas rho y theta
% Retorna:
% Con el objetivo de retornar el valor RGB que es necesario en esa coordenada
% Nota: El tamano de los grid y la imagen deben ser IGUALES, si no
% encuentra el angulo lo aproximara al mas cercano.
% Retorna el angulo cercano existente en la matriz grid_theta
function [r,g,b,ang_cercano] = pixelpolar_RGB(radio,angulo,grid_rho,grid_theta,imagen)
if ischar(imagen) == 1
    imagen = imread(imagen);
end
[row col] = find(grid_rho==radio); % Se guardan las coordenadas del radio
for i=1:length(row)
    aux(i) = grid_theta(row(i),col(i)); %Guardo los angulos segun las coordenas del radio
end

if isempty(find(aux == angulo))== 1 % Evalua si existe el angulo (Si esta vacio...)
    aux_resta = abs(angulo-aux); % Se restan el angulo que se busca (angulo) por todos los angulos (aux) 
    [aux_x,aux_y] = find(aux_resta == min(aux_resta)); % Se busca las coordenadas del valor mas cercano definido por la resta
    ang_cercano = aux(aux_x,aux_y);
    % SOLO PASA SI QUEDA EN EL MEDIO
    if size(ang_cercano,2) ~= 1 % Se busca si quedo un vector en lugar de un escalar
        ang_cercano = ang_cercano(1); % Se asigna el primer valor
    end
else
    ang_cercano = angulo; % Se le asgna el angulo porque ya existe
end

% Se buscan las coordenadas cartesianas donde esta el angulo
for i=1:length(row)
    if grid_theta(row(i),col(i)) == ang_cercano
        row_save = row(i); % Se guarda la coordenada row_angulo
        col_save = col(i); % Se guarda la coordenada col_angulo
    end
end

% Se indexa sobre la imagen en las 3 dimensiones para encontrar el valor
% RGB
r = imagen(row_save,col_save,1);
g = imagen(row_save,col_save,2);
b = imagen(row_save,col_save,3);