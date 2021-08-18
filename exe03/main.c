#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){

    int n;

    //input
    scanf ("%d",&n);

    //operations and results
    if (n == 0){
        printf ("NUMERO NEUTRO");
    }else if(n % 2 == 0 && n>0) {
       printf ("NUMERO PAR POSITIVO");
    }else if(n % 2 != 0 && n>0) {
       printf ("NUMERO IMPAR POSITIVO");
    }else if(n % 2 == 0 && n<0) {
       printf ("NUMERO PAR NEGATIVO");
    }else if(n % 2 != 0 && n<0) {
       printf ("NUMERO IMPAR NEGATIVO");
    }

    return 0;
}


