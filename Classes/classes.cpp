#include <iostream>
#include <string.h>

using namespace std;

//funcionamento da classe é semelhante ao da struct
class Pessoa{
public:
    char nome[20];
    int idade;
    char cpf[20];    
};

int main(){

    Pessoa p1;
    strcpy(p1.nome, "Patrik");
    strcpy(p1.cpf,"000.000.000-00");
    p1.idade = 33;

    cout << "Nome: " << p1.nome << endl;
    cout << "Idade: " << p1.idade << endl;
    cout << "CPF: " << p1.cpf << "\n" << endl;

return 0;
}