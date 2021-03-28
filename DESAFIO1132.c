#include<stdio.h>

int main(){

    int x,y,soma=0,c,lim;
    scanf("%d%d",&x,&y);
    if(x>y){
        c=y;
        lim=x;
    }else{
        c=x;
        lim=y;
    }
    while(c<=lim){
        if(c%13!=0){
            soma=soma+c;
        }
        c++;
    }
    printf("%d\n",soma);
    return 0;
}
