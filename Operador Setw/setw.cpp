#include <iostream>
#include <iomanip>
using namespace std;

class Pessoa{
public:
    string nome;
    int idade;

    Pessoa(const string &nome, const int &idade){
        this->nome.assign(nome);
        this->idade = idade;
    }
};

int main(){
    Pessoa p1("Maria da silva", 20);
    Pessoa p2("Pedro Souza", 30);
    Pessoa p3("Felipe Luiz", 33);

    /*
    Exemplo do operador Setw definindo espaço de campos para o nome e idade, apresentando
    assim uma saída visualmente melhor para o usuário.
    */
    cout << setw(30) << "Nome" << setw(20) << "Idade" << endl;
    cout << setw(30) << p1.nome << setw(20) << p1.idade << endl;
    cout << setw(30) << p2.nome << setw(20) << p2.idade << endl;
    cout << setw(30) << p3.nome << setw(20) << p3.idade << endl;

    return 0;
}