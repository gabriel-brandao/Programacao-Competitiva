#include<stdio.h>
#include<stdlib.h>
int main(){
    int hi, mi, hf, mf, aux, HT, MT;
    scanf("%d %d", &hi, &mi);
    scanf("%d %d", &hf, &mf);

       if(hi < hf){
          aux = (hf - hi)*60 + (mf - mi);
          HT = aux / 60;
          aux = aux % 60;
          MT = aux;
          printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", HT, MT);
       }

       if(hi >= hf){
          aux = (24 - (hf - hi))*60 + (mf - mi);
          HT = aux / 60;
          aux = aux % 60;
          MT = aux;
          printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", HT, MT);
       }
}
