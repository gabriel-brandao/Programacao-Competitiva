#include<stdio.h>
int main(){
    char F[50] = {"LIFE IS NOT A PROBLEM TO BE SOLVED."};
    int N, i;
    scanf("%d", &N);

    for(i=0; i<N; i++)
        printf("%c", F[i]);
        printf("\n");

}
