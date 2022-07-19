#include<stdio.h>
int main(){
    int i, j, N;

    do{
    scanf("%d", &N);

    int M[N][N];

    if(N != 0){
    for(i=0; i<N; i++)
        for(j=0; j<N; j++){

    if(i >= j)
         M[i][j] = i - j + 1;
    else
        M[i][j] = j - i + 1;

        printf("%3d", M[i][j]);
            if(j < N - 1)
                printf(" ");
            else
                printf("\n");
        }

        printf("\n");
    }
    }while (N != 0);

}
