#include <iostream>
#include <string.h>
using namespace std;

class Estudante{
private:
     char *nome;

public:
    //construtor da classe
    Estudante(const char *nome){
        cout << "Construindo objeto..." << endl;
        int tam = (strlen(nome)+1);
        this->nome = new char(tam);
        strcpy(this->nome, nome);
    }

    //construtor de cópias
    Estudante(const Estudante &e){
        cout << "Construindo cópia..." << endl;
        int tam = strlen(e.nome) + strlen("Copia de ") + 1;
        this->nome = new char(tam);
        strcpy(this->nome, "Copia de ");
        strcat(this->nome, e.nome);
    }

    ~Estudante(){
        cout << "Destruindo..." << nome << endl;
        delete[] nome;
        nome = 0;
    }

    const char *getNome(){
        return nome;
    }

};

void foo(){    
    Estudante estudante("Patrik");
    cout << "Estudante " << estudante.getNome() << endl;
}

int main(){

    //Estudante e;
    foo();

   // cout << "Idade: " << e.idade << endl;

    return 0;
}