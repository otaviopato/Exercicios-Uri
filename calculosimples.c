#include <stdio.h>

int main(){
    int CP1, NP1, CP2, NP2;
    double VU1, VU2;

    scanf("%d %d %lf %d %d %lf",&CP1, &NP1, &VU1, &CP2, &NP2, &VU2);

    VU1=  NP1*VU1;
    VU2 = NP2*VU2;
    double CALCULO = VU1+VU2;

    printf("VALOR A PAGAR: R$ %.2lf\n",CALCULO);

return 0;



}