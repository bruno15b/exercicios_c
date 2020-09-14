#include <stdio.h>
#include <stdlib.h>

void main(){
  float a,b,c,r;

  printf("Informe a primeira nota:");
  scanf("%f",&a);
  printf("Informe a segunda nota:");
  scanf("%f",&b);
  printf("Informe a terceira nota:");
  scanf("%f",&c);

  r=(a+b+c)/3;

  printf("A média das notas é %.2f .",r);

}

