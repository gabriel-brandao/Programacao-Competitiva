#include<stdlib.h>
#include<stdio.h>
int main(){
    int n, i, I;
    scanf("%d", &n);
    //if()

    if ( n%2 !=0 ){
        for(i=n; i<=n+11; i++){
            if(i%2!=0){
                printf("%d\n", i);
            }
        }
    }

    if ( n%2 ==0 ){
        for(i=n; i<=n+12; i++){
            if(i%2!=0){
                printf("%d\n", i);
            }
        }
    }







}
