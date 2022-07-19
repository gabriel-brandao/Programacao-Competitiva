#include <iostream>
#include <map>

using namespace std;
string to_lower(string linha){
    string lower;   
    for(int c : linha)
        if(c > 64 && c < 91)
            lower.push_back(c + 32);
        else
            lower.push_back(c);
    
    return lower;
}

int main(){
    string nome;
    map <string, string> lista;

    while(getline(cin, nome))
        lista.insert({to_lower(nome), nome}); //o proprio map ja insere de forma ordenada !!
      
    auto it = lista.end(); //iterator para posição apos o ultimo elemento
    it --; //ultimo elemento
    cout << it->second << endl;
}