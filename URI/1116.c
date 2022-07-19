#include<stdio.h>
#include<stdlib.h>
int main(){
    int i, N;
    float x, y, r;
    scanf("%d", &N);
    for(i=1; i<=N; i++){
        scanf("%f %f", &x, &y);
        if(y==0){
            printf("divisao impossivel\n");
        } else{

        r = x/y;
        printf("%.1f\n", r);


            }
    }







}
