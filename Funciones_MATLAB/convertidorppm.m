%% convertidorppm 
% Autor: Nicolas Pedraza
% Fecha: 02/06/2020
% Version: 1.3
% Esta funcion convierte una imagen .jpg o .png a ppm tipo P3 (ASCII)
% Cuando la imagen no es un nombre sino una matriz de matlab es necesario
% especificar el nombre (nombre_out)
function convertidorppm(nombre,nombre_out)
if ischar(nombre)
    I = imread(nombre);
    archivo = nombre;
    archivo(end-3:end) = [];
    archivo = [archivo '.ppm'];
else
    I = nombre;
    archivo = nombre_out;
    archivo = [archivo '.ppm'];
end
alto = size(I,1);
ancho = size(I,2);
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
fileID = fopen(archivo,'w');
fprintf(fileID,'P3\n%d %d\n255\n',ancho,alto);
fprintf(fileID,'%d ',vec);
fclose(fileID);