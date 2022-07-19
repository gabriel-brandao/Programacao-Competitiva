#include<stdio.h>
#include<stdlib.h>
int main(){
    int N, s, a1, a2, c;
    s = 0;
    a1 = 1;
    c =0;
    a2 = 0;
    scanf("%d", &N);
     do
     {
       if (c==0){
           c = c + 1;
           printf("0");
        }
       s = a1 + a2;
       a1 = a2;
       a2 = s;
       printf(" %d", s);
       c = c + 1;

     } while (c < N);
    printf("\n");



}
