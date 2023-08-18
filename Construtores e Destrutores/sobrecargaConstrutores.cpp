#include <iostream>
using namespace std;

/*
Em C++, caso não seja fornecido um constutor o compilador pode apresentar um erro.
Entretanto, normalmente o compilador adiciona um construtor a classe de forma implicita.
*/
class Carro{
private:
    int ano;
    double preco;

public:
    //construtor do tipo 1
    Carro(){ 
        ano = 0;
        preco = 0.0;
    }
    //Construtor do tipo 2, com ano transmitido
    Carro(int ano){
        this->ano = ano;
        this->preco = 0.0;
    }
    //Construtor do tipo 3, com ano e preço transmitido
    Carro(int ano, double preco){
        this->ano = ano;
        this->preco = preco;
    }
    
    int getAno(){
        return this->ano;
    }

    double getPreco(){
        return this->preco;
    }

};

int main(){

    Carro carro1;
    Carro carro2(2023);
    Carro carro3(2023,42.153);

    cout << "Ano carro 1: " << carro1.getAno() << endl;
    cout << "Preço carro 1: " << carro1.getPreco() << "\n" << endl;


    cout << "Ano carro 2: " << carro2.getAno() << endl;
    cout << "Preço carro 2: " << carro2.getPreco() << "\n" << endl;


    cout << "Ano carro 3: " << carro3.getAno() << endl;
    cout << "Preço carro 3: " << carro3.getPreco() << "\n" << endl;

    return 0;
}