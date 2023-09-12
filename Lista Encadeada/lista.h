#include <iostream>
using namespace std;

template<class T>
class No{
private:
    T v;
    No *prox;

public:
    No(T v){ //construtor
        this->v = v;
        this->prox = NULL;
    }

    T obterValor(){
            return v;
    }

    No *obterProx(){
        return prox;
    }

    void setProx(No *p){
        this->prox = p;
    }
};

template<class T>
class Lista{
private:
    No<T> *cabeca;
    No<T> *cauda;
public:
    Lista(){ //construtor
        cabeca = NULL;
        cauda = NULL;
    }

    Lista(T v){//construtor 2
        cabeca = new No<T>(v);
        cauda = cabeca;
    }

    virtual ~Lista(){
        delete cabeca;
    }

    void mostrar(){
        cout << "\nImprimindo elementos da lista...\n";
        No<T> * c = cabeca;

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

    void inserir_inicio(T v){
        No<T> *novo = new No<T>(v);
        novo->setProx(cabeca);
        cabeca = novo;
    }

    void inserir_final(T v){
        No<T> *novo = new No<T>(v);
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
            No<T> *c = cabeca;
            int tam = 0;
            do{
                c = c->obterProx();
                tam++;
            }
            while (c);
            return tam;
        }
        
    }

    bool existe(T v){
        No<T> *c = cabeca;
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
                No<T> *ant_ant = cabeca;
                No<T> *ant = cabeca->obterProx();
                No<T> *corrente = cabeca->obterProx()->obterProx();
                while(corrente){
                    No<T> *aux = ant;
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