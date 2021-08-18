#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int a, b, c, menor, maior;
    //input
    scanf("%d %d %d", &a, &b, &c);


    menor = a;
    maior = a;

    //operations
    if(menor > b)
        menor = b;
    if(menor > c)
        menor = c;

    if(maior < b)
        maior = b;
    if(maior < c)
        maior = c;

    //result
    printf("\nMENOR = %d\nMAIOR = %d", menor, maior);

    return 0;
}


