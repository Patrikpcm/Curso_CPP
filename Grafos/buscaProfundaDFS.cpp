#include <iostream>
#include <list>
#include <algorithm> //função find()
#include <stack> //pilha para usar na DFS
using namespace std;

class Grafo{
private:
    int V; //número de vértices
    list<int> *adj; //ponteiro para um array contendo as listas de adjacências

public:
    Grafo(int V); //construtor
    void adicionaAresta(int v1, int v2);
    void dfs(int v);
};

Grafo::Grafo(int V){
    this->V = V;
    adj = new list<int>[V];
}

void Grafo::adicionaAresta(int v1, int v2){
    adj[v1].push_back(v2);
}

void Grafo::dfs(int v){
    stack<int> pilha;
    bool visitados[V];//vetor de visitados

    //marca todos como não visitados
    for (int i = 0; i < V; i++)
        visitados[i] = false;
    
    while (true){
        if(!visitados[v]){
            cout << "Visitando vertice " << v << "...\n";
            visitados[v] = true; //marca como visitado
            pilha.push(v); //inserve v na pilha
        }

        bool achou = false;
        list<int>::iterator it;

        for(it = adj[v].begin(); it != adj[v].end(); it++){
            if(!visitados[*it]){ //*it acessa o conteúdo
                achou = true;
                break;
            }
        }

        if(achou)
            v = *it; //atualiza o v
        else{
            //se todos os vizinhos estão visitados ou não existem vizinhos, remove da pilha
            pilha.pop();
            //se a pilha ficar vazia, então terminou a busca
            if(pilha.empty())
                break;
            //se chegou aqui, é porque pode pegar elemento do topo
            v = pilha.top();
        }
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

    grafo.dfs(0);

return 0;
}