#include <iostream>
using namespace std;

typedef struct Pessoa{
    //structs dentro da struct
    struct Carro{
        double preco;
    };

    struct Casa{
        double preco;
    };

    struct Carro carro;
    struct Casa casa;

}t_pessoa; //apelido da struct

int main(){

    t_pessoa pessoa;

    pessoa.carro.preco = 25000.00;
    pessoa.casa.preco = 200000.00;

    cout << "Preço do carro: " << pessoa.carro.preco << endl;
    cout << "Preço da casa: " << pessoa.casa.preco << endl;

    return 0;
}