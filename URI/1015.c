#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main (){
    double x1, X, y1, x2, y2, D;
    scanf("%lf", &x1);
    scanf("%lf", &y1);
    scanf("%lf", &x2);
    scanf("%lf", &y2);
     X = x2-x1;
     //D = pow(X,2);
     D = sqrt(pow((x2-x1),2) + pow((y2-y1),2))  ;

    printf("%.4lf\n", D);





}
