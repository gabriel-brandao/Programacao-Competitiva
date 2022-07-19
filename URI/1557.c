#include<stdio.h>
#include<math.h>
int main(){
    int i, j, N, T, k,C=0, c=0;

    do {
        scanf("%d", &N);
        int M[N][N], aux[N][N];

       if(N != 0){

                T = pow(2, 2 * (N-1));
                while(T != 0){
                    T /= 10;
                    C ++;
                }
                C ++;
                for(i=0; i<N; i++)
                    for(j=0; j<N; j++){
                        M[i][j] = pow(2, i + j);
                        aux[i][j] = M[i][j];
                            c = 0;
                            while(aux[i][j] != 0){     //conta quantos digitos tem cada elemento
                                aux[i][j] /= 10;
                                c ++;
                            }
                                c = C - c;
                                if ( j== 0)
                                    for(k=1; k<c; k++)
                                        printf(" ");
                                else
                            for(k=1; k<=c; k++)
                                printf(" ");
                            printf("%d", M[i][j]);

                            if(j == N-1)
                                printf("\n");
                    }
                printf("\n");
        }
C = 0;
    } while(N != 0);

}

