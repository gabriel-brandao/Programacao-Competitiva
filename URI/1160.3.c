#include<stdio.h>
#include<stdlib.h>
int main(){
    int PA, PB, T, t, i, txtA, txtB, c;
    float G1, G2;
    c=PA=PB=txtA=txtB=G1=G2=0;

    scanf("%d", &T);
        for (t=1; t<=T; t++){
            scanf("%d %d %f %f", &PA, &PB, &G1, &G2);  // PA < PB e G1 > G2


            do
            {
                txtA = PA + PA*G1/100;
                PA = txtA;

                txtB = PB + PB*G2/100;
                PB = txtB;
                c = c + 1;
                if (c > 100){
                    printf("Mais de 1 seculo.\n");
                    break;
                }

            } while (PA<=PB);
            printf("%d anos.", c);
            c=PA=PB=txtA=txtB=G1=G2=0;
        }
}
