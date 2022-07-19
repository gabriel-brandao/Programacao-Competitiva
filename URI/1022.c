#include <stdio.h>

int main(){

	int NE, i, n1, n2, d1, d2, op;

	scanf("%d", &NE);

	for (i = 0; i < NE; i++){
		scanf("%d / %d %c %d / %d", &n1, &d1, &op, &n2, &d2); //o que for escrito no scanf sera lido na sequencia, / nao esta em nenhum espaco de memoria
		printf("%d %c %d\n", n1, op, d2);
	}


}
