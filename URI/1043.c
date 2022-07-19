#include<stdio.h>
#include<stdlib.h>
int main(){
    float A, B, C, Area;
    scanf("%f %f %f", &A, &B, &C);

    if (A + B > C && A + C > B && C + B > A){
        printf("Perimetro = %.1f\n", A+B+C);
    }else{
        Area = ((A + B)*C)/2;
        printf("Area = %.1f\n", Area);
    }







}
