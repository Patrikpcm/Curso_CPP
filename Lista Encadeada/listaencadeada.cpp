#include <iostream>
using namespace std;

class No{
private:
    int v;
    No *prox;

public:
    No(int v){ //construtor
        this->v = v;
        this->prox = NULL;
    }

    int obterValor(){
            return v;
    }

    No *obterProx(){
        return prox;
    }

    void setProx(No *p){
        this->prox = p;
    }
};

class Lista{
private:
    No *cabeca;
    No *cauda;
public:
    Lista(){ //construtor
        cabeca = NULL;
        cauda = NULL;
    }

    Lista(int v){//construtor 2
        cabeca = new No(v);
        cauda = cabeca;
    }

    virtual ~Lista(){
        delete cabeca;
    }

    void mostrar(){
        cout << "\nImprimindo elementos da lista...\n";
        No * c = cabeca;

        if(vazia())
            cout << "A lista esta vazia" << endl;
        else{
            while(c){
                cout << c->obterValor() << endl;
                c = c->obterProx();
            }
            cout << endl;
        }
    }

    bool vazia(){
        return (cabeca == NULL);
    }

    void inserir_inicio(int v){
        No *novo = new No(v);
        novo->setProx(cabeca);
        cabeca = novo;
    }

    void inserir_final(int v){
        No *novo = new No(v);
        if(vazia()){
            cabeca = novo;
            cauda = novo;
        }
        else{
            cauda->setProx(novo);
            cauda = novo;
        }
    }

    int tamanho(){
        if(vazia())
            return 0;
        else{
            No *c = cabeca;
            int tam = 0;
            do{
                c = c->obterProx();
                tam++;
            }
            while (c);
            return tam;
        }
        
    }

    bool existe(int v){
        No *c = cabeca;
        while(c){
            if(c->obterValor() == v)
                return true;
            c = c->obterProx();
        }
        return false;
    }

    void remover(){ //remoção do final
        if(!vazia()){
            //se houver só 1 elemento
            if(cabeca->obterProx()==NULL)
                cabeca = NULL;
            //2 elementos
            else if(cabeca->obterProx()->obterProx() == NULL)
                cabeca->setProx(NULL);
            else{
                No *ant_ant = cabeca;
                No *ant = cabeca->obterProx();
                No *corrente = cabeca->obterProx()->obterProx();
                while(corrente){
                    No *aux = ant;
                    ant = corrente;
                    ant_ant = aux;
                    corrente = corrente->obterProx();
                }
                delete ant_ant->obterProx();
                ant_ant->setProx(NULL);
                cauda = ant_ant;
            }
        }
    }
};

int main(){

    Lista l;

    if(l.vazia())
        cout << "Lista Vazia" << endl;
    else
        cout << "Lista NÃO VAZIA" << endl;

    l.mostrar();

    if(l.existe(10))
        cout << "\nO Elemento 10 existe na lista" << endl;
    else
        cout << "O Elemento 10 NÃO existe na lista" << endl;
    
    l.inserir_final(10);
    l.inserir_final(20);
    l.inserir_final(30);
    l.inserir_final(40);
    l.inserir_inicio(50);

    l.mostrar();

    if(l.existe(10))
        cout << "\nO Elemento 10 existe na lista" << endl;
    else
        cout << "O Elemento 10 NÃO existe na lista" << endl;

    l.remover();
    l.mostrar();

    cout << "Tamanho da lista: " << l.tamanho() << endl;

return 0;
}