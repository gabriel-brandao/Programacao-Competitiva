#include<stdio.h>
int main(){
    int i, j, N;

while(scanf("%d", &N) != EOF){
    int M[N][N];

    for(i=0; i<N; i++)
        for(j=0; j<N; j++){

            if(i + j == N-1)
                M[i][j] = 2;
            else
               if(i == j)
                   M[i][j] = 1;
                else
                    M[i][j] = 3;
         printf("%d", M[i][j]);
            if (j == N-1)
                 printf("\n");
        }
}

}
