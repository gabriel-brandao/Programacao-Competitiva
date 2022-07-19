#include<stdio.h>
#include<stdlib.h>
int main(){
    int i, n1, n2, s;
    s=0;
    scanf("%d", &n1);
    scanf("%d", &n2);

    if(n1 > n2){
        for (i=n2+1; i<n1; i++){
            if (i%2!=0){
                s = s + i;
            }
        }
    }
    if (n2 > n1){
        for(i=n1+1; i<n2; i++){
            if(i%2!=0){
                s = s + i;
            }
        }
    }
        printf("%d\n", s);



}







