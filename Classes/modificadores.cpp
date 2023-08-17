#include <iostream>
#include <string.h>
using namespace std;

class Linguagem{
//classe amiga, não faz parte diretamente da classe mas tem acesso aos membros da mesma 
friend void classeAmiga(Linguagem *);

public: //membro publicamente acessível
    char nome[100];
    
    void mostrarNome2(){ //exemplo de acesso a membros Protected
        mostrarNome();
    }
   
private: // acessa somente através de métodos
     char linguagem[10];

protected://acessível somente por outros metodos dentro da própria classe
    void mostrarNome(){
        cout << "Nome: " << nome << endl;
    }
};

/*
-Função amiga, não membro da classe. Mas consegue acessar os membros da classe
-Uma classe amiga pode participar de duas classes diferentes
-Uma função amiga pode unir 2 classes
*/
void classeAmiga(Linguagem *l){ 
    cout << "Classe amiga diz: " << l->nome << endl;
}

int main(){
    Linguagem l;

    strcpy(l.nome, "C++");
    classeAmiga(&l);
    return 0;
}