#include<stdio.h>
int main(){
    int n, i, I, t, S;
    S=0;
    scanf("%d",&t);

    for (I = 1;I<=t;I++){
        scanf("%d", &n);
            for (i = 1 ; i<n;i++){
                if (n % i==0){
                    S = S + i;
                }
            }
        if (S==n){
            printf("%d eh perfeito\n", n);
        } else
            printf("%d nao eh perfeito\n", n);
            S=0;
    }

}
