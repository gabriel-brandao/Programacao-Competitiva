#include<stdio.h>
#include<stdlib.h>
int main(){
    int A, B, N, s, i;
    s=0;
    scanf("%d %d", &A, &N);

    while(N <= 0){
        scanf("%d", &N);
    }
        for(i=A; i<A+N; i++){
            s = s + i;
        }
        printf("%d\n", s);

}
