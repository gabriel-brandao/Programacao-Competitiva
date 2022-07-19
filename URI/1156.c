#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int n, d, p;
    float S, n_aux;

    S=0;
      for(n=1, d=0; n<=39; n+=2, d++){

          n_aux = n;    //tranformando n em float

          p = pow(2,d);
          S = S + n_aux /p; //pois na divisao de dois inteiros, em C intende-se que o resultafo tmb é um inteiro
      }
    printf("%.2f\n",S);

}
