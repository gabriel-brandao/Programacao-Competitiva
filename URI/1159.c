#include<stdio.h>
#include<stdlib.h>
int main (){
    int x, i, S, c;
    S=c=0;
    do
    {
        scanf("%d", &x);
            if (x==0){
                break;   //quebra o laço do..while
            } else
            for (i=x; i>=x; i++){
                if (i % 2 ==0){
                    S = S + i;
                    c = c + 1;
                }
                if (c==5){
                    printf("%d\n", S);
                    S=c=0;
                    break;    //quebra o laço for
                }
            }
    } while (x!=0);
}
