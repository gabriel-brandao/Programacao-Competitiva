/* Implementação de BFS e DFS em Grafo usando lista de adjacencias,
cabe ao usuário decidir qual algoritmo irá usar na implementação e ocultar 
os campos necessarios da classe Grafo e do struct Vertice.
*/

#include <iostream>
#include <list>
#include <climits> //int_max
#include <vector>
#include <queue>
#include <iomanip> //setw()
#define INFINITO 10000000

using namespace std;

enum Cor {BRANCO, CINZA, PRETO};

struct Vertice{
    Cor cor;       //(BFS e DFS)
    int pred;     // predecessor (BFS e DFS)
    int dist;     //distancia (BFS e Dijkstra)
    int t_visita;  //(DFS)
    int t_termino; //(DFS)
    int custo;     //(Dijkstra)
};

class Grafo{
    private:
        int numeroDeVertices;
        vector <struct Vertice> vertices;
        list<int> *adj;  
        list<pair <int, int> > *adjD; //lista de pares adjacentes (vertice destino, custo) - Dijkstra
    public:
        Grafo(int n);
        void adicionarAresta(int v, int u);
        void adicionarAresta(int v, int u, int custo);
        void BFS(int s);
        void DFS();
        void DFS_visit(int u, int &t);
        void Dijkstra(int origem);
        void listVertices(int numVertices);
};

Grafo::Grafo(int n){
    this->numeroDeVertices = n;
    this->adj = new list<int>[n]; //cria uma lista de vetor (cada vertice na lista tera um vetor de vertices adjacentes a ele)
    this->adjD = new list<pair<int, int> >[n];
}

void Grafo::adicionarAresta(int v, int u){
    this->adj[v].push_back(u);
    this->adj[u].push_back(v); //grafo não orientado
}

void Grafo::adicionarAresta(int v, int u, int custo){
    this->adjD[v].push_back(make_pair(u, custo));   
    //this->adjD[u].push_back(make_pair(v, custo)); //grafo não orientado
}

void Grafo::listVertices(int numVertices){
    for(int i = 0; i < numVertices; i++)    {
        cout << "Rotulo | Cor | Distancia | Predecessor | Visita | Termino \n";
        cout << setw(6) << i
            // << setw(5) << vertices[i].cor 
             << setw(12) << vertices[i].dist 
             << setw(10) << vertices[i].pred 
            // << setw(10) << vertices[i].t_visita
            // << setw(10) << vertices[i].t_termino
             << endl;
    }
}

void Grafo::BFS(int s){
    queue <int> fila;
    
    for(int u = 0; u < numeroDeVertices; u++){
        struct Vertice v;
            if(u != s){                       
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
    fila.push(s);
    int u;

    while(!fila.empty()){
        u = fila.front();
        fila.pop();

        list<int>::iterator v;
        for(v = adj[u].begin(); v != adj[u].end(); v++){
           if(vertices[*v].cor == BRANCO){
               vertices[*v].cor = CINZA;
               vertices[*v].dist = vertices[u].dist + 1;
               vertices[*v].pred = u;
               fila.push(*v);
           }
        }
        vertices[u].cor = PRETO;
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

void Grafo::Dijkstra(int origem){
    int visitados[numeroDeVertices];

    //fila de prioridades <peso, vertice> levando em conta a menor distancia
    priority_queue <pair <int, int>, 
                                vector<pair <int, int> >, greater<pair <int, int> > > Q;

    
    for(int u = 0; u < numeroDeVertices; u++){
        visitados[u] = false;
        struct Vertice v;
        if(u != origem){
           v.cor = BRANCO;
           v.pred = -1;
           v.dist = INFINITO;
        }
          else{
            v.cor = BRANCO;
            v.pred = -1;
            v.dist = 0;
          }
      vertices.push_back(v);
    }
 
    Q.push(make_pair(0, origem));
    
    while(!Q.empty()){
        int u = Q.top().second; //extrai o vertice do topo
        Q.pop();
        
        if(vertices[u].cor != PRETO){ //se não foi visitado:
            vertices[u].cor = PRETO;

            list<pair <int, int>>::iterator it; //percorrer a lista dos adjacentes a u
            for(it = adjD[u].begin(); it != adjD[u].end(); it++){
                int v = it->first;
                int custo = it->second;

                //relaxamento
                if(vertices[v].dist > (vertices[u].dist + custo)){
                    cout << "OOk\n";
                    vertices[v].dist = vertices[u].dist  + custo;
                    vertices[v].pred = u; 
                    Q.push(make_pair(vertices[v].dist, v));
                }
            }
        }
    }
}

int main(){
    Grafo grafo(5);//Grafo grafo = Grafo(5);
    
    /*
    grafo.adicionarAresta(0,1);
    grafo.adicionarAresta(0,3);
    grafo.adicionarAresta(1,2);
    grafo.adicionarAresta(3,2);
    grafo.adicionarAresta(1,4);   
    grafo.adicionarAresta(4,2);
    */

   
    grafo.adicionarAresta(0,1,10);
    grafo.adicionarAresta(0,4,5);
    grafo.adicionarAresta(1,2,1);
    grafo.adicionarAresta(1,4,2);
    grafo.adicionarAresta(2,3,4);
    grafo.adicionarAresta(3,2,6);
    grafo.adicionarAresta(3,0,7);
    grafo.adicionarAresta(4,3,2);
    grafo.adicionarAresta(4,1,3);
    grafo.adicionarAresta(4,2,9);

    //grafo.BFS(1);
    //grafo.DFS();
    grafo.Dijkstra(0);

    grafo.listVertices(5);

}