#include<stdio.h>
#include<math.h>
int main(){
    int A, B, C;

    do{
        scanf("%d", &A);

        if(A != 0){
             scanf("%d %d", &B, &C);
             A = A*B*100 / C;
             A = sqrt(A);
             printf("%d\n", A);
        }


    } while (A != 0);

}
