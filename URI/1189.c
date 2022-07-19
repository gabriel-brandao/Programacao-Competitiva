#include<stdio.h>
int main(){
    int i, j, TAM = 12;
    double m[TAM][TAM], R=0;
    char op;
    scanf(" %c ", &op);

            for(i=0; i<TAM; i++)
                for(j=0; j<TAM; j++)
                   scanf(" %lf ", &m[i][j]);

        for(i=0; i<TAM; i++)
            for(j=0; j<TAM; j++){
                if(i + j <= TAM - 2 && i > j)
                R  += m[i][j];
            }

        if(op == 'M')
           R = R / 30;

           printf("%.1lf\n", R);

}







