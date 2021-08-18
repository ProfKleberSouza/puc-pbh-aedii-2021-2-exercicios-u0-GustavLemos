#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int vet[10], vetInvert[10];
    int i;

    //input
    for(int i = 0; i < 10; i++) {
        scanf("%d", &vet[i]);
    }
    
    //operation and result
    for(int j = 0; j < 10; j++) {
        vetInvert[j] = vet[10-j-1];
        printf("\n%d", vetInvert[j]);
    }
    return 0;
}
