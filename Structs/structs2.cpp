#include <iostream>
using namespace std;

//structs podem ter métodos, parecida com classes.
struct Pessoa{
    private:
    int idade;
   
    public:
    Pessoa(int idade);/*{ //construtor da classe
        this->idade = idade;
    }*/
   
    void setIdade(int idade){
        this->idade = idade;
    }
    
    int getIdade(){
        return idade;
    }
};

//separando o construtor do método
Pessoa::Pessoa(int idade){
    setIdade(idade);
}

int main(){
    Pessoa p(20);

    cout << p.getIdade() << endl;

    return 0;
}