#include<stdio.h>
int main(){
    int N, i, j, marc;
    scanf("%d", &N);

    int X[N], aux[1];

    for(i=0; i<N; i++)
        scanf("%d", &X[i]);

    i = 0;
    for(j=i+1; j<=N; j++){
        if(X[i] > X[j]){
            marc = j;
            aux[i] = X[j];
            X[j] = X[i];
            X[i] = aux[i];
        }
    }
    printf("Menor valor: %d\n", X[i]);
    printf("Posicao: %d\n", marc);

}
