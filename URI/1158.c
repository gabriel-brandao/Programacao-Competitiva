#include<stdio.h>
#include<stdlib.h>
int main(){
    int N, S, x, y, I, i, c, v;
    S=c=v=0;

    scanf("%d", &N);
 do
  {
        for (I=N; I<=N; I++){
            scanf("%d %d", &x, &y);

                 for (i=x; i>=x; i++){
                    if (i % 2 != 0){
                        S = S + i;
                        c = c + 1;
                    }
                        if (c==y){
                            printf("%d\n", S);
                            S=c=0;
                            v = v + 1;
                            break;  // Faz a parada do for pra nao ir ao infinito
                        }
                 }
        }

} while (v<N);
}
