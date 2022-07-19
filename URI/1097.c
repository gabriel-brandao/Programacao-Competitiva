#include<stdio.h>
#include<stdlib.h>
int main(){
    int I, J, Ja;
    J=7;
    for(I=1; I<=9; I+=2){
        Ja= J - 2;
        for(J=J; J>=Ja; J-=1){
            printf("I=%d J=%d\n", I, J);
        }

        J = Ja + 4;
    }








}
