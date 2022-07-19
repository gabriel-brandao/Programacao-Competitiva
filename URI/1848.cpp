#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main(){
    int i, soma;
    i = soma = 0;
    string entrada;

    while(i < 3){

        getline(cin, entrada);

        if(entrada.compare("caw caw") == 0){
            i++;
            cout << soma << endl;
            soma = 0;
        }
         else{  
             if(entrada.at(0) == '*')
                soma += pow(2, 2);
             if(entrada.at(1) == '*')
                soma += pow(2, 1);
             if(entrada.at(2) == '*')
                soma += pow(2, 0);
         }
    }
}