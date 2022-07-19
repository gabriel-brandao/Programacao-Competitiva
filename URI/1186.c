#include<stdio.h>
int main(){
    int i, j;
    float m[12][12], R=0;
    char op;
    scanf(" %c ", &op);

            for(i=0; i<12; i++)
                for(j=0; j<12; j++)
                   scanf(" %f ", &m[i][j]);

        for(i=0; i<12; i++)
            for(j=0; j<12; j++){
                if(i + j >=12)
                R  += m[i][j];
            }

        if(op == 'M')
           R = R / 66;

           printf("%.1f\n", R);

}





