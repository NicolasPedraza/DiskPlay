%% vista_bicicleta_2
% Autor: Nicolas Pedraza
% Proyecto: DiskPlay
% Fecha: 05/06/2020
% Version: 1.5
% Generar Circulo y Corte de Imagen
% Esta funcion se le ingresa el nombre de la imagen .jpg o .png y el numero 
% de leds que se tienen en linea de la bicicleta, con el objetivo
% de hacer una simulacion de como se vería la imagen en la bicicleta en
% movimiento.
% Ademas, con la ultima opcion de indica si se requiere el ppm de la imagen
% con: 1 (si), 0 (no)
% La funcion retorna:
% IO: Imagen original
% IC: Imagen recortada (misma resolucion)
% IB: Imagen bicicleta
function [IB,IC,IO] = vista_bicicleta2(nombre,leds,ppm)
I = imread(nombre);
IO = I;
% Se realiza un corte si la imagen tiene ancho o alto impar
if mod(size(I,1),2) == 1
    I(end,:,:) = [];
end
if mod(size(I,2),2) == 1
    I(:,end,:) = [];
end
x = size(I,2);
y = size(I,1);
cambiovalor = 1;

% Generando Circulo de corte para la Imagen:
if x<y
    r = x/2;
    [X, Y] = meshgrid(1:r*2, 1:r*2);
    circulo = zeros(2*r, 2*r);
    circulo((X - r).^2 + (Y - r).^2 <= r^2) = cambiovalor;
    complemento = zeros((y-x)/2,x);
    circulo2 = [complemento ; circulo ; complemento];
end
if x>y
    r = y/2;
    [X, Y] = meshgrid(1:r*2, 1:r*2);
    circulo = zeros(2*r, 2*r);
    circulo((X - r).^2 + (Y - r).^2 <= r^2) = cambiovalor;
    complemento = zeros(y,(x-y)/2);
    circulo2 = [complemento circulo complemento];
end
if x==y
    r = x/2;
    [X, Y] = meshgrid(1:r*2, 1:r*2);
    circulo = zeros(2*r, 2*r);
    circulo((X - r).^2 + (Y - r).^2 <= r^2) = cambiovalor;
    circulo2 = circulo;
end

% Asociandolo en las 3 dimensiones:
circulo3 = zeros(size(I));
% circulo3 = zeros(size(I),size(I),3);
circulo3(:,:,1) = circulo2;
circulo3(:,:,2) = circulo2;
circulo3(:,:,3) = circulo2;
%imshow(circulo3); 

% Cambio de Valores NO necesarios:
I(circulo3==0) = 0; % Se cambia a negro
%imshow(I)

% Recorte de Imagen para que solo quede en forma de circulo
% Recorte de los rectangulos sobrantes
IC = I;
if x>y
    IC(:,1:size(complemento,2),:)=[];
    IC(:,end-size(complemento,2)+1:end,:)=[];
end
if x<y
    IC(1:size(complemento,1),:,:)=[];
    IC(end-size(complemento,1)+1:end,:,:)=[];
end
%Cambiar tamaño (Vistas)
IB = imresize(IC, [leds*2+1 NaN]);

subplot(211)
subplot(221)
imshow(IO)
title('Imagen Original')

subplot(222)
imshow(IC)
title('Imagen Recortada')

subplot(223)
imshow(IB)
title('Vista Bicicleta')

if ppm == 1
    nombre_aux = nombre;
    nombre_aux(end-3:end) = [];
    convertidorppm(IB,[nombre_aux '_bicicleta']);
end