#include<stdio.h>
#include<stdlib.h>
int main(){
    int X, Z, S, c, i, prox_S, S_ant;
    c=0; S=0;
    scanf("%d %d", &X, &Z);

    while(Z <= X){
        scanf("%d", &Z);
    }
        for(i=X; i>=X; i++){
            c = c + 1;
            S = i + S;
            prox_S = S + (i+1);
            S_ant = S - i;
            if(prox_S > Z || S_ant > Z){
                break;
            }
        }
            printf("%d\n", c+1);

}
