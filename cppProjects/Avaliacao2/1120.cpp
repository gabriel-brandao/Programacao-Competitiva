#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

void zeroAesquerda(string *valor, int tamanho = 0){   
    for(int i = 0; i < valor->size(); i++)
        if(valor->at(i) == '0')
            tamanho ++;
        else
            break;
    valor->erase(0, tamanho);

    if(valor->empty())
        *valor = '0';   
}

int main(){
    int N;
    string valor; //1 <= valor <= 10¹⁰⁰

    while(cin >> N >> valor){
        if(N == 0 && stoll(valor) == 0)
            break;
        
        char c = N+'0';
        valor.erase(remove(valor.begin(), valor.end(), c), valor.end());
     
        if(valor.empty() || valor.at(0) == '0')
            zeroAesquerda(&valor);

        cout << valor << endl;
    }
}