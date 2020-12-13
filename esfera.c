#include <stdio.h>
int main(){

    double pi = 3.14159, raioesfera;

    scanf("%lf", &raioesfera);

    double formula = (4/3.0)*pi*(raioesfera*raioesfera*raioesfera);

printf("VOLUME = %.3lf\n", formula);

return 0;



}