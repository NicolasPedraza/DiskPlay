%% jpg o png to ppm (P3 ASCII)
I = imread('Ferrari.jpg');
tam = size(I);
alto = tam(1);
ancho = tam(2);
vec = zeros(1,alto*ancho);
i = 1;
for x = 1:alto
    for y = 1:ancho
        vec(i) = double(I(x,y,1));
        vec(i+1) = double(I(x,y,2));
        vec(i+2) = double(I(x,y,3));
        i=i+3;
    end
end

% fprintf
fileID = fopen('lobo.ppm','w');
fprintf(fileID,'P3\n%d %d\n255\n',ancho,alto);
fprintf(fileID,'%d ',vec);
fclose(fileID);

%% Separacion por RGB y Grises
I = imread('Ferrari.jpg');
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

% figure(1)
% subplot(221)
% imshow(I)
% subplot(222)
% imshow(red)
% subplot(223)
% imshow(green)
% subplot(224)
% imshow(blue)

% figure(2)
% subplot(221)
% imshow(I)
% subplot(222)
% imshow(I(:,:,1))
% subplot(223)
% imshow(I(:,:,2))
% subplot(224)
% imshow(I(:,:,3))

%% Para formato P3 .ppm (Separado por RGB)
diary prueba4.txt
clc
alto = 200;
ancho = 200;
disp('P3')
disp('570 760')
disp('255')
for x = 1:ancho
    for y = 1:alto
        r = double(I(x,y,1));
        g = double(I(x,y,2));
        b = double(I(x,y,3));

        disp([num2str(r),' ',num2str(g),' ',num2str(b),' ']);
    end
end
diary off

%% Para Programming Python
diary lobo.txt
clc
alto = 48;
ancho = 48;
I = imread("lobo.ppm");
disp('size (600,600)')
for x = 1:ancho
    for y = 1:alto
        r = double(I(x,y,1));
        g = double(I(x,y,2));
        b = double(I(x,y,3));

        disp(['fill(',num2str(r),',',num2str(g),',',num2str(b),')']);
        disp(['stroke(',num2str(r),',',num2str(g),',',num2str(b),')']);
        disp(['rect(',num2str(y*10),',',num2str(x*10),',10,10)']);
    end
end
diary off