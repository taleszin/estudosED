#include "calculo.h"
double area(double d){
 double a;
 double r = d/2;
 a = 4 * _PI * (r*r);
 return a;
}
double raio (double d){
double r = d/2;
return r;
}
double volume (double d){
double r = d/2;
double v;
v = (4.0/3.0)* _PI * (r*r*r); // é necessário utilizar uma casa decimal nos números da divisão pois, caso contrário, são interpretados como uma divisão de número inteiro, resultando 1, e não 1.33
return v;
}

