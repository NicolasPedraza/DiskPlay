%% plantilla_imagen_C
% plantilla_imagen_C(imagen,leds,theta,nombre,hueco)
% Autor: Nicolas Pedraza
% Proyecto: DiskPlay
% Fecha: 18/06/2020
% Version: 1.0
% Esta funcion se encarga de generar una matriz en lenguaje C, donde el numero de filas
% son los grados que se quieren mostrar y las columnas el numero de LEDs para un display
% giratorio.
% Esta matriz se guardara en un archivo .txt
% A esta funcion se le ingresa:
% imagen: La imagen a convertir
% leds: Numero de LEDs
% theta: Numero de angulos
% nombre: Nombre del archivo que quiere crear

function plantilla_imagen_C(imagen,leds,theta,nombre,hueco)
cambio_theta = 360/theta;
archivo = [nombre '.txt'];
fileID = fopen(archivo,'w');

% Se forma matrizR
fprintf(fileID,'/*\nNombre Imagen: %s \n',imagen);
fprintf(fileID,'Numero de LEDs: %d \n',leds-hueco);
fprintf(fileID,'Numero de Angulos: %d \n*/\n\n',theta);

fprintf(fileID,'const int theta = %d;\n',theta);
fprintf(fileID,'const int leds = %d;\n\n',leds-hueco);
fprintf(fileID,'byte matrizR[theta][leds] =\n');
fprintf(fileID,'{');
for angulo = 0:cambio_theta:360-cambio_theta
    [lineaR,lineaG,lineaB] = lineaRGB(imagen,leds,angulo);
    if angulo ~= 360-cambio_theta
        fprintf(fileID,'{');
        fprintf(fileID,'%d,',lineaR(1+hueco:end-1));
        fprintf(fileID,'%d',lineaR(end));
        fprintf(fileID,'},\n');
    else
        fprintf(fileID,'{');
        fprintf(fileID,'%d,',lineaR(1+hueco:end-1));
        fprintf(fileID,'%d',lineaR(end));
        fprintf(fileID,'}');
    end
end
fprintf(fileID,'};');

fprintf(fileID,'\n\n');

% Se forma matrizG
fprintf(fileID,'byte matrizG[theta][leds] =\n');
fprintf(fileID,'{');
for angulo = 0:cambio_theta:360-cambio_theta
    [lineaR,lineaG,lineaB] = lineaRGB(imagen,leds,angulo);
    if angulo ~= 360-cambio_theta
        fprintf(fileID,'{');
        fprintf(fileID,'%d,',lineaG(1+hueco:end-1));
        fprintf(fileID,'%d',lineaG(end));
        fprintf(fileID,'},\n');
    else
        fprintf(fileID,'{');
        fprintf(fileID,'%d,',lineaG(1+hueco:end-1));
        fprintf(fileID,'%d',lineaG(end));
        fprintf(fileID,'}');
    end
end
fprintf(fileID,'};');

fprintf(fileID,'\n\n');

% Se forma matrizB
fprintf(fileID,'byte matrizB[theta][leds] =\n');
fprintf(fileID,'{');
for angulo = 0:cambio_theta:360-cambio_theta
    [lineaR,lineaG,lineaB] = lineaRGB(imagen,leds,angulo);
    if angulo ~= 360-cambio_theta
        fprintf(fileID,'{');
        fprintf(fileID,'%d,',lineaB(1+hueco:end-1));
        fprintf(fileID,'%d',lineaB(end));
        fprintf(fileID,'},\n');
    else
        fprintf(fileID,'{');
        fprintf(fileID,'%d,',lineaB(1+hueco:end-1));
        fprintf(fileID,'%d',lineaB(end));
        fprintf(fileID,'}');
    end
end
fprintf(fileID,'};');

fclose(fileID);