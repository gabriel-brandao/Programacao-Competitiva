#include<stdio.h>
int main(){
   long long int N, i=1, C;  // combinacao C = n!/p! * (n-p)!  no caso p é tomado 2 a 2 pois sao pares de vertices
    scanf("%lld", &N);
    N -= 3;
    C = N;
  while(i <= N){
    C += i;
    i ++;
  }

    printf("%lld\n", C);
}
