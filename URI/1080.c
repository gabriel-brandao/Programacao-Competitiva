#include<stdio.h>
#include<stdlib.h>
int main(){
    int i, x, Ra, R, L;
    Ra=0;
    for (i=1; i<=100; i++){
        scanf("%d", &x);

        R=x%1000000000000000;
            if(R > Ra){
                Ra=R;
                L=i;
            }
    }
        printf("%d\n", Ra);
        printf("%d\n", L);
}
