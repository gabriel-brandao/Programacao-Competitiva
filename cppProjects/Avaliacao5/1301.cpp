#include <iostream>
#include <vector>

using namespace std;

//passar o vetor como parametro ou inicia-lo com valores dá time limit exceeded !!
vector<int> vetor = vector<int>();

class SegTree{
 private:
    vector<int> segTree;
    int tamanho;
    int elementoNeutro; 
 public:
    SegTree();
    void build(int x, int esq, int dir);
    void update(int x, int esq, int dir, int index, int novo_valor);
    int query( int x, int esq, int dir, int i, int j);
};

int getSinal(int a){
	return (a > 0? 1 : (a < 0 ? -1 : 0));
}

//construtor
SegTree::SegTree(){
    int n = vetor.size();

    this->tamanho = 4*n;
    this->segTree = vector<int>(tamanho); // 4*tamanho do array (iniciar tdas posicoes dá time limit exceeded)
    this->elementoNeutro = 1; //elemento neutro para PRODUTO

    build(0, 0, n-1);
}

//x - ponto que estamos no array
//esq e dir - intervalo que o ponto esta cuidando
void SegTree::build(int x, int esq, int dir){
    if(esq == dir) //nó folha
        segTree[x] = vetor[esq];
    else{
        int meio = (esq + dir) / 2;
        build(2*x+1, esq, meio); //filho esquerdo
        build(2*x+2, meio+1, dir); //filho direito
        segTree[x] = segTree[2*x+1] * segTree[2*x+2]; //pai é a soma dos filhos
    }
}

//x - nó atual
//esq e dir - intervalo que o ponto está cuidando
//index e novo_valor - indice que queremos atualizar e seu valor
void SegTree::update(int x, int esq, int dir, int index, int novo_valor){
    if(esq == dir) //se nó atual é nó folha
        segTree[x] = getSinal(novo_valor);
    else{
        int meio = (esq + dir) / 2;

        if(index >= esq && index <= meio) //o index está no filho esquerdo
            update(2*x+1, esq, meio, index, novo_valor);
        else
            update(2*x+2, meio+1, dir, index, novo_valor);
        
        segTree[x] = segTree[2*x+1] * segTree[2*x+2]; //apos atualizar os filhos atualizamos o nó atual      
    }
}

// i e j - intervalo que queremos calcular
// esq e dir - intervalo que o ponto está cuidando
int SegTree::query(int x, int esq, int dir, int i, int j){
    if(j < esq || i > dir) //intevalo do nó está fora do intervalo de interesse
        return elementoNeutro; 
    if(i <= esq && j >= dir) //intevalo do nó está totalmente dentro do intervalo de interesse
        return segTree[x];

    int meio = (esq + dir) / 2;
    return query(2*x+1, esq, meio, i, j) * query(2*x+2, meio+1, dir, i, j); //soma da respostas dos filhos
}

int main(){  
    int N, K, X, i, j, v;
    int res;
    char comando;
    
    while(cin >> N >> K){
        vetor.clear();

        for(int i = 0; i < N; i++){
            cin >> X;
            vetor.push_back((getSinal(X))); //pega apenas o sinal de cada valor
        }
        //cria a arvore de segmentos apenas com valores -1, 0, 1 pois o resultado do produto nao cabe em ll
        SegTree segTree = SegTree(); 
    
        for(int c = 0; c < K; c++){
            cin.ignore();
            cin >> comando;

            if(comando == 'C'){
                cin >> i >> v;
                segTree.update(0, 0, N-1, i-1, v);
            }
            if(comando == 'P'){
                cin >> i >> j;
                res = segTree.query(0, 0, N-1, i-1, j-1);
                cout << ((res == 0) ? '0' : ((res > 0) ? '+' : '-'));
            } 
        }       
        cout << endl;
    }
}