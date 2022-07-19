#include<stdio.h>
int main (){
    int A[20], B[20], i, I;
    I=-1;
    for (i=0; i <= 19; i++){
        scanf("%d", &A[i]);
    }
    for (i=19; i >= 0; i--){
        I = I + 1;
        printf("N[%d] = %d\n", I, A[i]);
    }

}
