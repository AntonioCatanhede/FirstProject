#include <stdio.h>
#include <time.h>
#include <stdlib.h>
    
int main() {
    int a, b;

    srand(time(NULL));

    a = rand() % 100 + 1;
    b = rand() % 100 + 1;
    printf("os numero sorteados sao %d %d \n", a,b);
    
    printf("maior numero= %d \n", a > b ? a : b);

    return 0; 
    // printf("intervalo da rand: [0,%d]\n", RAND_MAX);
    // srand( (unsigned)time(NULL) );

    // for(i=1 ; i <= 2 ; i++)
    //     printf("Numero %d: %d\n",i, rand());
    
    // return 0;
}
