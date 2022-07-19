/*
Mochilla 0-1 Ilimitada
**/

#include <iostream>

using namespace std;

int knapsack(int W_max, int pesos[], int valores[], int item_max){
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

	// capacidade máxima da mochila: W
	int W_max = 60;

	// número de elementos
	int item_max = 5;

	// vetor com os valores (benefício) de cada elemento
	int valores[] = {30, 32, 4, 90, 45};

	// vetor com os pesos de cada elemento
	int pesos[] = {10, 20, 5, 50, 22};

	// obtém o máximo valor que pode ser colocado na mochila
	int max_valor = knapsack(W_max, pesos, valores, item_max);

	cout << "Valor maximo: " << max_valor << endl;

	return 0;
}