#include <iostream>
#include <vector>

using namespace std;

int knapsack(int W_max, vector<int> pesos, vector<int> valores, int item_max){
	// tabela que será preenchida
	int tabela[item_max + 1][W_max + 1];

	for(int i = 0; i <= item_max; i++)
		for(int w = 0; w <= W_max; w++)
			
            if(w == 0 || i == 0)//inicia com 0 os pesos qnd não há itens e itens com 0 qnd não há pesos
                tabela[i][w] = 0;
            else
                if(pesos[i-1] <= w)	//i-ésimo elemento cabe na mochila
                    tabela[i][w] = max((tabela[i-1][w-pesos[i-1]] + valores[i-1]), tabela[i-1][w]);
                else
                    tabela[i][w] = tabela[i-1][w]; // wi > w

	return tabela[item_max][W_max];
}

int main(){

    int item_max, W_max, peso_i, interesse_i, casos=0;
    vector<int> pesos, valores;

    do{
        cin >> item_max >> W_max;
        if(item_max != 0 && W_max != 0){
            
            for(int i = 0; i < item_max; i++){
                cin >> peso_i >> interesse_i;
                pesos.push_back(peso_i);
                valores.push_back(interesse_i);
            }

            cout << "Caso " << ++casos << ": " << knapsack(W_max, pesos, valores, item_max) << endl;
            pesos.clear();
            valores.clear();
        }
    }while(item_max != 0 && W_max != 0);
}