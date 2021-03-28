#include<stdio.h>

int main(){

    int idade,ano,mes,dia,r;

    scanf("%idade",&idade);
    ano=idade/365;
    r=idade%365;
    mes=r/30;
    dia=r%30;

    printf("%d ano(s)\n",ano);
    printf("%d mes(es)\n",mes);
    printf("%d dia(s)\n",dia);

    return 0;

}
