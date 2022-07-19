#include<stdio.h>
#include<stdlib.h>
int main(){
    int i, id;
    float s, c, mid;
    i=0;
    s=0;
    c=0;

    while (i >= 0){
        scanf("%d",&id);
          if (id > 0){
            s = s + id;
            c = c + 1;
            mid = s / c;
          }
        i = id;
    }
    printf("%.2f\n", mid);
}
