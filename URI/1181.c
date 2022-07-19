#include<stdio.h>
int main(){
    int lin, i, j;
    float m[12][12], R=0;
    char op;
    scanf(" %d ", &lin);
    scanf(" %c ", &op);

            for(i=0; i<12; i++)
                for(j=0; j<12; j++)
                   scanf(" %f ", &m[i][j]);

        for(j=0; j<12; j++)
               R  += m[lin][j];

        if(op == 'M')
           R = R / 12;

           printf("%.1f\n", R);

}
