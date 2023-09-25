/*
Esse código implenta um exemplo de grafo utilizando a Lista de Adjacência.

Representação de uma lista de adjacência
1: ->2->5-      os vizinhos do 1
2: ->1->3->5-   os vizinhos do 2
3: ->2->4-      os vizinhos do 3
4: ->3->5->6-   os vizinhos do 4
5: ->1->2->4-   os vizinhos do 5
6: ->4-         os vizinhos do 6
*/

#include <iostream>
#include <list>
#include <algorithm> //função find()
using namespace std;

class Grafo{
private:
    int V; //número de vértices
    list<int> *adj; //ponteiro para um array contendo as listas de adjacências

public:
    Grafo(int V); //construtor

    void adicionaAresta(int v1, int v2);

    int obterGrauSaida(int v);

    bool existeVizinho(int v1, int v2);
};

Grafo::Grafo(int V){
    this->V = V;
    adj = new list<int>[V];
}

void Grafo::adicionaAresta(int v1, int v2){
    adj[v1].push_back(v2);
}

int Grafo::obterGrauSaida(int v){
    return adj[v].size();
}

bool Grafo::existeVizinho(int v1, int v2){
    if (find(adj[v1].begin(), adj[v1].end(), v2) != adj[v1].end())
        return true;
    else    
        return false;
}

int main(){

    //criando um grafo de 4 vértices
    Grafo grafo(4);

    //adicionando arestas
    grafo.adicionaAresta(0,1);
    grafo.adicionaAresta(0,3);
    grafo.adicionaAresta(1,2);
    grafo.adicionaAresta(3,1);
    grafo.adicionaAresta(3,2);

    //mostrando grau de saída
    cout << "Grau de saída do vértice 1: " << grafo.obterGrauSaida(1) << endl;
    cout << "Grau de saída do vértice 3: " << grafo.obterGrauSaida(3) << endl;
    
    //Verifica vizinhança
    if(grafo.existeVizinho(0,1))
        cout << "1 é vizinho de 0!\n";
    else
        cout << "1 NÃO é vizinho de 0!\n";

    if(grafo.existeVizinho(0,2))
        cout << "2 é vizinho de 0!\n";
    else
        cout << "2 NÃO é vizinho de 0!\n";

return 0;    
}