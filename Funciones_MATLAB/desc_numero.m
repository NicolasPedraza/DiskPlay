%% Descomposicion numero
% Esta funcion descompone el numero y le agrega los ceros necesarios para que siempre
% se tenga a la salida un string de 3 digitos
function [string] = desc_numero(num);
unidades = num;
centenas = floor(unidades/100);
unidades = unidades - 100*centenas;
decenas = floor(unidades/10);
unidades = unidades - 10*decenas;
bandera = 0;

string = num2str(num);

if centenas == 0 & decenas == 0 & unidades == 0
    string = '000';
else if centenas == 0 & decenas == 0
        string = ['00' num2str(num)];
    else if (centenas == 0 & unidades == 0) | (centenas == 0)
            string = ['0' num2str(num)];
        end
    end
end
    





