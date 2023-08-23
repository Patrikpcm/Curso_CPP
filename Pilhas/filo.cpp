#include <iostream>

using namespace std;

class Pilha{
private:
    int *vet;
    int tam_pilha;
    int topo;

public:
    Pilha(int tam){
        vet = new int[tam];
        topo = -1;
        tam_pilha = tam;
    }
    ~Pilha(){
        delete[] vet; 
    }
    void empilhar(int item){
        if(topo == tam_pilha){
            cout << "Pilha cheia!" << endl;
        }
        else{
            vet[++topo] = item;
        }
    }
    int desempilhar(){
        if(topo == -1){
            cout << "Pilha vazia -> possui itens = ";
            return NULL;
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

int main(){

    Pilha p(10);

    cout << "Quantidade de itens: " << p.qtdItens() << endl;
    cout << "Desempilhado o item \"" << p.desempilhar() << "\"" << endl;
    cout << "Empilhando: " << endl;
    p.empilhar(5);
    cout << "Quantidade de itens: " << p.qtdItens() << endl;
    cout << "Desempilhado o item \"" << p.desempilhar() << "\"" << endl;

    return 0;
}
