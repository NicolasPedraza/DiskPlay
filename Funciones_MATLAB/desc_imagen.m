%% desc_imagen 
% Separacion por RGB y Grises
% Autor: Nicolas Pedraza
% Fecha: 01/06/2020
% Version: 1.0
% En esta funcion se descompone la imagen .jpg .png .ppm en su escala de
% RGB y su escala se Grises.
function desc_imagen(nombre)
if ischar(nombre) == 1
    I = imread(nombre);
else 
    I = nombre;
end
red = I;
green = I;
blue = I;

red(:,:,2) = 0;
red(:,:,3) = 0;

green(:,:,1) = 0;
green(:,:,3) = 0;

blue(:,:,1) = 0;
blue(:,:,2) = 0;

subplot(311)
imshow(I)
title('Imagen Original')
subplot(334)
imshow(red)
title('R')
subplot(335)
imshow(green)
title('G')
subplot(336)
imshow(blue)
title('B')

subplot(337)
imshow(I(:,:,1))
title(' Gris R')
subplot(338)
imshow(I(:,:,2))
title('Gris G')
subplot(339)
imshow(I(:,:,3))
title('Gris B')