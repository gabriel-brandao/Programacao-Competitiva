#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int N, n100, n50, n20, n10, n5, n2, n1, r;
    scanf("%d",&N);

    n100 = (N/100);
    r = N%100;
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
    n1 = r;
    printf("%d\n",N);
    printf("%d nota(s) de R$ 100,00\n",n100);
    printf("%d nota(s) de R$ 50,00\n",n50);
    printf("%d nota(s) de R$ 20,00\n",n20);
    printf("%d nota(s) de R$ 10,00\n",n10);
    printf("%d nota(s) de R$ 5,00\n",n5);
    printf("%d nota(s) de R$ 2,00\n",n2);
    printf("%d nota(s) de R$ 1,00\n",n1);


}
