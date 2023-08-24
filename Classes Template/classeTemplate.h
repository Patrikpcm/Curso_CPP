#include <iostream>
using namespace std;

template <class Type>
class Pilha{
private:
    Type *vet;
    int tam_pilha;
    int topo;

public:
    Pilha(int tam){
        vet = new Type[tam];
        topo = -1;
        tam_pilha = tam;
    }
    
    ~Pilha(){
        delete[] vet; 
    }
    void empilhar(Type item){
        if(topo == tam_pilha){
            cout << "Pilha cheia!" << endl;
        }
        else{
            vet[++topo] = item;
        }
    }
    Type desempilhar(){
        if(topo == -1){
            cout << "Pilha vazia -> possui itens = ";
            return 0;
        }
        else{
            topo--;
            return vet[topo + 1];
        }
    }
    int qtdItens(){
    /*
    Como a pilha começa em 0 e -1 significa que ela esta vazia,
    eu retorno o valor de topo + 1 para saber a quantidade de itens 
    na pilha.
    ex: -1 + 1 = 0;
        0 + 1 = 1 (um item)
        1 + 1 = 2 (dois itens)
        ...
        n + 1 = n+1(n+1 itens)
    */
        return(topo+1); 
    }
};