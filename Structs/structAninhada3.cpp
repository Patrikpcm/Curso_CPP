/*
Exemplo de Struct aninhada utilizando ponteiros
*/
#include <iostream>
#include <string>
using namespace std;

typedef struct Universidade{

    string nome;

} t_universidade;
/*
Eu sempre coloco o apelido da struct para evitar de na chamada da struct ter que fazer a declaração explicita
da estruct.
Ex. caso não tivesse apelidado a struct de t_universidade. A chamada dela na main() seria assim:

struct Universidade e; 

Note que tenho que declarar struct na frente.


Dessa forma como esta, basta chamar:

t_universidade e;

Essa é a única diferença.
*/

typedef struct Aluno{
    string nome;
    t_universidade universidade;
}t_aluno;

int main(){

    t_aluno aluno = {"Patrik", {"UFPR"}};
    t_aluno *ptr_aluno;
    ptr_aluno = &aluno; //& comercial é sempre o endereço de alguma coisa;

    cout << "Aluno: " << ptr_aluno->nome << endl;
    cout << "Universidade: " << ptr_aluno->universidade.nome << endl;

return 0;
}