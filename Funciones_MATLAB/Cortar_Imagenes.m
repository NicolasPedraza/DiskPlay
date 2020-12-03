%% Generar Circulo y Corte de Imagen
close all;
clc;
I = imread('apple.ppm');
IO = I;
leds = 24;
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
circulo3(:,:,1) = circulo2;
circulo3(:,:,2) = circulo2;
circulo3(:,:,3) = circulo2;
%imshow(circulo3); 

% Cambio de Valores NO necesarios:
I(circulo3==0) = 0; % Se cambia a negro
%imshow(I)

% Recorte de Imagen para que solo quede en forma de circulo
I2 = I;
if x>y
    I2(:,1:size(complemento,2),:)=[];
    I2(:,end-size(complemento,2)+1:end,:)=[];
end
if x<y
    I2(1:size(complemento,1),:,:)=[];
    I2(end-size(complemento,1)+1:end,:,:)=[];
end
% Cambiar tamaño (Vistas)
subplot(211)
imshow(IO)
title('Imagen Original')

subplot(223)
imshow(I2)
title('Imagen Recortada')

I3 = imresize(I2, [leds*2 NaN]);
subplot(224)
imshow(I3)
title('Vista Bicicleta')