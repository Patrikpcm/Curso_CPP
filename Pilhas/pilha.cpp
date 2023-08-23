#include <iostream>
#include "pilha.h"
using namespace std;


Pilha::Pilha(int tam){
    vet = new int[tam];
    topo = -1;
    tam_pilha = tam;
}
Pilha::~Pilha(){
    delete[] vet; 
}
void Pilha::empilhar(int item){
    if(topo == tam_pilha){
        cout << "Pilha cheia!" << endl;
    }
    else{
        vet[++topo] = item;
    }
}
int Pilha::desempilhar(){
    if(topo == -1){
        cout << "Pilha vazia -> possui itens = ";
        return 0;
    }
    else{
        topo--;
        return vet[topo + 1];
    }
}
int Pilha::qtdItens(){
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