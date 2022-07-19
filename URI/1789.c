#include<stdio.h>
int main(){
    int L, i, j;

    while(scanf("%d", &L) != EOF){

        int V[L], aux[L];

        for(i=0; i<L; i++)
            scanf("%d", &V[i]);

        i=0;
            for(j=1; j<L; j++)
                if(V[j] > V[0]){
                    aux[0] = V[0];
                    V[0] = V[j];
                    V[j] = aux[0];
                 }

                 if(V[0] < 10)
                    L = 1;
                 if(V[0] >= 10 && V[0] < 20)
                    L = 2;
                 if(V[0] >= 20)
                    L = 3;

                 printf("%d\n", L);




    }








}
