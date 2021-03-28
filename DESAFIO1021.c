#include<stdio.h>

int main(){

    double N;
    int r,r2,a,b,c,d,e,f,g,h,i,j,k,l;

    scanf("%lf",&N);
    a=N/100;
    r=((int)N%100);
    b=(r)/50;
    c=(r)%50/20;
    d=(r)%50%20/10;
    e=(r)%50%20%10/5;
    f=(r)%50%20%10%5/2;
    g=(r)%50%20%10%5%2;
    N=(N-a*100-b*50-c*20-d*10-e*5-f*2-g)*100;
    h=N/50;
    r2=(int)N%50;
    i=r2/25;
    j=r2%25/10;
    k=r2%25%10/5;
    l=r2%25%10%5;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",a);
    printf("%d nota(s) de R$ 50.00\n",b);
    printf("%d nota(s) de R$ 20.00\n",c);
    printf("%d nota(s) de R$ 10.00\n",d);
    printf("%d nota(s) de R$ 5.00\n",e);
    printf("%d nota(s) de R$ 2.00\n",f);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",g);
    printf("%d moeda(s) de R$ 0.50\n",h);
    printf("%d moeda(s) de R$ 0.25\n",i);
    printf("%d moeda(s) de R$ 0.10\n",j);
    printf("%d moeda(s) de R$ 0.05\n",k);
    printf("%d moeda(s) de R$ 0.01\n",l);

    return 0;
}
