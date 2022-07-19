#include<stdio.h>
#include<stdlib.h>
int main(){
    int i, N;
    float x1, x2, x3, M;

    scanf("%d", &N);
    for(i=1; i<=N; i++){
        scanf("%f %f %f", &x1, &x2, &x3);
        M = (x1*2 + x2*3 + x3*5)/10;
        printf("%.1f\n", M);

    }
}
