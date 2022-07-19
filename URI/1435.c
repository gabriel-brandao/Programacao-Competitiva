#include<stdio.h>
int main(){
    int N, i, j, k, c;

    do{
        scanf("%d", &N);
        if (N != 0){
            int M[N][N];

    c = N / 2 + N % 2;
                for(i=0; i < N; i++)
                    for(j=0; j < N; j++)

                        for(k=1; k<=c; k++)
                            if(i==k-1 || j==k-1 || i==N-k || j==N-k){
                                M[i][j] = k;
                                k = c+1;
                            }

                for(i=0; i < N; i++){
                    for(j=0; j < N; j++){
                            printf("%3d", M[i][j]);       //justificado em campo de tamanho 3
                            if(j < N-1)
                                printf(" ");
                            else
                                printf("\n");
                     }
                }
                printf("\n");
        }
    } while( N != 0);
}




