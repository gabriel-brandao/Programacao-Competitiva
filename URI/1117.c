#include<stdio.h>
#include<stdlib.h>
int main(){
    int i, c;
    c=0;
    float x, S, M;  //divisao de inteiros gera um outro inteiro
    S=0;
    for(i=1; i>=1; i++){
        scanf("%f", &x);
            if(x >= 0 && x <= 10){
                c = c + 1;
                S = S + x;
                M = S/2;
                if(c==2){
                    break;
                }
            } else
                printf("nota invalida\n");
    }

            printf("media = %.2f\n", M);







}
