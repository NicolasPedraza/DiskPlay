#include <EEPROM.h>
/*
Nombre Imagen: mcdonalds.png 
Numero de LEDs: 32 
Numero de Angulos: 42 
*/

const int theta = 42;
const int leds = 32;

byte matrizR[theta*leds] =
{254,254,254,254,254,254,254,254,254,254,254,254,253,251,246,253,255,255,255,255,255,248,249,253,254,254,254,254,254,254,254,254,
254,254,254,254,254,254,254,254,254,254,254,254,254,252,253,247,252,254,255,255,255,254,249,253,253,254,254,254,254,254,254,254,
254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,253,251,252,254,255,255,255,254,253,246,253,254,254,254,254,254,254,
254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,248,253,254,255,255,255,255,255,252,247,252,254,254,254,254,
254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,250,249,248,253,254,255,255,255,254,254,250,251,249,
254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,251,253,254,254,255,254,252,245,245,
252,248,253,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,
247,250,250,251,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,
255,255,255,253,251,248,252,250,249,253,253,253,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,
255,254,255,255,255,255,255,254,254,254,255,248,249,248,247,251,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,
255,255,255,254,255,255,255,255,255,255,255,255,254,253,244,250,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,
255,255,255,255,255,255,255,255,255,255,255,255,254,253,244,250,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,
255,255,253,253,252,250,247,250,249,250,250,253,251,253,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,
245,249,251,253,253,253,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,
252,252,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,
254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,252,254,251,254,254,254,254,
254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,251,252,253,254,254,254,255,254,254,252,244,242,
254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,251,248,253,252,254,255,255,255,254,255,252,250,249,254,254,
254,254,254,254,254,254,254,254,254,254,254,254,254,254,253,249,252,254,254,255,255,255,255,254,248,250,254,254,254,254,254,254,
254,254,254,254,254,254,254,254,254,254,254,253,250,251,252,254,254,255,255,255,255,253,251,253,254,254,254,254,254,254,254,254,
254,254,254,254,254,254,254,254,254,254,253,253,251,253,255,255,255,255,255,254,246,251,253,254,254,254,254,254,254,254,254,254,
254,254,254,254,254,254,254,254,254,254,253,253,248,253,255,255,255,254,252,251,252,253,253,254,254,254,254,254,254,254,254,254,
254,254,254,254,254,254,254,254,254,254,253,251,246,254,254,255,255,254,250,251,254,254,254,254,254,254,254,254,254,254,254,254,
254,254,254,254,254,254,254,254,254,254,253,251,250,253,255,255,255,255,250,249,252,254,254,254,254,254,254,254,254,254,254,254,
254,254,254,254,254,254,254,254,254,254,254,254,250,249,253,254,254,254,249,249,254,253,253,254,254,254,254,254,254,254,254,254,
254,254,254,254,254,254,254,254,254,254,254,253,253,253,249,253,253,254,253,248,249,253,254,254,254,254,254,254,254,254,254,254,
254,254,253,254,254,254,254,254,254,254,254,254,252,253,251,249,255,254,254,253,246,249,254,254,254,254,254,254,254,254,254,254,
253,251,253,253,253,254,254,254,254,254,254,254,254,254,254,254,250,249,252,253,254,249,248,252,253,254,254,254,254,254,254,254,
248,250,246,248,249,250,253,253,253,254,254,253,253,253,254,252,253,245,249,255,255,254,246,253,254,254,254,254,254,254,254,254,
253,254,253,253,255,255,251,252,254,250,252,253,250,253,253,253,253,254,254,247,251,243,253,253,254,254,254,254,254,254,254,254,
254,253,254,255,255,255,255,255,255,254,252,252,253,250,245,251,249,253,253,254,254,254,254,254,254,254,254,254,254,254,254,254,
255,253,254,253,252,249,248,247,251,252,252,252,253,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,
251,247,249,251,252,253,253,252,253,254,253,253,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,
253,250,253,253,250,249,246,253,247,248,252,248,250,253,253,253,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,
254,255,254,255,255,255,255,255,255,255,254,253,254,253,253,253,252,252,246,249,247,253,253,253,254,254,254,254,254,254,254,254,
254,255,255,255,255,255,251,251,249,250,248,248,249,247,251,249,245,245,247,255,255,255,254,247,253,253,254,254,254,254,254,254,
252,254,253,249,250,252,253,253,254,254,254,254,254,254,254,254,254,253,254,249,253,254,254,250,251,251,254,254,254,254,254,254,
247,252,246,251,254,254,254,254,254,254,254,253,254,254,253,253,250,249,252,255,255,254,250,254,254,254,254,254,254,254,254,254,
253,253,254,253,254,254,254,254,254,254,254,254,254,254,254,252,249,253,254,254,252,251,251,253,254,254,254,254,254,254,254,254,
254,254,254,254,254,254,254,254,254,254,254,254,254,254,249,252,254,254,254,252,247,251,253,252,253,254,254,254,254,254,254,254,
254,254,254,254,254,254,254,254,254,254,254,254,253,253,247,253,255,255,255,254,248,252,254,254,254,254,254,254,254,254,254,254,
254,254,254,254,254,254,254,254,254,254,254,254,252,251,252,255,255,255,254,253,249,252,254,254,254,254,254,254,254,254,254,254
};

