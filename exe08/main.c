#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int n[10];
    int cont = 0;

    //input
    for(int i = 0; i < 10; i++)
        scanf("%d",&n[i]);

    //operation and result
    while(n[cont] != 0){

        if(n[cont]>0){
            printf("\nPOSITIVO");
        }else{
            printf("\nNEGATIVO");
        }

        cont++;

    }

    return 0;
}
