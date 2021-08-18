#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int l1, l2, l3;

    //input
    scanf("%d %d %d",&l1, &l2, &l3);
    
    //operations and results
    if (l1 + l2 >= l3 && l1 + l3 >= l2 && l2 + l3 >= l1)
    {
        if (l1 == l2 && l2 == l3 && l3 == l1){
            printf ("TRIANGULO EQUILATERO");
        }
        else if (l1 == l2 || l2 == l3 || l3 == l1){
            printf ("TRIANGULO ISOSCELES");
        }
        else if (l1 != l2 && l2 != l3 && l3 != l1){
            printf ("TRIANGULO ESCALENO");
        }
    }
    else
    {
        printf ("OS LADOS NAO FORMAM UM TRIANGULO");
    }

    return 0;
}
