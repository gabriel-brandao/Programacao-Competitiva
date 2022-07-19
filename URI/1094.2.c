#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int q, i, N, TC, TR, TS, TA;
    TC=0; TR=0; TS=0;
    float PC, PR, PS;
    char A[2];
    scanf("%d", &N);

     for(i=1; i<= N; i++){

         scanf("%d", &q);
         scanf("%s", A);
        if(A[0]=='C'){
            TC = TC + q;
        } else
        if(A[0]=='R'){
            TR = TR + q;
        } else
        if(A[0]=='S'){
            TS = TS + q;
        }
     }
     TA = TC + TR + TS;
     PC = TC / TA;
     PR = TR / TA;
     PS = TS / TA;
        printf("Total: %d cobaias\n", TA);
        printf("Total de coelhos: %d\n", TC);
        printf("Total de ratos: %d\n", TR);
        printf("Total de sapos: %d\n", TS);
        printf("Percentual de coelhos: %.2f %%\n", PC);
        printf("Percentual de ratos: %.2f %%\n", PR);
        printf("Percentual de sapos: %.2f %%\n", PS);
}

