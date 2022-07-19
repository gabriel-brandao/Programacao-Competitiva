#include<stdio.h>
int main(){
    int N, i, j;

    while(scanf("%d", &N) != EOF){
        int M[N][N], inicio, parada;
        inicio = N / 3;
        parada = N - N / 3 - 1;

            for(i=0; i<N; i++){
                for(j=0; j<N; j++){

                   if(i==(N - 1) / 2 && j==(N - 1) / 2)
                        M[i][j] = 4;
                    else
                        if(i >= inicio && j >= inicio && i <= parada && j <= parada )
                            M[i][j] = 1;
                        else
                            if(i + j == N - 1)
                                M[i][j] = 3;
                            else
                                if(i == j)
                                    M[i][j] = 2;
                                else
                                     M[i][j] = 0;

                    printf("%d", M[i][j]);
                }
            printf("\n");
            }
printf("\n");
    }
}
