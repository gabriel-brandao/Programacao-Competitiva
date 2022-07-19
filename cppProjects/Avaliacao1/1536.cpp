#include <iostream>
#include <sstream> //istringstream
#include <vector>

using namespace std;

vector <int> split(string str, char delim = 'x'){
    istringstream iss (str);
    string token;
    vector <int> retorno;

    while(getline(iss, token, delim)) //extrai o caracter de iss e armazena em token até que delim seja encontrado 
        retorno.push_back(stoi(token));  
    return retorno;
}

int main(){
    int N, time1, time2, mandante, X, visitante;
    string placar;
    vector <int> partida1(2);
    vector <int> partida2(2);

    cin >> N;
    cin.ignore(); //retira \n da proxima leitura

    for(int i = 0; i < N; i++){
        time1 = time2 = 0;

        getline(cin, placar);
        partida1 = split(placar);
        getline(cin, placar);
        partida2 = split(placar);

        if(partida1.at(0) > partida1.at(1) || partida2.at(0) < partida2.at(1))
            time1 += 3;       
        if(partida1.at(0) < partida1.at(1) || partida2.at(0) > partida2.at(1))
            time2 += 3;
        else{
            time1 += 1;
            time2 += 1;
        }

        if(time1 > time2)
            cout << "Time 1" << endl;
        else
            if(time1 < time2)
                cout << "Time 2" << endl;
            else{
                if(partida2.at(1) > partida1.at(1)) //gols do time visitante (1 e 2 respectivamente)
                    cout << "Time 1" << endl;
                else
                    if(partida2.at(1) < partida1.at(1))
                        cout << "Time 2" << endl;
                    else
                        cout << "Penaltis" << endl;
            }
    }
}