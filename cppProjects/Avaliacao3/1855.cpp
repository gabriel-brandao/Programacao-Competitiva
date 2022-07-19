#include <iostream>

using namespace std;

enum Direcao {NENHUM, BAIXO, CIMA, ESQUERDA, DIREITA};
int x, y;
char **mapa;

bool baixo (char caminho){
    return caminho == 'v' ? true : false;
}

bool cima (char caminho){
    return caminho == '^' ? true : false;
}

bool esquerda (char caminho){
    return caminho == '<' ? true : false;
}

bool direita (char caminho){
    return caminho == '>' ? true : false;
}

bool achou (char caminho){
    return caminho == '*' ? true : false;
}

bool continua (char caminho){
    return caminho == '.' ? true : false;
}

bool pontoDeRedirecao (char caminho){
    return caminho == 'X' ? true : false;
}

void jogar (int ix, int iy, Direcao anterior){

    if((ix >= 0 && iy >= 0) && (ix <= x || iy <= y) ){ //se tiver dentro do limite do mapa:
        if(achou(mapa[ix][iy])){
            cout << '*' << endl;
            return;
        }

        if(pontoDeRedirecao(mapa[ix][iy])){ //se ja passou por esse ponto
            cout << '!' << endl;
            return;
        }

        if(baixo(mapa[ix][iy])){
            mapa[ix][iy] = 'X';
            jogar(ix+1, iy, BAIXO);
        } 
         else
            if(cima(mapa[ix][iy])){
                mapa[ix][iy] = 'X';
                jogar(ix-1, iy, CIMA);
            } 
             else
                if(esquerda(mapa[ix][iy])){
                    mapa[ix][iy] = 'X';
                    jogar(ix, iy-1, ESQUERDA);
                } 
                 else
                    if(direita(mapa[ix][iy])){
                        mapa[ix][iy] = 'X';
                        jogar(ix, iy+1, DIREITA);
                    } 
                     else
                        if(continua(mapa[ix][iy])){
                            if(anterior == BAIXO)
                                jogar(ix+1, iy, BAIXO);
                            if(anterior == CIMA)
                                jogar(ix-1, iy, CIMA); 
                            if(anterior == ESQUERDA)
                                jogar(ix, iy-1, ESQUERDA);
                            if(anterior == DIREITA)
                                jogar(ix, iy+1, DIREITA);
                        }     
    }
     else{
        cout << '!' << endl;
        return;
     }
}

bool existeBau(char **mapa, int x, int y){
    for(int i = 0; i < x; i++)
        for(int j = 0; j < y; j++)
            if(mapa[i][j] == '*')
                return true;    
    return false;
}

int main(){
    cin >> y; //colunas
    cin >> x; //linhas4

    //cria matriz dinamica
    mapa = new char *[x];
    for(int i = 0; i < x; i++)
        mapa[i] = new char [y];

    cin.ignore();
    for(int i = 0; i < x; i++)
        for(int j = 0; j < y; j++)
            cin >> mapa[i][j];

    //se mapa inicia em alguma direção e existe um bau no mapa 
    if(mapa[0][0] == '.' || !existeBau(mapa , x, y)) 
        cout << "!" << endl;
    else
        jogar(0, 0, NENHUM);       
}