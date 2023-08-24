#include <iostream>
#include "classeTemplate.h"

using namespace std;

int main(){

    Pilha<int> p(10);   //Basta trocar o tipo de dados que esta sendo inserido para a função tratar o dado.
                        //Por exemplo, troque int por double para ver a saída.

    cout << "Quantidade de itens: " << p.qtdItens() << endl;
    cout << "Desempilhado o item \"" << p.desempilhar() << "\"" << endl;
    cout << "Empilhando: " << endl;
    p.empilhar(5.11);
    cout << "Quantidade de itens: " << p.qtdItens() << endl;
    cout << "Desempilhado o item \"" << p.desempilhar() << "\"" << endl;

    return 0;
}