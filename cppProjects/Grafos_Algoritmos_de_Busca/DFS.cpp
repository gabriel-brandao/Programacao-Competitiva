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
        cout << "Rotulo | Cor | Predecessor | Visita | Termino \n";
        cout << setw(6) << i
             << setw(5) << vertices[i].cor 
             << setw(10) << vertices[i].pred 
             << setw(10) << vertices[i].t_visita
             << setw(10) << vertices[i].t_termino
             << endl;
    }
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

    for(int u = 0; u < numeroDeVertices; u++)
        if(vertices[u].cor == BRANCO)
            DFS_visit(u, tempo);
}


int main(){
    /*Grafo grafo = Grafo (5);

    grafo.adicionarAresta(0,1);
    grafo.adicionarAresta(0,3);
    grafo.adicionarAresta(1,2);
    grafo.adicionarAresta(3,2);
    grafo.adicionarAresta(1,4);   
    grafo.adicionarAresta(4,2);
*/
    Grafo grafo = Grafo (5);

    grafo.adicionarAresta(0, 4);//*
    grafo.adicionarAresta(0, 1);
    grafo.adicionarAresta(1, 3);
    grafo.adicionarAresta(1, 2);
    grafo.adicionarAresta(3, 4);
    grafo.adicionarAresta(4, 2);

    grafo.DFS();
    grafo.listVertices(5);
    //grafo.listVertices(5);
}