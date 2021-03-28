#include<stdio.h>

int main(){

    int x,y,cont,lim;
    scanf("%d%d",&x,&y);
    if(x>y){
        lim=x;
        cont=y+1;
    }else{
        lim=y;
        cont=x+1;
    }
    while(cont<lim){
        if(cont%5==2 || cont%5==3){
            printf("%d\n",cont);
        }
        cont++;
    }
    return 0;
}
