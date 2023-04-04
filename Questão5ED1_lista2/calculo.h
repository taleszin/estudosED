#ifndef CALCULO_H_INCLUDED
#define CALCULO_H_INCLUDED
// Defini��o da constante _PI
#define _PI  3.14

// Defini��o da struct Calculo, que cont�m 3 ponteiros para fun��o
typedef struct {
    double (*raio)(double r);
    double (*area)(double a);
    double (*volume)(double v);
} Calculo;

// Prot�tipos das fun��es que ser�o definidas em "calculo.c"
double calc_raio(double r);
double calc_area(double a);
double calc_volume(double v);

#endif // CALCULO_H_INCLUDED
