#include<stdio.h>
int main(){
    int N, i, j, ind;

    scanf("%d", &N);
    int n[N];

    for(i=1; i<=N; i++)
        scanf("%d", &n[i]);

    i = 1;
    for(j=2; j<=N; j++)
        if(n[i] > n[j])
            i = j;

    printf("%d\n", i);

}
