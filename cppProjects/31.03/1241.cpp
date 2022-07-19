#include <iostream>

using namespace std;

int main(){
    int N;
    string A, B, aux;

    cin >> N;
    cin.ignore();

    for(int i = 0; i < N; i++){
        cin >> A >> B;       

        if(A.size() >= B.size()){
            aux = A.substr(A.size()-B.size(), B.size());

            if(aux == B)
                cout << "encaixa" << endl;
            else
                cout << "nao encaixa" << endl;
        }
         else
            cout << "nao encaixa" << endl;
    }
}