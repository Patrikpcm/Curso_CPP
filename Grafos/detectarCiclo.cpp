//Grafo - Verifica se um grafo direcionado tem ciclo
#include <iostream>
#include <list>
#include <stack>
using namespace std;

class Grafo{
private:
    int V; //número de vértices
    list<int> *adj;

public:
    Grafo(int V);
    void adicionaAresta(int v1, int v2);
    //faz uma DFS a partir de um vétice, retorna se achou ciclo ou não
    bool dfs(int v);
    //verifica se o grafo direcionado tem ciclo
    bool temCiclo();
};

Grafo::Grafo(int V){
    this->V = V;
    adj = new list<int>[V];
}

void Grafo::adicionaAresta(int v1, int v2){
    adj[v1].push_back(v2);
}

bool Grafo::dfs(int v){
    stack<int> pilha;
    bool visitados[V], pilha_rec[V];
    
    //inicializa visitados e pilha_rec com false
    for(int i=0; i<V; i++)
        visitados[i] = pilha_rec[i] = false;
    
    //faz uma DFS
    while (true){
        bool achou_vizinho = false;
        list<int>::iterator it;

        if(!visitados[v]){
            pilha.push(v);
            visitados[v] = pilha_rec[v] = true;
        }

        for (it = adj[v].begin(); it!=adj[v].end(); it++){
            //se o vizinho já esta na pilha é porque existe cilco
            if(pilha_rec[*it])
                return true;
            else{
                //se não esta na pilha e não foi visitado, dindica que achou
                achou_vizinho = true;
                break;
            }
        }

        if(!achou_vizinho){
            pilha_rec[pilha.top()] = false; //marca que saiu da pilha
            pilha.pop();
            if(pilha.empty())
                break;
            v = pilha.top();
        }
        else   
            v = *it;
    }
    return false;
}

bool Grafo::temCiclo(){
    for (int i=0; i < V; i++){
        if(dfs(i))
            return true;
    }
    return false;
}

int main(){

    Grafo grafo(4);

    grafo.adicionaAresta(0,1);
    grafo.adicionaAresta(0,2);
    grafo.adicionaAresta(1,3);
    grafo.adicionaAresta(3,0);

    if(grafo.dfs(1))
        cout << "Contém ciclo!\n";
    else
        cout << "NÃO contém ciclo!\n";

    
    if(grafo.dfs(2))
        cout << "Contém ciclo!\n";
    else
        cout << "NÃO contém ciclo!\n";

    if(grafo.temCiclo())
        cout << "Contém ciclo!\n";
    else
        cout << "NÃO contém ciclo!\n";

    
return 0;
}