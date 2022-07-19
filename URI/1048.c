#include<stdio.h>
#include<stdlib.h>
int main(){
    float s, ns, a;
    scanf("%f", &s);

        if (s >= 0 && s <= 400){
            ns = (s*0.15) + s;
            a = (s*0.15);
            printf("Novo salario: %.2f\n", ns);
            printf("Reajuste ganho: %.2f\n", a);
            printf("Em percentual: 15 %%\n");
        }else

        if (s > 400 && s <= 800){
            ns = (s*0.12) + s;
            a = (s*0.12);
            printf("Novo salario: %.2f\n", ns);
            printf("Reajuste ganho: %.2f\n", a);
            printf("Em percentual: 12 %%\n");
        }else

        if (s > 800 && s <= 1200){
            ns = (s*0.10) + s;
            a = (s*0.10);
            printf("Novo salario: %.2f\n", ns);
            printf("Reajuste ganho: %.2f\n", a);
            printf("Em percentual: 10 %%\n");
        }else

        if (s > 1200 && s <= 2000){
            ns = (s*0.07) + s;
            a = (s*0.07);
            printf("Novo salario: %.2f\n", ns);
            printf("Reajuste ganho: %.2f\n", a);
            printf("Em percentual: 7 %%\n");
        }else

        if (s > 2000){
            ns = (s*0.04) + s;
            a = (s*0.04);
            printf("Novo salario: %.2f\n", ns);
            printf("Reajuste ganho: %.2f\n", a);
            printf("Em percentual: 4 %%\n");
        }




}
