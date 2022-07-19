#include<stdio.h>
int main(){
    const int tam=10;
    int v, r, T, N[tam];
v=0;
    scanf("%d", &T);

   while(v<tam){

            for (r=0; r < T; r++){                      ///executa ate T-1 independente do indice           ( testar T=4)
                printf("N[%d] = %d\n",v, r);
                v +=1;
        }
    }
}
