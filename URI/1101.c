#include<stdio.h>
#include<stdlib.h>
int main(){
    int x, y, i, e, S1, S2;
    for(i=1; i>=1; i++){
        scanf("%d %d", &x, &y);
            if(x <= 0 || y <= 0){
                break;
            } else
     S1=0;
     if(x < y){
        for(e=x; e<=y; e++){
            printf("%d ", e);
            S1 = S1 + e;
        }
     printf("Sum=%d\n", S1);
     }

     S2=0;
     if(x > y){
        for(e=y; e<=x; e++){
            printf("%d ", e);
            S2 = S2 + e;
        }
     printf("Sum=%d\n", S2);

     }







    }




}
