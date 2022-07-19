#include<stdio.h>
#include<string.h>
int main(){
    int N, c, GO;
    char Sh[10], Ra[10];

    scanf("%d", &N);
    for(c=1; c<=N; c++){
     //   fflush(stdin);           se quisesse espaco teria que ter a funcao
        scanf("%s", &Sh);
  //      fflush(stdin);            se quisesse espaco teria que ter a funcao
        scanf("%s", &Ra);

        if(strcmp(Sh, Ra)==0)
            GO = 0;
        else

            if(strcmp(Sh, "pedra")==0 && (strcmp(Ra, "lagarto")==0 || strcmp(Ra, "tesoura")==0))
                GO = 1;
            else
            if(strcmp(Sh, "lagarto")==0 && (strcmp(Ra, "papel")==0 || strcmp(Ra, "Spock")==0))
                GO = 1;
            else
            if(strcmp(Sh, "Spock")==0 && (strcmp(Ra, "pedra")==0 || strcmp(Ra, "tesoura")==0))
                GO = 1;
            else
            if(strcmp(Sh, "tesoura")==0 && (strcmp(Ra, "papel")==0 || strcmp(Ra, "lagarto")==0))
                GO = 1;
            else
            if(strcmp(Sh, "papel")==0 && (strcmp(Ra, "pedra")==0 || strcmp(Ra, "Spock")==0))
                GO = 1;
            else

                GO = -1;

        switch(GO){
    case 0:
        printf("Caso #%d: De novo!\n", c);
        break;
    case 1:
        printf("Caso #%d: Bazinga!\n", c);
        break;
    default:
        printf("Caso #%d: Raj trapaceou!\n", c);
        }
    }
}
