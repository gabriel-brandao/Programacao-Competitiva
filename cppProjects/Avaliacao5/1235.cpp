#include <iostream>
#include <algorithm> //reverse()

using namespace std;

int main(){
    int N, meio;
    string linha;

    cin >> N;
    cin.ignore();

    for(int i = 0; i < N; i++){
        getline(cin, linha);
        
        meio = linha.size() / 2;       
        reverse(linha.begin(), linha.begin() + meio); //[first,last) vai de 0 ate meio-1
        reverse(linha.begin() + meio, linha.end());

        cout << linha << endl;
    }
}