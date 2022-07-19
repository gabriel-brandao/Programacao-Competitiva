#include<stdio.h>
int main(){
    int N, a, b, i;
    char nome_a[10], nome_b[10], Pol_a[6], Pol_b[6];

        scanf("%d", &N);

        for(i=1; i<=N; i++){
                fflush(stdin);
                scanf("%s %s %s %s", &nome_a, &Pol_a, &nome_b, &Pol_b);
                scanf("%d %d", &a, &b);
             a = a + b;

            if(a % 2 == 0)
                if(strcmp(Pol_a, "PAR") == 0)
                    printf("%s\n", nome_a);
                else
                    printf("%s\n", nome_b);

            else
                if(strcmp(Pol_a, "IMPAR") == 0)
                     printf("%s\n", nome_a);
                else
                    printf("%s\n", nome_b);
         }
}
