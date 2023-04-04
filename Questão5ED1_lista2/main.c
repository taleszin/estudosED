#include <stdio.h>
#include <stdlib.h>
#include "calculo.h"
int main()
{
    double x = 1; //x é o valor do diâmetro
    double are = calc_area(x);
    double rai = calc_raio(x);
    double vol = calc_volume(x);
    printf("%.2f %.2f %.2f", are, rai, vol);
    return 0;
}
