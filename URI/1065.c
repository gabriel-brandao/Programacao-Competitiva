#include<stdio.h>
#include<stdlib.h>
int main(){
    int i, n, c;
c=0;
    for (i=1; i<=5; i++){
        scanf("%d", &n);

            if( n%2==0 ){
                c = c + 1;
            }
    }
        printf("%d valores pares\n", c);






}
