#include<stdio.h>
#include<stdlib.h>
int main(){

    double x, vt, r, F;

    scanf("%lf", &x);

        if(x >= 0 && x <= 2000){
            printf("Isento\n");
        } else
            if(x >= 2000.01 && x <= 3000){
                r = (x - 2000)*0.08; // o quanto passo de 2000 * 8%
                vt = r;
                printf("R$ %.2lf\n", vt);
            } else
                if(x >= 3000.01 && x <= 4500){
                   r = (x - 3000)*0.18;    // o quanto passo de 3000 * 18% + 80( o quanto passo do valor maximo anterior * 8%)
                   vt = r + 80;
                   printf("R$ %.2lf\n", vt);
                } else
                    if(x > 4500){
                        r = (x - 4500)*0.28; //o quanto passo de 4500 * 28% + 80 + 270( o quanto passo do valor maximo do anterior ao anterior * 18%)
                        vt = r + 80 + 270;
                        printf("R$ %.2lf\n", vt);
                    }













}
