#include<stdio.h>
#include<stdlib.h>
int main(){
    int di, hi, mi, si, df, hf, mf, sf, DT, HT, MT, ST;
    DT=0; HT=0; MT=0; ST=0;
    char D[5], P[2];

    scanf("%s %d", D, &di);
    scanf("%d %s %d %s %d", &hi, P, &mi, P, &si);
    scanf("%s %d", D, &df);
    scanf("%d %s %d %s %d", &hf, P, &mf, P, &sf);

    if(hi < hf){
        DT = df - di;
        printf("%d dia(s)\n", DT);
    }
    if(hi >= hf){
        DT = (df - di) - 1;
        printf("%d dia(s)\n", DT);
    }
//************ HORA ************************
            if(hi <= hf){
                HT = hf - hi;
            }
            if(hi > hf){
                HT = 24 - (hi - hf);
            }
//************** MINUTOS SEGUNDOS **********************
                    if(mi == mf && si > sf){
                            HT = HT - 1;
                            MT = 60 - (mf - mi) - 1;
                            ST = 60 - (si - sf);
                            printf("%d hora(s)\n", HT);
                            printf("%d minuto(s)\n", MT);
                            printf("%d segundo(s)\n", ST);

                     } else
                     if(mi > mf && si == sf){
                            HT = HT - 1;
                            MT = 60 - (mi - mf);
                            ST = si - sf;
                            printf("%d hora(s)\n", HT);
                            printf("%d minuto(s)\n", MT);
                            printf("%d segundo(s)\n", ST);
                    } else
                     if(mi <= mf && si <= sf){
                            HT = HT;
                            MT = mf - mi;
                            ST = sf - si;
                            printf("%d hora(s)\n", HT);
                            printf("%d minuto(s)\n", MT);
                            printf("%d segundo(s)\n", ST);
                    } else
                    if(mi <= mf && si > sf){
                            HT = HT;
                            MT = mf - mi - 1;
                            ST = 60 - (si - sf);
                            printf("%d hora(s)\n", HT);
                            printf("%d minuto(s)\n", MT);
                            printf("%d segundo(s)\n", ST);
                    } else
                    if(mi > mf && si <= sf){
                            HT = HT - 1;
                            MT = 60 - (mi - mf);
                            ST = 60 - (sf - si);
                            printf("%d hora(s)\n", HT);
                            printf("%d minuto(s)\n", MT);
                            printf("%d segundo(s)\n", ST);
                    } else
                    if(mi > mf && si > sf){
                            HT = HT - 1;
                            MT = (60 - mi) + mf - 1;
                            ST = 60 - (si - sf);
                            printf("%d hora(s)\n", HT);
                            printf("%d minuto(s)\n", MT);
                            printf("%d segundo(s)\n", ST);
                    }

}















