#include<stdio.h>
int main(){
    int A, B, C;

    scanf("%d %d", &A, &B);
        if (A==B || A > B)
            C = A;
        else
            C = B;
        printf("%d\n", C);
}
