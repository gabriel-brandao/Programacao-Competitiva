#include <iostream>
#include <list>  //list<pair<>>
#include <climits> //int_max
#include <queue> //priority_queue
#include <vector>

#define INFINITO INT_MAX

using namespace std;

enum Cor {BRANCO, CINZA, PRETO};

struct Vertice{
    Cor cor;      
    int pred;     // predecessor 
    int custo;     
};

class Grafo{
    private:
        int numeroDeVertices;
        vector <struct Vertice> vertices; 
        list<pair <int, int> > *adj; //lista de pares adjacentes (vertice destino, custo)
        int numDeAcesso;
    public:
        Grafo(int n);
        void adicionarAresta(int v, int u, int custo);
        void removerAresta(int x, int z, int custoXZ);
        void Dijkstra(int origem, int destino);
        int procuraAresta(int u, int v);
        int getCustoCidade(int u);     
};

Grafo::Grafo(int n){
    this->numeroDeVertices = n;
    this->adj = new list<pair<int, int> >[n];
}

void Grafo::adicionarAresta(int v, int u, int custo){
    this->adj[v].push_back(make_pair(u, custo));   
    this->adj[u].push_back(make_pair(v, custo)); //grafo não orientado
}

void Grafo::removerAresta(int x, int z, int custoXZ){
    this->adj[x].remove(make_pair(z, custoXZ));
    this->adj[z].remove(make_pair(x, custoXZ)); //grafo não orientado
}

void Grafo::Dijkstra(int origem, int destino){
    //fila de prioridades <peso, vertice> levando em conta o menor custo como topo da fila
    priority_queue <pair <int, int>, 
                                vector<pair <int, int> >, greater<pair <int, int> > > Q; 
    //inicia vetor de vertices
    for(int u = 0; u < numeroDeVertices; u++){        
        struct Vertice v;
        v.cor = BRANCO;
        v.pred = -1;
        
        if(u != origem)
           v.custo = INFINITO;      
        else
           v.custo = 0;     
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
                if(vertices[v].custo > (vertices[u].custo + custo)){
                    vertices[v].custo = vertices[u].custo  + custo;
                    vertices[v].pred = u; 
                    Q.push(make_pair(vertices[v].custo, v)); //insere na fila com o menor custo no topo
                }
            }
        }
    }
}

int Grafo::procuraAresta(int x, int z){
    list<pair <int, int> >::iterator it = adj[x].begin();
    for(; it != adj[x].end(); it++)
        if(it->first == z)  
            return it->second; //retorna o custo da aresta x->z se ela existir
    return -1; //caso contrario
}

int Grafo::getCustoCidade(int u){
    if(vertices[u].custo != INFINITO)
        return vertices[u].custo;
    
    return -1; //não alcançavel a partir da origem que foi dada ao Dijkstra
}

void encurtaCaminho(list<pair<int, int>> *VerticesLidos, Grafo &grafo, int numCidades){  
    for(int x = 0; x < numCidades; x++){

        list<pair <int , int> >::iterator it;
        for(it = VerticesLidos[x].begin(); it != VerticesLidos[x].end(); it++){
            int y = it->first;
            int custoXY = it->second;

            list<pair <int , int> >::iterator it2;
            for(it2 = VerticesLidos[y].begin(); it2 != VerticesLidos[y].end(); it2++){
                int z = it2->first;
                int custoYZ = it2->second;
                int achou = grafo.procuraAresta(x, z);

                    if(achou > custoXY + custoYZ || achou == -1){ //se achou e o custo é maior ou é 1ª inserção
                        if(achou != -1)//achou e o custo é maior
                            grafo.removerAresta(x, z, achou);
                        grafo.adicionarAresta(x, z, custoXY + custoYZ);
                    }
            }
        }
    } 
}

int main(){
    int cidades, arestas, u, v, g;
    
    cin >> cidades >> arestas;

    list<pair<int, int> > *VerticesLidos =  new list <pair <int, int> >[cidades];
    Grafo grafo = Grafo(cidades);

    for(int a = 0; a < arestas; a++){
        cin >> u >> v >> g;
        VerticesLidos[u-1].push_back(make_pair(v-1, g));//armazena no vertice 'u' o destino 'v'e seu custo 'g'
        VerticesLidos[v-1].push_back(make_pair(u-1, g)); //estradas bidirecionais
    }

    //se existe caminho (x->y) e (y->z) então existe caminho (x->z)
    encurtaCaminho(VerticesLidos, grafo, cidades); //passa Vertices por valor e grafo por referencia
    grafo.Dijkstra(0, cidades-1);
    
    cout << grafo.getCustoCidade(cidades-1) << endl;  
}