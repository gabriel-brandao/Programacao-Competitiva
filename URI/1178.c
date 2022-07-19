#include<stdio.h>
int  main(){
    const int tam=99;
    int i;
    double N[tam], X;
    i=0;

    scanf("%lf", &X);
        while (i<=tam){
            printf("N[%d] = %.4lf\n",i, X);
            X = X / 2;
            i +=1;
        }
}
