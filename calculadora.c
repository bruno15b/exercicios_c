#include <stdlib.h>
#include <stdio.h>

void main(){
    int a,n1,n2,res;
    float resdiv=0;


    printf("Informe os numeros:\n");
    scanf("%d %d",&n1,&n2);

    printf("Informe a operação que deseja realizar:\n  1-Adição\n  2-Subtração\n  3-Multiplicação\n  4-Divisão\n");
    scanf("%d",&a);

    switch(a){
    case 1 :

        res=n1+n2;
        printf("O resultado da soma %d + %d é %d.",n1,n2,res);

        break;

    case 2 :

        res=n1-n2;
        printf("O resultado da subtração %d - %d é %d.",n1,n2,res);

        break;

    case 3 :

        res=n1*n2;
        printf("O resultado da multiplicação %d * %d é %d.",n1,n2,res);

        break;

    case 4 :

        resdiv=(float)n1/n2;
        printf("O resultado da divisão %d / %d é %.2f.",n1,n2,resdiv);
        break;
    default: printf("Opção Inválida!");break;
    }
}
