#include<stdio.h>
#include<stdlib.h>
int main(){
    float n;
    int c, i;
    c=0;
    for(i=1; i<=6; i++){
        scanf("%f", &n);

        if(n>0){
            c=c+1;}

    }
        printf("%d valores positivos\n", c);
}
