#include<stdio.h>
#include<stdlib.h>
int main(){
    float I, J, j;
    int A;
    j = 1;
    for (I=0; I<= 2.2; I+=0.2){

        for(J=j; J<=j+2; J++){
            A = I*10;                                   //variavel para verificaçao
            if (A==00 || A==10 || A==20) {
                printf("I=%0.f J=%0.f\n", I, J);
            } else
                                                        //sem o else o programa realizaria dentro do if e fora tmb
        printf("I=%.1f J=%.1f\n", I, J);
        }
            j+=0.2;                                     //incrementa + 0.2 ao J
    }
}
