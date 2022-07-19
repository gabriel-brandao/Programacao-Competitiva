#include<stdio.h>
#include<stdlib.h>
int main(){
    int i, ng, pi, pg, SN, vi, vg, ne;
    ng=0; vi=0; vg=0; ne=0;

   for(i=1; i>=1; i++){
        scanf("%d %d", &pi, &pg);

                    if(pi > pg){
                        vi = vi + 1;
                    }
                    if(pi < pg){
                        vg = vg + 1;
                    }
                    if(pi==pg){
                        ne = ne + 1;
                    }
                    ng = ng + 1;

            printf("Novo grenal (1-sim 2-nao)\n");
            scanf("%d", &SN);

                    if(SN==2){
                    break;
                }
    }

            printf("%d grenais\n", ng);
            printf("Inter:%d\n", vi);
            printf("Gremio:%d\n", vg);
            printf("Empates:%d\n", ne);
        if(vi > vg){
            printf("Inter venceu mais\n");
        } else
        if(vi < vg){
            printf("Gremio venceu mais\n");
        } else
            printf("Nao houve vencedor\n");

}
