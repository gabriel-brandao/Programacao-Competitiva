#include<stdio.h>
int main(){
    int col, i, j;
    float m[12][12], R=0;
    char op;
    scanf(" %d ", &col);
    scanf(" %c ", &op);

            for(i=0; i<12; i++)
                for(j=0; j<12; j++)
                   scanf(" %f ", &m[i][j]);

        for(i=0; i<12; i++)
               R  += m[i][col];

        if(op == 'M')
           R = R / 12;

           printf("%.1f\n", R);

}