byte matrizG[theta*leds] =
{0,0,0,0,0,0,0,0,0,0,0,0,1,0,78,224,216,216,216,216,222,176,4,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,185,220,216,216,216,216,225,138,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,120,226,216,216,216,216,217,220,58,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,74,221,216,216,216,216,216,215,224,150,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,23,203,219,216,216,216,216,216,218,205,25,29,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,181,178,221,216,216,222,172,172,
29,21,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
202,194,7,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
219,221,222,174,155,149,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
216,215,216,216,216,216,216,226,225,226,226,113,109,111,90,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
216,216,216,215,216,216,216,216,216,216,216,216,216,221,181,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
216,216,216,216,216,216,216,216,216,216,216,215,226,231,190,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
220,221,169,161,150,141,137,0,0,0,0,1,1,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
12,7,2,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,0,1,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,9,186,221,216,216,216,216,216,221,174,169,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,36,214,218,218,216,216,216,215,220,219,196,21,25,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,75,225,216,216,216,216,216,215,224,133,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,1,0,0,138,224,216,215,216,216,218,214,36,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,1,0,22,202,220,216,216,216,216,226,106,0,1,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,1,0,77,224,216,216,216,216,222,171,2,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,1,0,162,223,215,216,215,218,200,20,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,47,218,224,216,216,216,219,204,24,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,190,220,216,216,217,181,8,1,1,1,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,129,221,216,216,222,93,21,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,155,223,217,215,219,126,25,0,0,0,0,0,0,0,0,0,0,
0,12,0,1,1,0,0,0,0,0,0,0,0,0,0,0,8,182,223,216,215,194,28,0,1,0,0,0,0,0,0,0,
192,213,75,122,1,21,0,0,0,0,0,1,1,1,0,0,1,14,179,221,216,218,140,0,0,0,0,0,0,0,0,0,
218,215,216,225,219,216,222,226,222,216,225,221,225,221,225,217,216,216,221,185,221,64,0,0,0,0,0,0,0,0,0,0,
216,216,216,216,216,216,216,216,216,216,224,217,225,204,88,0,8,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,
215,217,220,225,222,188,117,42,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
201,104,20,0,0,0,1,1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
216,213,220,226,220,186,117,212,151,58,0,58,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
217,216,216,216,216,216,216,215,216,215,216,216,216,215,216,217,227,227,133,1,77,0,1,1,0,0,0,0,0,0,0,0,
217,216,216,216,222,218,204,222,121,181,47,118,13,84,0,10,111,82,144,223,225,216,226,93,0,1,0,0,0,0,0,0,
222,219,215,77,121,0,0,0,0,0,0,0,0,0,0,0,0,0,0,189,224,216,221,207,0,2,0,0,0,0,0,0,
131,0,16,0,1,0,0,0,0,0,0,1,0,0,1,0,0,27,225,216,216,219,201,0,0,0,0,0,0,0,0,0,
0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,3,176,218,216,216,219,200,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,11,213,218,216,216,222,120,0,0,2,1,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,79,225,216,216,216,218,165,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,1,0,181,220,216,216,216,219,202,0,0,0,0,0,0,0,0,0,0,0
};

