#include <iostream>
#include <list>
#include <climits> //int_max
#include <vector>
#include <queue>
#include <iomanip> //setw()

#define INFINITO INT_MAX

using namespace std;

enum Cor {BRANCO, CINZA, PRETO};

struct Vertice{
    Cor cor;       
    int pred;     
    int dist;     
};

class Grafo{
    private:
        int numeroDeVertices;
        vector <struct Vertice> vertices;
        list<int> *adj;
    public:
        Grafo(int n);
        void adicionarAresta(int v, int u);
        void BFS(int origem);
        void listVertices(int numVertices);
};

Grafo::Grafo(int n){
    this->numeroDeVertices = n;
    this->adj = new list<int>[n]; //cria uma lista de vetor (cada vertice na lista tera um vetor de vertices adjacentes a ele)
}

void Grafo::adicionarAresta(int v, int u){
    this->adj[v].push_back(u);
    this->adj[u].push_back(v); //grafo não orientado
}

void Grafo::listVertices(int numVertices){
    for(int i = 0; i < numVertices; i++)    {
        cout << "Rotulo | Cor | Distancia | Predecessor\n";
        cout << setw(6) << i
             << setw(5) << vertices[i].cor 
             << setw(12) << vertices[i].dist 
             << setw(10) << vertices[i].pred 
             << endl;
    }
}

void Grafo::BFS(int origem){
    //inicia vetor de vertices
    for(int u = 0; u < numeroDeVertices; u++){
        struct Vertice v;
            if(u != origem){                       
                v.cor = BRANCO;
                v.dist = INT_MAX;
            }
            else{
                v.cor = CINZA;
                v.dist = 0;
            }
            v.pred = -1;
            vertices.push_back(v);
    }  
    queue <int> fila;
    int u;

    fila.push(origem);

    while(!fila.empty()){
        u = fila.front();
        fila.pop();

        list<int>::iterator v;
        for(v = adj[u].begin(); v != adj[u].end(); v++)
           if(vertices[*v].cor == BRANCO){
               vertices[*v].cor = CINZA;
               vertices[*v].dist = vertices[u].dist + 1;
               vertices[*v].pred = u;
               fila.push(*v);
           }       
       vertices[u].cor = PRETO;
    }
}

int main(){
    Grafo grafo = Grafo (5);

    grafo.adicionarAresta(0,1);
    grafo.adicionarAresta(0,3);
    grafo.adicionarAresta(1,2);
    grafo.adicionarAresta(3,2);
    grafo.adicionarAresta(1,4);   
    grafo.adicionarAresta(4,2);

    grafo.BFS(1);

    grafo.listVertices(5);
}