%% agrandar_imagen
% [K] = agrandar_imagen(I)
% Autor: Nicolas Pedraza
% Proyecto: DiskPlay
% Fecha: 01/10/2020
% Version: 1.0
%
% Esta funcion le entra:
% I: Imagen para mostrar de forma radial
% n: Numero de veces que se quiere agrandar la imagen
% 
% Retorna:
% K: Imagen agrandada al tamaño deseado
function [K] = agrandar_imagen(I,n)
J = I(1,:);
for j=1:size(I,1)
    for i=1:n
        J = [J ; I(j,:)];
    end
end

K = J(:,1);

for j=1:size(I,2)
    for i=1:n
        K = [K J(:,j)];
    end
end

K(1,:)=[];
K(:,1)=[];

% subplot(121)
% imshow(I)
% subplot(122)
% imshow(K)


