#include <iostream>
#include <list>
#include <queue> //fila para usar a busca BFS
using namespace std;

class Grafo{
private:
    int V; //número de vértices
    list<int> *adj; //ponteiro para um array contendo as listas de adjacências

public:
    Grafo(int V); //construtor
    void adicionaAresta(int v1, int v2);
    void bfs(int v);
};

Grafo::Grafo(int V){
    this->V = V;
    adj = new list<int>[V];
}

void Grafo::adicionaAresta(int v1, int v2){
    adj[v1].push_back(v2);
}

void Grafo::bfs(int v){
    
    queue<int> fila;
    bool visitados[V]; //vetor de visitados

    for(int i=0; i<V; i++)
        visitados[i] = false; 

    while (true){
        list<int>::iterator it;
        for(it = adj[v].begin(); it != adj[v].end(); it++){
            if(!visitados[*it]){
                cout << "Visitando o vértice: " << *it << " ...\n";
                visitados[*it] = true; //marca como visitado
                fila.push(*it); //insere na fila
            }
        }

        //verifica se a fila NÃO esta vazia
        if(!fila.empty()){
            v = fila.front(); //obtem o primeiro elemento
            fila.pop();
        }
        else
            break;
    }
    
}

int main(){

    int V = 8;
    Grafo grafo(V);

    //adicionando arestas
    grafo.adicionaAresta(0,1);
    grafo.adicionaAresta(0,2);
    grafo.adicionaAresta(1,3);
    grafo.adicionaAresta(1,4);
    grafo.adicionaAresta(2,5);
    grafo.adicionaAresta(2,6);
    grafo.adicionaAresta(6,7);

    grafo.bfs(0);
return 0;
}