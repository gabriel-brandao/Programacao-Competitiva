#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int  r, n100, n50, n20, n10, n5, n2, m1, m50, m25, m10, m5, m01;
    int I, VF;
    double N;
    scanf("%lf",&N);

    I=N;     //I recebe o valor inteiro de N

    n100 = I/100;
    r = I%100;      //o resto deve ser um int para nao pegar o resto com casas decimais
    n50 = r/50;
    r = r%50;
    n20 = r/20;
    r = r%20;
    n10 = r/10;
    r = r%10;
    n5 = r/5;
    r = r%5;
    n2 = r/2;
    r = r%2;
    m1 = r/1;

    VF = (N - I)*100;  //transformando os centavos em numero inteiro pra poder trabalhar com resto
    m50 = VF/50;
    r = VF%50;
    m25 = r/25;
    r = r%25;
    m10 = r/10;
    r = r%10;
    m5 = r/5;
    r = r%5;
    m01 = r/1;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", n100);
    printf("%d nota(s) de R$ 50.00\n",n50);
    printf("%d nota(s) de R$ 20.00\n", n20);
    printf("%d nota(s) de R$ 10.00\n", n10);
    printf("%d nota(s) de R$ 5.00\n", n5);
    printf("%d nota(s) de R$ 2.00\n", n2);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", m1);
    printf("%d moeda(s) de R$ 0.50\n", m50);
    printf("%d moeda(s) de R$ 0.25\n", m25);
    printf("%d moeda(s) de R$ 0.10\n", m10);
    printf("%d moeda(s) de R$ 0.05\n", m5);
    printf("%d moeda(s) de R$ 0.01\n", m01);

}

