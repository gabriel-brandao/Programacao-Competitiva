#include<stdio.h>
#include<stdlib.h>
int main(){
    int i, I, x, ca, cg, cd;
    ca=0; cg=0; cd=0;


    for(I=1; I>=1; I++){

    scanf("%d", &x);

        while(x < 1 || x > 4){
            scanf("%d", &x);
        }
        if(x==1){
            ca = ca + 1;
        }
        if(x==2){
            cg = cg + 1;
        }
        if(x==3){
            cd = cd + 1;
        }
        if(x==4){
        printf("MUITO OBRIGADO\n");
        printf("Alcool: %d\n", ca);
        printf("Gasolina: %d\n", cg);
        printf("Diesel: %d\n", cd);
        break;
        }

    }







}
