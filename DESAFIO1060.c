#include<stdio.h>

int main(){

    float n;
    int c,p=0;
    for(c=0;c<6;c++){
        scanf("%f",&n);
        if(n>0){
            p++;
        }
    }
    printf("%d valores positivos\n",p);
    return 0;

}
