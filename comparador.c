#include <stdio.h>
#include <stdlib.h>

void main(){

    int a,b;

    printf("Digite o valor de a: ");
    scanf("%d",&a);

    printf("Digite o valor de b: ");
    scanf("%d",&b);

    if(a>b){

        printf("O valor a é maior que o valor de b.");

    }else if(a<b){

        printf("O valor b é maior que o valor de a.");

    }else{

        printf("Os valores são iguais.");

    }

}
