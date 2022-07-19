
#include <bits/stdc++.h>

using namespace std;

int main() {
    float i=0.0, j=0.0;

    while(i <= 2.2){

        i = floorf(i*10)/10;
        if(i == 0 || i == 1 || i == 2)
            cout << fixed << setprecision (0);
        else
            cout << fixed << setprecision (1);

        for(int a = 1; a < 4; a++)
            cout << "I=" << i << " J=" << ++j + i << endl;
        i += 0.2;
        j = 0.0;
    }
    
}