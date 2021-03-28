#include<stdio.h>

int main(){

    float A,B,C,per,area;
    scanf("%f%f%f",&A,&B,&C);
    if(C<(A+B)&&B<(C+A)&&A<(B+C)){
        per=A+B+C;
        printf("Perimetro = %.1f\n",per);
    }else{
        area=(A+B)*C/2;
        printf("Area = %.1f\n",area);
    }
    return 0;
}
