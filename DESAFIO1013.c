#include<stdio.h>

int main() {

    int a,b,c,maiab,mai;

    scanf("%d%d%d",&a,&b,&c);
    maiab=(a+b+abs(a-b))/2;
    mai=(maiab+c+abs(maiab-c))/2;

    printf("%d eh o maior\n",mai);
    return 0;

}
