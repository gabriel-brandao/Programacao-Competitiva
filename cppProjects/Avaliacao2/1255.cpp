#include <iostream>
#include <map>

using namespace std;

string to_lower(string linha){
    string lower;  
    for(int c : linha)
        if(c > 64 && c < 91) //converte A-Z para a-z
            lower.push_back(c + 32);
        else
            if(c != 32)// pega o resto só não pega espaço
                lower.push_back(c); 
   return lower;
}

void contaCaracter(string linha, map <char, int> *contador){  
    map <char, int> :: iterator itmap;
    int cont;

    for (char ch : linha){
        itmap = contador->find(ch); //retorna iterator pro elemento encontrado e map::end caso contrario

        if(itmap != contador->end()){ //elemento encontrado
            cont = itmap->second;
            contador->erase(itmap); //remove elemento do hashmap
            contador->insert({ch, ++cont}); //insere elemento no hashmap com uma contagem a mais
        }
         else
            contador->insert({ch, 1});
    }
}

int main(){
    int N, max;
    string linha;
    map <char, int> contador; //insere de forma ordenada
    
    cin >> N;
    cin.ignore();

    for(int i = 0; i < N; i++){
        linha.clear();
        contador.clear();

        getline(cin, linha);

        linha = to_lower(linha);  //converte para minuscula e retira espaço
        contaCaracter(linha, &contador); //passagem por referencia é mais eficiente para o tamanho dessa estrutura
                        /*
                        map <char, int> :: iterator itmap;
                        for(itmap = contador.begin(); itmap != contador.end(); itmap++)
                            cout << "[" << itmap->first << "] = " << itmap->second << "X" << endl;
                        cout << endl;
                        */
        linha.clear();
        max = 0;

        map <char, int> :: iterator it = contador.begin();
        for(; it != contador.end(); it++)
            if(it->second > max){
                linha.clear();
                linha = it->first;
                max = it->second;
            }
            else
                if(it->second == max)
                    linha += it->first;
    
        cout << linha << endl;
    }
}
/*
https://www.geeksforgeeks.org/set-vs-map-c-stl/
https://docs.microsoft.com/pt-br/cpp/standard-library/map-class?view=msvc-160#op_at
http://www.cplusplus.com/reference/map/map/insert/
https://pt.slideshare.net/mcastrosouza/estruturas-de-dados-com-c-e-stl
https://www.youtube.com/watch?v=-v1et3Cs7xY&ab_channel=CFBCursos
*/