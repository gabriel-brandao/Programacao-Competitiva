#include<stdio.h>
#include<stdlib.h>
int  main(){
    int N, x, i, vp;
    scanf("%d", &N);

        for(i=1; i<=N; i++){
            scanf("%d", &x);
            vp = x%2;

            if( vp !=0 && x < 0){
                printf("ODD NEGATIVE\n");
            } else
            if(x==0){
                printf("NULL\n");
            } else
            if( vp != 0 && x > 0){
                printf("ODD POSITIVE\n");
            } else
            if( vp ==0 && x < 0){
                printf("EVEN NEGATIVE\n");
            } else
            if( vp ==0 && x > 0){
                printf("EVEN POSITIVE\n");
            }





    }










}
