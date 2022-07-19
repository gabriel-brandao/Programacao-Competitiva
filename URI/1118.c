#include<stdio.h>
#include<stdlib.h>
int main(){
    int i, x, c;
    double n, M, S;
    S=0; c=0;
        for(i=1; i>=1; i++){
            scanf("%lf", &n);
            if(n >= 0 && n <= 10){
                c = c + 1;
                S = S + n;
                if(c==2){
                    M = S/2;
                    printf("media = %.2lf\n", M);
                    printf("novo calculo (1-sim 2-nao)\n");
                    scanf("%d", &x);

                            while(x<1 || x>2){
                                printf("novo calculo (1-sim 2-nao)\n");
                                scanf("%d", &x);
                                continue;
                            }

                            if(x==1){
                                S=0;
                                c=0;
                                continue;
                            }
                            if(x==2){
                                break;
                            }
                 }

            } else
             printf("nota invalida\n");

        }




}







