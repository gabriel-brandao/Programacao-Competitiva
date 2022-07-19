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
    int pred;     // predecessor 
    int dist;     //distancia
    int custo;    //peso da aresta 
};

class Grafo{
    private:
        int numeroDeVertices;
        vector <struct Vertice> vertices; 
        list<pair <int, int> > *adj; //lista de pares adjacentes (vertice destino, custo)
    public:
        Grafo(int n);
        void adicionarAresta(int v, int u, int custo);
        void Dijkstra(int origem);
        void listVertices(int numVertices);
};

Grafo::Grafo(int n){
    this->numeroDeVertices = n;
    this->adj = new list<pair<int, int> >[n];
}

void Grafo::adicionarAresta(int v, int u, int custo){
    this->adj[v].push_back(make_pair(u, custo));   
    this->adj[u].push_back(make_pair(v, custo)); //grafo não orientado
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

void Grafo::Dijkstra(int origem){
    //fila de prioridades <peso, vertice> levando em conta o menor custo como topo da fila
    priority_queue <pair <int, int>, 
                                vector<pair <int, int> >, greater<pair <int, int> > > Q;
   
    //inicia vetor de vertices
    for(int u = 0; u < numeroDeVertices; u++){        
        struct Vertice v;
        v.cor = BRANCO;
        v.pred = -1;
        
        if(u != origem)
           v.dist = INFINITO;      
        else
           v.dist = 0;     
      vertices.push_back(v);
    }
 
    Q.push(make_pair(0, origem));
    
    while(!Q.empty()){
        int u = Q.top().second; //extrai o vertice do topo
        Q.pop();
        
        if(vertices[u].cor != PRETO){ //se não foi visitado:
            vertices[u].cor = PRETO;

            list<pair <int, int>>::iterator it; //percorrer a lista dos adjacentes à u
            for(it = adj[u].begin(); it != adj[u].end(); it++){
                int v = it->first;
                int custo = it->second;

                //relaxamento
                if(vertices[v].dist > (vertices[u].dist + custo)){ //se grafo nao orientado é preciso verificar se vertices[v] é diferente de PRETO, senão contará a volta
                    vertices[v].dist = vertices[u].dist  + custo;
                    vertices[v].pred = u; 
                    Q.push(make_pair(vertices[v].dist, v)); //insere na fila com o menor distancia no topo
                }
            }
        }
    }
}

int main(){
    int N, M, C, K, U, V, P;

    while(cin >> N >> M >> C >> K){
        if( N == M && M == C && C == K && K == 0)
            break;
        
        Grafo grafo = Grafo(N);

        for(int i = 0; i < M; i++){
            cin >> V >> U >> P;
            grafo.adicionarAresta(U, V, P);
        }

        grafo.Dijkstra(K);
        grafo.listVertices(N);
        cout << endl;
    }




}