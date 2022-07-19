#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    float a, b, c, R1, R2, dlt;
    scanf("%f %f %f", &a, &b, &c);

    dlt = (b*b) - (4*a*c);

    R1 = (-b + sqrt(dlt))/(2*a);

    R2 = (-b - sqrt(dlt))/(2*a);

   if(dlt>0 && a!=0){
         printf("R1 = %.5f\n",R1);
         printf("R2 = %.5f\n",R2);
   }else{

        if(dlt < 0){
            printf("Impossivel calcular\n");
    }
        if(a==0){
            printf("Impossivel calcular\n");
    }}







    }
