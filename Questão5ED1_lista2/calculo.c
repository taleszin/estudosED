#include "calculo.h"
double calc_area(double d){
 double a;
 double r = d/2;
 a = 4 * _PI * (r*r);
 return a;
}
double calc_raio (double d){
double r = d/2;
return r;
}
double calc_volume (double d){
double r = d/2;
double v;
v = (4.0/3.0)* _PI * (r*r*r); // � necess�rio utilizar uma casa decimal nos n�meros da divis�o pois, caso contr�rio, s�o interpretados como uma divis�o de n�mero inteiro, resultando 1, e n�o 1.33
return v;
}

