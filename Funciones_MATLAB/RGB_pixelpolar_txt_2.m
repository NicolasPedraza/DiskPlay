%% RGB_pixelpolar_txt_2
% RGB_pixelpolar_txt_2(imagen,leds,theta,nombre)
% Autor: Nicolas Pedraza
% Proyecto: DiskPlay
% Fecha: 14/07/2020
% Version: 1.0
%
% Esta funcion se encarga de crear un txt donde cada renglon representa el numero de 
% angulos y muestra en cada los valores de RGB del primer led, RGB del
% segundo y asi sucesivamente
%
% A esta funcion se le ingresa:
% imagen: La imagen a convertir
% leds: Numero de LEDs
% theta: Numero de angulos
% nombre: Nombre del archivo que quiere crear (sin .txt)

function RGB_pixelpolar_txt_2(imagen,leds,theta,nombre)
cambio_theta = 360/theta;
fileID = fopen('prueba.txt','w');

for angulo = 0:cambio_theta:360-cambio_theta
    [lineaR,lineaG,lineaB] = lineaRGB(imagen,leds,angulo);
    if angulo ~= 360-cambio_theta % Mientras angulo sea != a ultimo valor
        for i=1:length(lineaR)
            fprintf(fileID,'%d,',lineaR(i));
            fprintf(fileID,'%d,',lineaG(i));
            fprintf(fileID,'%d',lineaB(i));
            if i ~= length(lineaR) % Si no ha llegado al ultimo valor
                fprintf(fileID,',');
            else
                fprintf(fileID,'\n'); % Salto de linea
            end
        end
    else % Ultima linea
        for i=1:length(lineaR)
            fprintf(fileID,'%d,',lineaR(i));
            fprintf(fileID,'%d,',lineaG(i));
            fprintf(fileID,'%d',lineaB(i));
            if i ~= length(lineaR) % Si no ha llegado al ultimo valor
                fprintf(fileID,',');
            end
        end
    end
end
fclose(fileID);