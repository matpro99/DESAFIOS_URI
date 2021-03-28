#include<stdio.h>

int main(){

    int n,count;
    scanf("%d",&n);
    for(count=1;count<=10;count++){
        printf("%d x %d = %d\n",count,n,count*n);
    }
    return 0;
}
