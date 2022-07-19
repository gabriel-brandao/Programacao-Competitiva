#include<stdio.h>
#include<stdlib.h>
int main(){
    int N, i, r;
    scanf("%d", &N);

        for(i=1; i<=10000; i++){
            r = i%N;
            if(r ==2){
               printf("%d\n", i);
            }

         }
}
