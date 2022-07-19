#include<stdio.h>
#include<stdlib.h>
int main(){
    int A, B, C, D,aux ;
    scanf("%d %d %d %d", &A,&B,&C,&D);
    aux = A%2;
    if (B>C && D>A && C+D>A+B && C>0 && D>0 && (aux = 0)){
        printf("FER");
    }








}
