#include <stdio.h>
#include <stdlib.h>
#include "calculo.h"
int main()
{
    double x = 5; //x � o valor do di�metro
    double are = area(x);
    double rai = raio(x);
    double vol = volume(x);
    printf("%f %f %f", are, rai, vol);
    return 0;
}
