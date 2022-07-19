#include<stdio.h>
int main(){
  long long int T, N, F, a, b, c, i;            ///o exercicio diz que a sequencia de fibonacci deve caber em um numero de 64 bits

    scanf("%lld", &T);

    for (i =1; i<=T; i++){
        scanf("%lld", &N);
        a=1;
        b=-1;
        c=0;
        while(c <= N){
          F = a + b;
            b = a;
            a = F;
            c += 1;
        }
        printf("Fib(%lld) = %lld\n", c-1, F);
    }
}
