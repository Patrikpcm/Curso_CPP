#include <iostream>
using namespace std;

typedef struct Pessoa{
    string nome;
    int idade;
    double peso, altura;
}t_pessoa;

double &calcular_imc(t_pessoa &pessoa){ //retornando por referência utilizando o &
    
    double result = pessoa.peso / (pessoa.altura * pessoa.altura);
    double &imc = result;
    return imc;
}

int main(){
    t_pessoa pessoa = {"João", 20, 92.25, 1.74};
    cout << "IMC: " << calcular_imc(pessoa) << endl;

return 0;
}