#include <iostream>
#include <map>
#include <iomanip>//setprecision()

using namespace std;

int main(){
    int N, cont, total;
    string arvore, espaco;

    map <string, float> ListaDeArvores;
    map <string, float> :: iterator it;

    cin >> N;
    cin.ignore();

    getline(cin,espaco);

    for(int i = 0; i < N; i++){
        
        ListaDeArvores.clear();
        total = 0;

        while(getline(cin, arvore) && arvore.size() != 0){
            it = ListaDeArvores.find(arvore); //retorna end() se não encontrar

            if(it != ListaDeArvores.end()){//encontrou
                cont = it->second;
                ListaDeArvores.erase(it);
                ListaDeArvores.insert({arvore, ++cont});
            }
            else //não encontrou
                ListaDeArvores.insert({arvore, 1});
                
            total ++;  
        }
        
        cout << fixed << setprecision(4);
        for(it = ListaDeArvores.begin(); it != ListaDeArvores.end(); it++)
            cout << it->first << " " << 100*it->second/total << endl;
        if(i != N-1)
            cout << endl; 
    }
}