#include <iostream>
#include <string.h>

using namespace std;
//sobrecarga do operador =

class Pessoa{
private:
    char *nome;
    int id;
public:
    void destruir(){
        delete[] nome;
        nome = 0;
    }

    void inicializar(const char *novoNome, int novoID){
        int tam = strlen(novoNome) + 1;
        nome = new char(tam);
        strcpy(nome,novoNome);
        id = novoID;
    }
    
    Pessoa(const char *novoNome, int novoID){

       //int tam = strlen(novoNome) + 1;
        //nome = new char(tam);
        //strcpy(nome,novoNome);
        //id = novoID;
        inicializar(novoNome, novoID);
    }
   
    Pessoa (Pessoa &p){ //função de cópia profunda reutilizando a função inicializar
        inicializar(p.nome, p.id);
    }
   
   virtual ~Pessoa(){
        //delete [] nome;
        //nome = 0;
        destruir();
    }

    Pessoa& operator=(Pessoa &p){ //função que realiza a sobrecarga do operador =
        if(this != &p){ //se os endereços forem diferentes (nao for o mesmo objeto)
            destruir();
            inicializar(p.nome, p.id);
        }
    }

    const char *getNome(){
        return nome;
    }

    int getID(){
        return id;
    }

    void mudarNome(char l){
        nome[0] = l;
    }
};

int main(){

    Pessoa p1("Marcos", 1), p2("Pedro", 2);
    /*
    Sem a sobrecarga de operador, essa atribuição faz uma cópia superficial apontando os ponteiros
    para o mesmo endereço de memória.
    */
    p1 = p2; 
    p1.mudarNome('C');
    
    cout << "Nome: " << p1.getNome() << " ID: " << p1.getID() << endl;
    cout << "Nome: " << p2.getNome() << " ID: " << p2.getID() << endl;



    return 0;
}