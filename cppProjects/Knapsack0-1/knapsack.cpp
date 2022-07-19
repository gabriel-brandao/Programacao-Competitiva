/*
				{ f(i-1, p), se pi > p }
	f(i,p) = 
				{ max(f(i-1, p-pi) + vi , f(i-1, p)), se pi <= p }

p: capacidade autal da mochila
pi: peso do item i

Se pi > p:
	esqueça-o e fique com o item anterior qnd a mochila tinha a mesma capacidade atual.

Se pi <= p:
	fique com o item que tenha maior valor: entre o item atual ou o item anterior qnd a mochila tinha a mesma
	capacidade atual
**/

#include <iostream>

using namespace std;

int knapsack(int W_max, int pesos[], int valores[], int item_max){
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

int main(int argc, char *argv[])
{

	// capacidade máxima da mochila: W
	int W_max = 20;

	// número de elementos
	int item_max = 5;

	// vetor com os valores (benefício) de cada elemento
	int valores[] = {3, 5, 8, 4, 10};

	// vetor com os pesos de cada elemento
	int pesos[] = {2, 4, 5, 3, 9};

	// obtém o máximo valor que pode ser colocado na mochila
	int max_valor = knapsack(W_max, pesos, valores, item_max);

	cout << "Valor maximo: " << max_valor << endl;

	return 0;
}