#include <stdio.h>
#include <stdlib.h>

void main(){

    double a,b,c,r;

    printf("Digite os valores a,b,c em sequência:");
    scanf("%lf %lf %lf",&a,&b,&c);

    r=a*b*c;

    printf("O resutade de a*b*c é %.2lf",r);


}
