#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int q, i, N, TA;
    float PC, PR, PS, TC, TR, TS;
    TC=0; TR=0; TS=0;
    char A[3];
    scanf("%d", &N);

     for(i=1; i<= N; i++){

         scanf("%d", &q);
         scanf("%s", A);
        if(strcmp(A, "C")==0){
            TC = TC + q;
        } else
        if(strcmp(A, "R")==0){
            TR = TR + q;
        } else
        if(strcmp(A, "S")==0){
            TS = TS + q;
        }

     }
     TA = TC + TR + TS;
     PC = TC / TA;
     PR = TR / TA;
     PS = TS / TA;

        printf("Total: %d cobaias\n", TA);
        printf("Total de coelhos: %.0f\n", TC);
        printf("Total de ratos: %.0f\n", TR);
        printf("Total de sapos: %.0f\n", TS);
        printf("Percentual de coelhos: %.2f %%\n", PC*100);
        printf("Percentual de ratos: %.2f %%\n", PR*100);
        printf("Percentual de sapos: %.2f %%\n", PS*100);
}
