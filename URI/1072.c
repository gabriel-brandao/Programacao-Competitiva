#include<stdio.h>
#include<stdlib.h>
int main(){
    int out, N, i, x, c;
    c=0;
    scanf("%d", &N);

    for(i=1; i<=N; i++){
        scanf("%d", &x);
        if (x>=10 && x<= 20){
            c = c + 1;
        }
    }

    out = N - c;
    printf("%d in\n", c);
    printf("%d out\n", out);








}

