#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    float a, b, c, d, media;
    //input
    scanf("%f %f %f %f", &a, &b, &c, &d);

    //operation
    media = (a+b+c+d)/4;

    //result
    if(media >= 6){
        printf("NOTA = %.1f (APROVADO)",media);
    }else{
        printf("NOTA = %.1f (REPROVADO)",media);
    }

    return 0;
}

