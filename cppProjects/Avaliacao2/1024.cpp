#include <iostream>
#include <algorithm>

using namespace std;

void passada1(string *linha){
    string nova;
    for(char c : *linha)
        if((c > 64 && c < 91) || (c > 96 && c < 123))
            nova.push_back(c + 3);
        else
            nova.push_back(c);  
    *linha = nova;
}

void passada2(string *linha){
    reverse(linha->begin(), linha->end());
}

void passada3(string *linha){
    int meio = linha->size()/2;
    char c;
    for(int i = meio; i < linha->size(); i++){
        c = linha->at(i);
        linha->at(i) = c - 1;
    }
}

int main(){
    int N;
    string linha;

    cin >> N;
    cin.ignore();

    for(int i = 0; i < N; i++){
        getline(cin, linha);
        
            passada1(&linha); passada2(&linha); passada3(&linha);

        cout << linha << endl;
    }
}