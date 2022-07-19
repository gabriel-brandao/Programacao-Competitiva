#include <iostream>

using namespace std;

int main(){
    int N, mary, john;
    
    cin >> N;
    while(N != 0){

        int *vetor = new int [N];
        mary = john = 0;

        for(int i = 0; i < N; i++){
            cin >> vetor[i];
            if(vetor[i] == 0)
                mary ++;
            else
                john ++;
        }
        cout << "Mary won " << mary << " times and John won " << john << " times" << endl;

        cin >> N;
    }  
}