#include<stdio.h>
int main(){
int p, i, j, n, P[5], I[5], c;
p = i = -1;

    for(c=1; c<=15; c++){
        scanf("%d", &n);

            if(n % 2 == 0){
                p ++;
                P[p] = n;

                    if(p == 4){
                        for (j=0; j<=4; j++)
                            printf("par[%d] = %d\n", j, P[j]);
                        p = -1;
                    }
            } else
                {
                    i ++;
                    I[i] = n;

                        if(i == 4){
                            for(j=0; j<=4; j++)
                                printf("impar[%d] = %d\n", j, I[j]);
                            i = -1;
                        }
                }

     }
                        for(j=0; j<=i; j++)
                            printf("impar[%d] = %d\n", j, I[j]);

                         for (j=0; j<=p; j++)
                            printf("par[%d] = %d\n", j, P[j]);

}
