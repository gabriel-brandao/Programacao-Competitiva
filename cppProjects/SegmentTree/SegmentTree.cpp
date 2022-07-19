#include <iostream>
#include <vector>

using namespace std;
/*
 Segment Tree
 Build: O(n)
 Update: O(log n)
 Query: O(log n) -> nesse programa a query é a soma dos elementos

 se query é SOMA - elemento neutro é "0".
 se query é PRODUTO - elemento neutro é "1".
 se query é MAXIMIZAR - elemento neutro é "-INFINITO".
 se query é MINIMIZAR - elemento neutro é "+INFINITO".
*/
class SegTree{
 private:
    vector<int> segTree;
    int tamanho;
    int elementoNeutro; 
 public:
    SegTree(vector<int> vetor);
    void build(vector <int> vetor, int x, int esq, int dir);
    void update(int x, int esq, int dir, int index, int novo_valor);
    int query( int x, int esq, int dir, int i, int j);

    void printSegTree(int tamanho);
};

//construtor
SegTree::SegTree(vector<int> vetor){
    int n = vetor.size();

    this->tamanho = 4*n;
    this->segTree.assign(tamanho, 0); //inicia 4*tamanho do array com 0
    this->elementoNeutro = 0;

    build(vetor, 0, 0, n-1);
}

//x - ponto que estamos no array
//esq e dir - intervalo que o ponto esta cuidando
void SegTree::build(vector <int> vetor, int x, int esq, int dir){
    if(esq == dir) //nó folha
        segTree[x] = vetor[esq];
    else{
        int meio = (esq + dir) / 2;
        build(vetor, 2*x+1, esq, meio); //filho esquerdo
        build(vetor, 2*x+2, meio+1, dir); //filho direito
        segTree[x] = segTree[2*x+1] + segTree[2*x+2]; //pai é a soma dos filhos
    }
}

//x - nó atual
//esq e dir - intervalo que o ponto está cuidando
//index e novo_valor - indice que queremos atualizar e seu valor
void SegTree::update(int x, int esq, int dir, int index, int novo_valor){
    if(esq == dir) //se nó atual é nó folha
        segTree[x] = novo_valor;
    else{
        int meio = (esq + dir) / 2;

        if(index >= esq && index <= meio) //o index está no filho esquerdo
            update(2*x+1, esq, meio, index, novo_valor);
        else
            update(2*x+2, meio+1, dir, index, novo_valor);
        
        segTree[x] = segTree[2*x+1] + segTree[2*x+2]; //apos atualizar os filhos atualizamos o nó atual      
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
    return query(2*x+1, esq, meio, i, j) + query(2*x+2, meio+1, dir, i, j); //soma da respostas dos filhos
}

void printVetor(vector<int> vetor, int n){
    for(int i = 0; i < n; i++)
        cout << "a[" << i << "] = " << vetor[i] << "  ";

    cout << endl;
}

void SegTree::printSegTree(int n){
   for(int i = 0; i < 4*n; i++){
        cout << "segTree[" << i << "] = " << segTree[i] << "  ";
        if(i % 5 == 0)
            cout << endl;
   }     
}

int main(){
    
    int tamanho, item;
    vector<int> vetor = vector<int>();
    cin >> tamanho;

    for(int i = 0; i < tamanho; i++){
        cin >> item;
        vetor.push_back(item);
    }

    printVetor(vetor, tamanho);
    SegTree ST = SegTree(vetor);
    
    ST.printSegTree(tamanho);
    ST.update(0, 0, tamanho-1, 0, 10);
    cout << ST.query(0, 0, tamanho-1, 1, 3) << endl;
}