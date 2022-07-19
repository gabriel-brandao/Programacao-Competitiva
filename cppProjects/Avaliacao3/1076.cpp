#include <iostream>
#include <list>
#include <climits> //int_max
#include <vector>
#include <queue>
#include <iomanip> //setw()
#include <algorithm> //qsort

#define INFINITO INT_MAX

using namespace std;

enum Cor {BRANCO, CINZA, PRETO};

bool compare(int a, int b){
    return (a < b);
}

struct Vertice{
    Cor cor;       
    int pred;     
    int t_visita;  
    int t_termino; 
};

class Grafo{
    private:
        int numeroDeVertices;
        vector <struct Vertice> vertices;
        list<int> *adj;  
    public:
        Grafo(int n);
        void adicionarAresta(int v, int u);
        void DFS();
        void DFS_visit(int u, int &t);
        vector <struct Vertice> getVertices();
};

Grafo::Grafo(int n){
    this->numeroDeVertices = n;
    this->adj = new list<int>[n]; //cria uma lista de vetor (cada vertice na lista tera um vetor de vertices adjacentes a ele)
}

void Grafo::adicionarAresta(int v, int u){
    this->adj[v].push_back(u);
    this->adj[u].push_back(v); //grafo não orientado
}

vector <struct Vertice> Grafo::getVertices(){
    return vertices;
}

void Grafo::DFS_visit(int u, int &tempo){ //passagem de parametro por referencia em C++
    vertices[u].cor = CINZA;
    vertices[u].t_visita = ++tempo;

    list<int>::iterator v;
    for(v = adj[u].begin(); v != adj[u].end(); v++)
        if(vertices[*v].cor == BRANCO){
            vertices[*v].pred = u;
            DFS_visit(*v, tempo);
        }
    
    vertices[u].cor = PRETO;
    vertices[u].t_termino = ++tempo;  
}

void Grafo::DFS(){
    //inicia vetor de vertices
    for(int v = 0; v < numeroDeVertices; v++){
        struct Vertice u;
        u.cor = BRANCO;
        u.pred = -1;
        vertices.push_back(u);
    }
    int tempo = 0;

    for(int u = 0; u < numeroDeVertices; u++){
        list<int>::iterator it = adj[u].begin(); //se it do inicio for igual ao fim entao esta vazio
        if(it != adj[u].end() && vertices[u].cor == BRANCO) //verifica se u tem vertices adjacentes nao visitados
            DFS_visit(u, tempo);
    }  
}

vector<int> armazenaTerminos(int numVertice, Grafo &grafo){
    vector<int> terminos;
    vector<struct Vertice> vertices = grafo.getVertices();

    for(int n = 0; n < numVertice; n++)
        if (vertices.at(n).cor != BRANCO)
            terminos.push_back(vertices.at(n).t_termino); 
    return terminos;     
}

int maiorTermino(vector<int> terminos){
    sort(terminos.begin(), terminos.end(), compare);
    return *terminos.rbegin(); //primeiro elemneto em um iterador reverso (ultimo elemento entao)
}

int main(){
    int casos, u, v, inicio, numVertice, numAresta;

    cin >> casos;

    for(int c = 0; c < casos; c++){
        cin >> inicio; //de nada faz diferença
        cin >> numVertice >> numAresta; 

        Grafo grafo = Grafo (numVertice);

        for(int a = 0; a < numAresta; a++){
            cin >> u >> v;
            grafo.adicionarAresta(u, v);
        }
        
        grafo.DFS();                    //passa vertice de terminos do grafo
        int maior = maiorTermino(armazenaTerminos(numVertice, grafo));

        cout << maior - 2 << endl; //-2 pois a contagem conta 2 acessos ao vertice inicial (visita e temino)
    }
}