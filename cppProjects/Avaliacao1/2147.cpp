#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  
    int C;
    string palavra;

    cin >> C;

    cout << fixed << setprecision(2);
    for(int i = 0; i < C; i++){
        cin >> palavra;
        cout << palavra.size() * 0.01 << endl;
    }
}