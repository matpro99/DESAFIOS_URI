#include<stdio.h>

int main(){
    int x=0;
    //while(x<100){
        //x=x+2;
        //printf("%d\n",x);
    //}
    for(x=1;x<=100;x++){
        if(x%2==0){
            printf("%d\n",x);
        }
    }
    return 0;
}
