#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int i, i2, i3, N;
    scanf("%d", &N);

        for(i=1; i<=N; i++){
            i2 = pow(i,2);
            i3 = pow(i,3);
            printf("%d %d %d\n", i, i2, i3);
            printf("%d %d %d\n", i, i2+1, i3+1);
        }
}
