#include<stdio.h>
#include<stdlib.h>
int main(){
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

      if (A > B && B > C){
        printf("%d eh o maior\n", A);

}else if (A > C && C > B){
          printf("%d eh o maior\n",A);

}else if (B > A && B > C){
          printf("%d eh o maior\n",B);

}else if (B > C && B > A){
          printf("%d eh o maior\n",B);

}else if (C > A && C > B){
          printf("%d eh o maior\n",C);

}else {
printf("%d eh o maior\n",C);
}







}
