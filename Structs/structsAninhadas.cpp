/*
Estruturas aninhadas nada mais são do que estruturas dentro de outras.
Ex:

if(int v){
    if (v == par){
    }
}

Nesse exemplo temos ifs aninhados.
*/

#include <iostream>
#include <string.h>
using namespace std;

typedef struct Curso{
    char nome[50];
    double preco;
} t_curso;

typedef struct Estudante{
    char nome[50];
    Curso curso; //membro é uma struct aninhada.
}t_estudante;

int main(){
    
    t_estudante e;

    strcpy(e.nome, "Patrik");
    strcpy(e.curso.nome, "C++"); //exemplo de acesso ao dados da struct aninhada
    e.curso.preco = 25;

    cout << "Nome: " << e.nome << endl;
    cout << "Curso : " << e.curso.nome << endl;
    cout << "Preço do curso: " << e.curso.preco << endl;

return 0;
}