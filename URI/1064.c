#include<stdio.h>
#include<stdlib.h>
int main(){
    float n, s;
    int i, c;
c=0;
s=0;
    for(i=1; i<=6; i++){
        scanf("%f", &n);

                if (n > 0){
                c = c + 1;
                s = s + n;
                }

    }   s = s/c;
        printf("%d valores positivos\n", c);
        printf("%.1f\n", s);






}
