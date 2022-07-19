#include<stdio.h>
int main(){
    int t, n, c, i, I;
    c=0;
    scanf("%d", &t);
    for (I=1; I<=t; I++){
        scanf("%d", &n);

        for(i=1; i<=n; i++){
            if (n % i==0){
                c = c + 1;
            }
        }
        if(c==2){
            printf("%d eh primo\n", n);
        } else
            printf("%d nao eh primo\n", n);
        c=0;
    }

}
