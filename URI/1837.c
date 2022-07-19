#include<stdio.h>
int main(){
int A, B, r, q = 0;

    scanf("%d %d", &A, &B);

        if(A < 0){
            if(B < 0){
               r = A;
                while(r < 0){
                    r -= B;
                    q ++;
                }
            }   else
                r = A;
                while(r < 0){
                    r += B;
                    q--;
                }
        }
        else
{
    r = A % B;
    q = A / B;
}
printf("%d %d\n", q, r);
}
