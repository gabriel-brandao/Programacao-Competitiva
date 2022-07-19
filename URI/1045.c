
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    double A, B, C, aux;
    scanf("%lf %lf %lf", &A, &B, &C);

        // troca de valores o valor, A deve ser maior entre os tres
        if (A < B){
            aux = B;
            B = A;
            A = aux;
        }
        if (A < C){
            aux = C;
            C = A;
            A = aux;
        }
                    if (A >= B + C){
                        printf("NAO FORMA TRIANGULO\n");
                    }else{

                        if (pow(A,2) == pow(B,2) + pow(C,2)){
                            printf("TRIANGULO RETANGULO\n");
                        }

                            if (pow(A,2) > pow(B,2) + pow(C,2)){
                                printf("TRIANGULO OBTUSANGULO\n");
                            }

                                if (pow(A,2) < pow(B,2) + pow(C,2)){
                                    printf("TRIANGULO ACUTANGULO\n");
                                }

                                    if (A==B && B==C && A==C){
                                        printf("TRIANGULO EQUILATERO\n");
                                    }

                                        if (A==B && C!=A && C!=B  || A==C && B!=A && B!=C  || B==C && A!=B && A!=C){
                                            printf("TRIANGULO ISOSCELES\n");
                                        }}
















}
