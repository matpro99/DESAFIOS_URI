#include<stdio.h>

int main(){

    float s,r,p;
    scanf("%f",&s);
    if(s<=400){
        p=15;
        r=s*(1+p/100);
    }
    else if(s>=400 && s<=800){
        p=12;
        r=s*(1+p/100);
    }
    else if(s>=800.01 && s<=1200){
        p=10;
        r=s*(1+p/100);
    }
    else if(s>=1200.01 && s<=2000){
        p=7;
        r=s*(1+p/100);
    }else{
        p=4;
        r=s*(1+p/100);
    }
    printf("Novo salario: %.2f\n",r);
    printf("Reajuste ganho: %.2f\n",s*p/100);
    printf("Em percentual: %.0f %\n",p);
    return 0;
}
