#include<stdio.h>
#include<stdlib.h>
int main(){
    int X, i;

    scanf("%d", &X);
    for(i=1; i<=X; i++){
        if(i<X){
            printf("%d ", i);
        }
        if(i==X){
            printf("%d\n", i);
        }

    }
    while(X != 0){
        scanf("%d", &X);
            for(i=1; i<=X; i++){
        if(i<X){
            printf("%d ", i);
        }
        if(i==X){
            printf("%d\n", i);
        }
            if(X==0){
                break;
            }

    }

    }








}
