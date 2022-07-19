#include<stdio.h>
#include<stdlib.h>
int  main(){
    int F, N, i;
    F = 1;
    scanf("%d", &N);
        for (i=N; i>= 2; i--){
            F = (i - 1) * F;
        }
    printf("%d\n", F*N);




}
