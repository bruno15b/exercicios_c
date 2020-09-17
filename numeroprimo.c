#include <stdio.h>
#include <stdlib.h>

void main(){

    int n,aux=0;

    printf("Infome um número:");
    scanf("%d",&n);

    for(int i=2; i<=n;i++){
          if(n%2==0){
            aux++;
        }
    }

    if(aux>1){
     printf("O número não é Primo!");
    }else printf("O número é Primo!");

}
