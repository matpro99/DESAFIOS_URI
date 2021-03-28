#include<stdio.h>

int main(){

    int t,v,gasto=12;
    float d,cons;

    scanf("%d%d",&t,&v);
    d=v*t;
    cons=d/gasto;

    printf("%.3f\n",cons);

    return 0;

}
