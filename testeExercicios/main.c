#include <stdio.h>
#include <stdlib.h>
#include "calculos.h"
int main(){
printf("digite o raio do seu circulo\n");
double y;
scanf("%lf", &y);
double areas = area(y);
printf("a �rea eh%.2f",areas);
return 0;
}
