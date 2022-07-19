#include<stdio.h>
#include<stdlib.h>
int main(){
    int N, i, e, x, y, S1, S2;

    scanf("%d", &N);
    for(i=1; i<=N; i+=1){
        scanf("%d %d", &x, &y);
        S1=0; S2=0;
       if(x <= y){
            for(e=x+1; e<y; e+=1){
                if( e%2 !=0){
                    S1 = S1 + e;
                }
            }
       printf("%d\n", S1);
       }       //printf fora do for para nao mostra mais de uma vez na tela, porem dentro do if


        if(x > y){
            for(e=y+1; e<x; e+=1){
                if( e%2 !=0){
                    S2 = S2 + e;
                }
            }
        printf("%d\n", S2);
        }    //printf fora do for para nao mostra mais de uma vez na tela, porem dentro do if



    }








}
