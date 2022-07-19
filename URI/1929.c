#include<stdio.h>
int main(){
    int V[8], i, a, b, c , d =0;

    for(i=1; i<=4; i++){
        scanf("%d", &V[i]);
        V[4+i] = V[i];
}
        for(i=1; i<=4; i++){            // usando combinacao C = n!/p!*(n - p)!
            a = i;
            b = i + 1;
             c = i + 2;
            if(V[a] + V[b] > V[c] && V[a] + V[c] > V[b] && V[b] + V[c] > V[a]){
                d = 1;
                break;
            }
        }
if(d==1)
    printf("S\n");
else
        printf("N\n");
}
