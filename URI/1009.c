#include<stdio.h>
#include<stdlib.h>
int main(){
    char  n[10];
    double sf, pv, st;
    scanf("%s", &n);
    scanf("%lf", &sf);
    scanf("%lf", &pv);

    st = (0.15*pv) + sf;

       printf("TOTAL = R$ %.2lf\n", st);







}
