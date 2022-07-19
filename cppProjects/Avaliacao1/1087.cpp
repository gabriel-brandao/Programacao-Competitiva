#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int x1, y1, x2, y2;

    cin >> x1 >> y1 >> x2 >> y2;

    while(x1 != 0 && y1 != 0 && x2 != 0 && y2 != 0){

        if(x1 == x2 && y1 == y2) //no mesmo lugar
            cout << 0 << endl;
        else
            if(abs(x2 - x1) == abs(y2 - y1)) //diagonais
                cout << 1 << endl;
            else
                if(x1 == x2 || y1 == y2) //verticais ou horizontais
                    cout << 1 << endl;
                else
                    cout << 2 << endl;

        cin >> x1 >> y1 >> x2 >> y2;
    }
}