#include<stdio.h>
#include<stdlib.h>
int main(){
    int I, J;

    for(I=1; I<=9; I+=2){

           for(J=7; J>=5; J-=1){
                printf("I=%d J=%d\n", I, J);        // uma vez dentro do segundo for ele executa as 3 vezes( 7 ao 5) para dps sair e ir para 0 prox I
            }
    }

}
