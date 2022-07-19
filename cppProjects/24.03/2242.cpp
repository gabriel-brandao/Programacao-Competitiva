#include <iostream>
#include <string>
#include <algorithm> //erase() e reverse()

using namespace std;

int main(){
    string risada, aux;
    string consoantes = "qwrtypsdfghjklzxcvbnm";

    cin >> risada;

    for(char c : consoantes)
        risada.erase(remove(risada.begin(), risada.end(), c), risada.end()); //remove todas as consoantes    
    
    aux = risada;
    reverse(risada.begin(), risada.end()); //inverte a string

    if(!risada.compare(aux)) // retorna 0 se forem iguais.
        cout << "S" << endl;
    else
        cout << "N" << endl;
}