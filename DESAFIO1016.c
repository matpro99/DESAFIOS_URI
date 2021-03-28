#include<stdio.h>

int main(){

    float vx=60.0,vy=90.0,t;
    int d;

    scanf("%d",&d);
    t=(d/(vy-vx));
    printf("%.0f minutos\n",t*60);

    return 0;

}
