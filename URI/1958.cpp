

#include <bits/stdc++.h>

using namespace std;

int main(){
    long double number;
    
    cin >> number;
    string str = to_string(number); // para verificar se há sinal
    printf(str.at(0) != '-' ? "+":"");
    printf("%.4LE\n", number);
}