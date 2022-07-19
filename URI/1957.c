#include<stdio.h>
int main(){
    char V[8], H[16] = {"0123456789ABCDEF"};
    int i, c = 0, q, r;
         scanf("%d", &q);
        do
        {
            r = q % 16;
            q = q / 16;
            V[c] = H[r];
            c ++;
        } while(q >= 16);
        V[c] = H[q];
            if(V[c] == '0')
                for(i=c-1; i>=0; i--)
                         printf("%c", V[i]);
             else
              for(i=c; i>=0; i--)
                         printf("%c", V[i]);
            printf("\n");
}
