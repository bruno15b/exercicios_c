#include <stdlib.h>
#include <stdio.h>

void main(){

char palavra[255];

printf("Informe a palavra:");
setbuf(stdin,0);
fgets(palavra,255,stdin);
palavra[strlen(palavra)-1]='\0';
printf("%s", palavra);

}
