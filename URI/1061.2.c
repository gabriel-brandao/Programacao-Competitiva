#include<stdio.h>
#include<stdlib.h>
int main(){
    int di, hi, mi, si, df, hf, mf, sf, DT, HT, MT, ST, aux;
    DT=0; HT=0; MT=0; ST=0;
    char D[5], P[2];

    scanf("%s %d", D, &di);
    scanf("%d %s %d %s %d", &hi, P, &mi, P, &si);
    scanf("%s %d", D, &df);
    scanf("%d %s %d %s %d", &hf, P, &mf, P, &sf);

    aux = ((df - di)*86400 + (hf - hi)*3600 + (mf - mi)*60 + (sf - si));
    DT = aux / 86400;
    aux = aux % 86400;
    HT = aux / 3600;
    aux = aux % 3600;
    MT = aux / 60;
    aux = aux % 60;
    ST = aux;

        printf("%d dia(s)\n", DT);
        printf("%d hora(s)\n", HT);
        printf("%d minuto(s)\n", MT);
        printf("%d segundo(s)\n", ST);
 }
