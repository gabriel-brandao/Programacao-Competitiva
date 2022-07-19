#include<stdio.h>
#include<stdlib.h>
int main(){
    int i, x, y;
    for(i=1; i>=1; i++){
        scanf("%d %d", &x, &y);
            if(x==0 || y==0){
                break;
            } else

        if (x > 0 && y > 0){
            printf("primeiro\n");
        }
        if (x < 0 && y > 0){
            printf("segundo\n");
        }
        if (x < 0 && y < 0){
            printf("terceiro\n");
        }
        if (x > 0 && y < 0){
            printf("quarto\n");
        }


    }







}
