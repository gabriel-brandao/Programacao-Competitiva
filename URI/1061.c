#include<stdio.h>
#include<stdlib.h>
 int main(){
 int di, hi, mi, si, df, hf, mf, sf, TD, TH, TM, TS;
 printf("Dia ");
 scanf("%d\n%d", &di, &hi); scanf("%d", &mi); scanf("%d", &si);

 printf("\nDia ");
 scanf("%d\n%d", &df, &hf); scanf("%d", &mf); scanf("%d", &sf);

    TD = df - di;
        if(TD >= 0){
            if(hf < hi){
                TD = TD - 1;
                printf("\n%d dias\n", TD);
                } else
                printf("\n%d dias\n", TD);
        }

    TH = hf - hi;
        if(TH < 0){
                TH = (24 - hi) + hf;


                printf("\n%d horas\n", TH);
                } else
                printf("\n%d horas\n", TH);

    TM = mf - mi;
        if(TM < 0){
                TM = (60 - mi) + mf;
                printf("\n %d minutos", TM);
                } else
                printf("\n %d minutos", TM);
}1
