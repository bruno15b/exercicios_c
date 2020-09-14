#include <stdlib.h>
#include <stdio.h>

void main(){
    int a,b,c;

    printf("Informe os lados do triângulo em senquência.\n");
    scanf("%d %d %d",&a,&b,&c);

    if((a+b>c) && (a+c>b) && (b+c>a)){

        if(a==b && a==c){

            printf("É um triângulo equilátero!");

        }else if (a==b || a==c || b==c){

            printf("Existem pelo menos dois lados iguais.");
        }else printf("O triângulo não é equilátero.");

    }else printf("O triângulo não existe.");
}
