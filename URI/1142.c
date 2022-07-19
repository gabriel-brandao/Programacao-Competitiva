#include<stdio.h>
#include<stdlib.h>
int main(){
    int I, i, X, x;
    x=1;
    scanf("%d", &X);

        for(I=1; I<=X; I++){
            for(i=x; i<=x+2; i++){
                printf("%d ", i);

            }
            printf("PUM");
            printf("\n");
            x = i + 1;
        }
}
