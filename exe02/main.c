#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){

    int t = 0;
    int v = 0;
    int r = 0;
    int d = 0;
    int l = 0;

    //input
    scanf("%d %d %d",&t,&v,&r);

    //operations
    d= t*v;
    l= d/r;

    //result
    printf("R = %d\nV = %d\nT = %d\nD = %d\nL = %d\n",r,v,t,d,l);

    return 0;
}