byte matrizB[theta*leds] =
{0,0,0,0,0,0,0,0,0,0,0,0,0,2,6,2,0,0,0,0,0,5,3,1,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,1,1,3,8,2,1,1,1,1,2,5,1,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,2,1,0,0,0,0,2,4,1,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,2,1,0,0,0,0,0,2,9,2,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,4,8,2,0,0,0,0,0,1,3,4,4,
1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,3,1,1,0,2,14,14,
4,7,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
8,6,4,2,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,2,4,6,2,3,3,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,1,2,1,0,6,5,5,8,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,2,14,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,2,13,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,2,2,4,6,8,3,4,3,3,0,1,2,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
5,4,3,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,1,3,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,0,0,0,0,1,1,1,14,17,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,5,1,1,0,0,0,0,0,0,2,5,5,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,5,1,0,0,0,0,0,3,5,4,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,1,1,3,1,2,1,1,0,1,1,0,3,3,3,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,2,3,0,1,1,1,1,1,8,1,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,3,7,2,0,0,0,1,1,5,1,1,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,3,7,1,0,1,1,1,5,3,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,4,4,1,1,0,0,1,6,5,1,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,3,8,3,1,2,1,4,3,1,1,2,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,2,1,1,2,6,5,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,1,2,3,4,1,1,1,2,8,5,0,0,0,0,0,0,0,0,0,0,
0,3,1,2,1,0,0,0,0,0,0,0,0,0,0,0,3,6,4,2,1,6,6,3,2,1,0,0,0,0,0,0,
8,6,6,5,3,5,2,2,1,0,0,2,1,1,1,1,1,8,6,0,0,0,9,1,0,0,0,0,0,0,0,0,
1,0,1,2,0,0,3,2,1,4,3,2,4,2,2,1,2,1,2,9,5,10,1,2,0,0,0,0,0,0,0,0,
1,1,0,0,0,0,0,0,0,1,3,1,2,6,7,4,4,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,
1,3,3,3,4,5,7,5,3,1,2,3,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
3,8,5,4,1,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
3,4,2,2,5,6,6,3,8,5,2,6,3,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
1,1,1,1,0,0,0,0,0,1,1,2,1,1,2,2,3,3,9,4,8,2,1,2,0,0,0,0,0,0,0,0,
0,1,1,1,0,1,3,4,6,5,5,6,3,6,1,4,8,10,8,1,1,0,2,8,3,0,0,0,0,0,0,0,
2,1,3,5,4,2,0,1,0,0,0,0,0,0,0,0,0,1,2,7,2,2,2,6,1,3,0,0,0,0,0,0,
9,3,7,2,1,0,0,0,0,0,0,0,0,0,0,1,4,6,1,1,1,0,4,0,0,0,0,0,0,0,0,0,
3,1,1,1,0,0,0,0,0,0,0,0,0,0,0,1,6,2,1,1,2,5,3,0,0,0,0,0,0,0,0,0,
0,2,0,0,0,0,0,0,0,0,0,0,0,0,5,4,2,0,2,1,7,4,1,1,1,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,2,6,1,0,0,0,0,5,3,1,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,1,2,3,1,0,1,1,1,5,2,0,0,0,0,0,0,0,0,0,0
};
void setup() {

  Serial.begin(9600);
  for(int i=theta*leds*0; i<theta*leds*1; i++){EEPROM.write(i, matrizR[i-theta*leds*0]);}
  for(int i=theta*leds*1; i<theta*leds*2; i++){EEPROM.write(i, matrizG[i-theta*leds*1]);}
  for(int i=theta*leds*2; i<theta*leds*3; i++){EEPROM.write(i, matrizB[i-theta*leds*2]);}
  //Serial.println(EEPROM.read(theta*leds*2+(320-1)));
  //Serial.println(EEPROM.length());

}

void loop() {

}