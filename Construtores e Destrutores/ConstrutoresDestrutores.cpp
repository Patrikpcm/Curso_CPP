#include <iostream>
#include <string.h>
using namespace std;

class Pessoa{
protected:
    char nome[20];
    int idade;
    int *parentes;
    double *filhos;

public:
    //construtor da classe
    Pessoa(const char *nome, int idade){
        strcpy(this->nome, nome);
        this->idade = idade;
        parentes = new int[100];//alocando memória fora da pilha de execução
        filhos = new double[100];//alocando memória fora da pilha de execução
        cout << "Entrou no CONSTRUTOR - "<< nome << endl;
    }
    char *getNome(){
        return nome;
    }
    int getIdade(){
        return idade;
    }
    /*
    Destrutor tem um ~ antes do nome da classe. Ele é usado para desalocar memória
    fora da pilha de execução principal (memória alocada dinâmicamente).
    Ele executa mesmo sem ser chamado
    */
    ~Pessoa(){  
        cout << "Entrou no DESTRUTOR - " << this->nome << endl;
        delete[] parentes;
        delete[] filhos;
    }
};

int main(){
    /*
    Com membros protegidos na classe eu não posso atribuir valores diretamente.
    Dessa forma preciso usar construtores e destrutores para a classe.
    */
    //Pessoa p("João", 30);

    Pessoa pessoas[3] = {{"Patrik", 33},
                        {"Luiz", 34},
                        {"Gogola", 21}};

    //cout << "Nome: " << pessoas.getNome() << endl;
    //cout << "idade: " << pessoas.getIdade() << endl;

    return 0;
}