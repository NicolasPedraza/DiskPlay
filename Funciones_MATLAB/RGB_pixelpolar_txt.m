%% RGB_pixelpolar_txt
% RGB_pixelpolar_txt(imagen,leds,theta,nombre)
% Autor: Nicolas Pedraza
% Proyecto: DiskPlay
% Fecha: 14/07/2020
% Version: 1.0
%
Esta funcion se encarga de crear un txt donde cada renglon representa el numero de 
angulos y muestra en cada los valores de R de todos los leds, luego G y finalmente B

A esta funcion se le ingresa:
imagen: La imagen a convertir
leds: Numero de LEDs
theta: Numero de angulos
nombre: Nombre del archivo que quiere crear (sin .txt)
function RGB_pixelpolar_txt(imagen,leds,theta,nombre)
cambio_theta = 360/theta;
archivo = [nombre '.txt'];
fileID = fopen(archivo,'w');
for angulo = 0:cambio_theta:360-cambio_theta
    [lineaR,lineaG,lineaB] = lineaRGB(imagen,leds,angulo);
    for i=1:length(lineaR)
        lineaR_str(i) = string(desc_numero(double(lineaR(i))));
        lineaG_str(i) = string(desc_numero(double(lineaG(i))));
        lineaB_str(i) = string(desc_numero(double(lineaB(i))));
    end
    fprintf(fileID,'%s,',lineaR_str);
    fprintf(fileID,'%s,',lineaG_str);
    for i=1:length(lineaB)
        if i ~= length(lineaB)
            fprintf(fileID,'%s,',lineaB_str(i));
        else
            fprintf(fileID,'%s',lineaB_str(i));
        end
    end
    if angulo ~= 360-cambio_theta
        fprintf(fileID,'\n'); % Salto de linea
    end
end
fclose(fileID);