#include<stdio.h>
#include<stdlib.h>
int main(){
int num, i;

   scanf("%d", &num);
    for (i=1; i>=1; i++){
            if (num % i == 0){
                printf("%d\n", i);

                if (i==num){
                    break;
                }
            }
    }
}
