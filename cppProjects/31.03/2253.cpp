#include <iostream>
#include <cctype>

using namespace std;

int main(){
    string senha;
    int siz;
    bool m, M, n, p;

    while(getline(cin, senha)){
        m = M = n = p = false;
        siz = senha.size();

        if(siz >= 6 && siz <= 32)
            for(char c : senha){
                if(islower(c)){
                    m = true;
                    continue;
                }
                if(isupper(c)){
                    M = true;
                    continue;
                }
                if(isdigit(c)){
                    n = true;
                    continue;
                }
                if(ispunct(c) || isspace(c)) //tem caracter de pontuação ou espaço
                    p = true;
            }

        if(m && M && n && !p)
            cout << "Senha valida." << endl;
        else
            cout << "Senha invalida." << endl;
    }
}