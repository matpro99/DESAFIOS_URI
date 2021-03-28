#include<stdio.h>

int main(void) {

    char nome[20];
    double salario,vendas,bonus,TOTAL;

    scanf("%s%lf%lf",&nome,&salario,&vendas);
    bonus=vendas*0.15;
    TOTAL=salario+bonus;
    printf("TOTAL = R$ %.2lf\n",TOTAL);
    return 0;
}
