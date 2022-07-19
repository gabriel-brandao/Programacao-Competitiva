//Mochilla 0-1 Ilimitada

#include <iostream>
#include <vector>

using namespace std;

int knapsack(int W_max, vector<int> pesos, vector<int> valores, int item_max){
	// tabela que será preenchida
	int tabela[W_max + 1], maior = 0;

    for(int w = 0; w <= W_max; w++)
        tabela[w] = 0;             
	
		for(int w = 0; w <= W_max; w++){ //para cada peso até 
			for(int i = 1; i <= item_max; i++) //e para cada elemento 
                if(pesos[i-1] <= w && tabela[w] <= tabela[w - pesos[i-1]] + valores[i-1]) //se peso do tem é menor ou igual a capacidade atual da mochila
                    tabela[w] = tabela[w - pesos[i-1]] + valores[i-1];

            if(tabela[w] > maior)
                maior = tabela[w];
        }
	return maior;
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

            cout << "Instancia " << ++casos << endl << knapsack(W_max, pesos, valores, item_max) << endl << endl;
            pesos.clear();
            valores.clear();
        }
    }while(item_max != 0 && W_max != 0);
}