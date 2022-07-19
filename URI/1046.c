#include<stdio.h>
#include<stdlib.h>
int main(){
    int A, B, dj;
    scanf("%d %d", &A, &B);

        if (A < B){
            dj = B - A;
            printf("O JOGO DUROU %d HORA(S)\n", dj);
        }else

            if (A==B){
                printf("O JOGO DUROU 24 HORA(S)\n");
            }else

                if (A > B){
                   dj = (24 - A) + B;
                   printf("O JOGO DUROU %d HORA(S)\n", dj);
                }







}
