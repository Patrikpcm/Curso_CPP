#include <iostream>
#include "pilha.cpp"

using namespace std;

int main(){

    Pilha p(10);

    cout << "Quantidade de itens: " << p.qtdItens() << endl;
    cout << "Desempilhado o item \"" << p.desempilhar() << "\"" << endl;
    cout << "Empilhando: " << endl;
    p.empilhar(5);
    cout << "Quantidade de itens: " << p.qtdItens() << endl;
    cout << "Desempilhado o item \"" << p.desempilhar() << "\"" << endl;

    return 0;
}