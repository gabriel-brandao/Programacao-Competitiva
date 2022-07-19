#include <bits/stdc++.h>
/*
Para a circunferencia C2 estar inscrita na circunferencia C1 (C2 dentro de C1):
R1 > R2 && d(O1,O2) + R2 <= R1 (distancia entre o centro de C1 e C2 mais o raio de C2 não pode ser 
maior que o raio de C1) 
*/
using namespace std;

float D(int x1, int y1, int x2, int y2){
    return sqrt(pow(x2-x1,2) + pow(y2-y1,2));
}

int main(){
    int r1, x1, y1, r2, x2, y2;

    while(cin >> r1 >> x1 >> y1 >> r2 >> x2 >> y2){
        
        if(r1 >= r2 && D(x1, y1, x2, y2)+r2 <= r1)
            cout << "RICO" << endl;
        else
            cout << "MORTO" << endl;
    }
}