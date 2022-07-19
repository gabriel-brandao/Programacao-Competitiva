#include<stdio.h>
int main(){
    int i, V[4], S=0;

    for(i=0; i<4; i++){
        scanf("%d", &V[i]);
        if(i < 3)
            V[i] = V[i] - 1;
        S = S + V[i];
    }
    printf("%d\n", S);
}
