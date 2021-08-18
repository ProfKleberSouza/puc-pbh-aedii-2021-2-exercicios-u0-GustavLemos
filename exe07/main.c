#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int nSize = 0;
    int maior = 0;
    int menor = 0;

    //input nSize
    scanf("%d",&nSize);

    int arrayN[nSize];

    // inputs in array
    for(int i = 0; i < nSize; i++){
       scanf("\n%d",&arrayN[i]);
    }

    //operations
    for(int j = 0; j < nSize ; j++){
        if(arrayN[j] > maior){
            maior = arrayN[j];
            }
    }

    menor = maior;

    for(int k = 0; k < nSize ; k++){
        if(arrayN[k] < menor){
            menor = arrayN[k];
            }
    }

    //results
    printf("MENOR = %d\nMAIOR = %d",menor,maior);

    return 0;
}
