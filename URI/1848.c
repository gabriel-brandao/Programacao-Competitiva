#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
    int i, j, S = 0, grito, out_B[3];
    char PoG[10];

        for (grito = 1; grito <= 3; grito++){

          do{
            fflush(stdin);
            scanf("%[^\n]s", &PoG);                //lendo ate que o usuario digite enter

            if(strcmp(PoG, "caw caw") != 0){
                for (i=0, j=2; i<3, j>-1; i++, j--)
                    if(PoG[i] == '-')
                        out_B[j] = 0;
                    else
                        out_B[j] = 1;

               for(j=0; j<3; j++)
                        S += out_B[j] * pow(2, j);
          }
            } while (strcmp(PoG, "caw caw") != 0);

            printf("%d\n", S);
            S = 0;
        }
}
