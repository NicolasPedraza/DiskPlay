%% imagen_radial_C
% imagen_radial_C(C,leds,nombre)
% Autor: Nicolas Pedraza
% Proyecto: DiskPlay
% Fecha: 01/10/2020
% Version: 1.0
%
% Esta funcion le entra:
% C: Imagen para mostrar de forma radial
% Leds: # leds del Display
% Nombre: Nombre del archivo
% 
% Retorna:
% Se genera un .txt con el codigo en C para adjuntar al codigo para generar la imagen radial

function imagen_radial_C(C,leds,nombre)

% Se centra la imagen
if mod(leds - size(C,1),2) == 0
    complemento = zeros((leds - size(C,1))/2,size(C,2));
    figura = [complemento; C; complemento];
else
    complemento1 = zeros((leds - size(C,1)+1)/2,size(C,2));
    complemento2 = zeros((leds - size(C,1)-1)/2,size(C,2));
    figura = [complemento1; C; complemento2];
end
 
% Se cambia la matriz para quedar como:
% Filas = # leds
% Columnas = # angulos
figura = fliplr(figura);
figura = fliplr(figura')*255  

% Crear matriz C para figura radial
archivo = [nombre '.txt'];
fileID = fopen(archivo,'w');
fprintf(fileID,'{');
for rows = 1:size(figura,1)
    fprintf(fileID,'{');
    for cols = 1:size(figura,2)
        if cols ~= size(figura,2)
            fprintf(fileID,'%d,',figura(rows,cols));
        else
            fprintf(fileID,'%d},',figura(rows,cols));
            fprintf(fileID,'\n');
        end
    end
end
fprintf(fileID,'};');
fclose(fileID);