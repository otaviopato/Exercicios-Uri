#include <stdio.h>

int main(){

char NV[999];
double SF, TV;

scanf("%s %lf %lf", &NV, &SF, &TV);
TV = (TV*15/100);
double TM;
TM = TV+SF;

printf("TOTAL = R$ %.2lf\n",TM);




return 0;

}