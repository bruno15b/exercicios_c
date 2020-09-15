#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void main(){

    srand ((unsigned)time(NULL));

    for(int i=1 ; i <= 10 ; i++)
        printf("Numero %d: %d\n",i, 1+rand()%5);

}
