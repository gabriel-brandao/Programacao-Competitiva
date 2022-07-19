#include<stdio.h>
#include<stdlib.h>
int main(){
    int i, s, X, Y;
    s=0;
    scanf("%d %d", &X, &Y);

    if(X < Y){
        for(i=X; i<=Y; i++){
            if(i%13!=0){
                s = s + i;
            }
        } printf("%d\n", s);
    } else{
        for(i=Y; i<=X; i++){
            if(i%13!=0){
                s = s + i;
            }
        } printf("%d\n", s);
        }

}







