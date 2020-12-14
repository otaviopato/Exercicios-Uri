#include <stdio.h> 
int main(){


float N1, N2, N3, N4;


scanf("%f %f %f %f", &N1, &N2, &N3, &N4);

float MEDIA;
MEDIA = (N1*0.2+N2*0.3+N3*0.4+N4*0.1);

if (MEDIA>=7){

    printf("Media: %.1f\nAluno aprovado.\n", MEDIA);
}
else if (MEDIA <=4.9){

    printf("Media: %.1f\nAluno reprovado.\n", MEDIA);
}


else if (MEDIA >=5 && MEDIA<7){
    float NE, MF;
    scanf("%f", &NE);
    
    MF = (MEDIA+NE)/2;
    if (MF>=5){

        printf("Media: %.1f\nAluno em exame.\nNota do exame: %.1f\nAluno aprovado.\nMedia final: %.1f\n", MEDIA, NE, MF);
    }
    else if (MF<=4.9){
        printf("Media: %.1f\nAluno em exame.\nNota do exame: %.1f\nAluno reprovado.\nMedia final: %.1f\n", MEDIA, NE, MF);
}

}
return 0;
}