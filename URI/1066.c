#include<stdio.h>
#include<stdlib.h>
int main(){
    int i, n, cp, ci, cps, cn;
    cp=0; ci=0; cps=0; cn=0;
    for(i=1; i<=5; i++){
        scanf("%d", &n);

            if(n%2==0){
                cp = cp + 1;
                }
            if(n%2!=0){
                ci = ci + 1;
                }
            if(n > 0){
                cps = cps + 1;
            }
            if(n < 0){
                cn = cn + 1;
            }
}
        printf("%d valor(es) par(es)\n", cp);
        printf("%d valor(es) impar(es)\n", ci);
        printf("%d valor(es) positivo(s)\n", cps);
        printf("%d valor(es) negativo(s)\n", cn);



}
