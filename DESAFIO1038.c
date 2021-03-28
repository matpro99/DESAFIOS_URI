#include<stdio.h>

int main(){

    int cod,q;
    float tot;
    scanf("%d%d",&cod,&q);
    if(cod==1){
        tot=q*4;
    }
    else if(cod==2){
        tot=q*4.5;
    }
    else if(cod==3){
        tot=q*5;
    }
    else if(cod==4){
        tot=q*2;
    }
    else if(cod==5){
        tot=q*1.5;
    }
    printf("Total: R$ %.2f\n",tot);
    return 0;
}
