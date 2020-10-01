#include <stdlib.h>
#include <stdio.h>

void main(){

    int x;

    printf("Informe a quantidade de notas:");
    scanf("%d",&x);

    float vetor[x],soma=0;

    for(int cont=0;cont<x;cont++){

        printf("Nota %d : ",cont+1);
        scanf("%f", &vetor[cont]);
        soma=soma+vetor[cont];
    }

    printf("A média das notas é de %.2f.",soma/x);


}
