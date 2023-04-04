#ifndef CALCULO_H_INCLUDED
#define CALCULO_H_INCLUDED
// Definição da constante _PI
#define _PI  3.14

// Definição da struct Calculo, que contém 3 ponteiros para função
typedef struct {
    double (*raio)(double r);
    double (*area)(double a);
    double (*volume)(double v);
} Calculo;

// Protótipos das funções que serão definidas em "calculo.c"
double calc_raio(double r);
double calc_area(double a);
double calc_volume(double v);

#endif // CALCULO_H_INCLUDED
