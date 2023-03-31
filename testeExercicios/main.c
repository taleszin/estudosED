#include <stdio.h>
#include <stdlib.h>
#include "calculos.h"
int main(){
printf("digite o raio do seu circulo\n");
double y;
scanf("%lf", &y);
double areas = area(y);
double compri = comprimento(y);
double diam = diametro(y);
printf("a area eh %.2f\n",areas);
printf("o comprimento eh %.2f\n",compri);
printf("o diametro eh %.2f\n",diam);
return 0;
}
