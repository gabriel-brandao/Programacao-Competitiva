#include<stdio.h>
#include<stdlib.h>
int main(){
    int I, i, X, Y, z;
    z=1;
    scanf("%d %d", &X, &Y);

        for(I=1; I<=Y; I++){
            for(i=z; i<=z+X-1; i++){

                if(i < z+X-1){   //da linha 11 a linha 16 é um metodo para imprimir is tres digitos sem que oultimo seja impresso com espaço
                    printf("%d ", i);
                }
                if(i==z+X-1){
                    printf("%d", i);
                }

                        if(i==Y){
                            break;
                        }
            }
                 z = i;
                printf("\n");

                    if(i==Y){
                        break;
                    }
        }
}
