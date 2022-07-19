#include<stdio.h>
int main(){
    int T, i;

    scanf("%d", &T);

    for (i=0; i<T; i++)
       if(i < T-1)
        printf("Ho ");
       else
            printf("Ho!\n");

}
