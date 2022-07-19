#include<stdio.h>
int main(){
    const int tam = 999;                               ///indice inicia em 0 logo 1000 termos
    int v, r, T, N[tam];
    v=r=0;
    scanf("%d", &T);

        while (v <= tam){                               ///executa ate o indice alcançar o valor maximo
                printf("N[%d] = %d\n",v, r);
                r += 1;

                    if(r==T){                                 ///verifica se o valor de r alcançou o valor de T, se sim ele é zerado pois quero imprimir ate T-1
                        r=0;
                    }

                v +=1;
        }
}

