#include<stdio.h>
int main(){
    int N, C, i, j, S, a;

    scanf("%d", &N);
    for (i=1; i<=N; i++){

        scanf("%d", &C);
            S = 0;
            a = 1;
            for(j=1; j<= C; j++){
                  S += a;
                   a = -1 * a;
            }
            printf("%d\n", S);
    }

}
