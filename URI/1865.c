#include<stdio.h>
int main(){
    char nome[10];
    int N, p, i;

    scanf("%d", &N);

    for (i=0; i<N; i++){
        fflush(stdin);
        scanf("%s", &nome);
        scanf("%d", &p);
    if(strcmp(nome, "Thor")==0)
        printf("Y\n");
    else
        printf("N\n");
}

}
