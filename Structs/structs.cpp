#include <iostream>
#include <string.h>

using namespace std;
/*
-Definição de uma struct
-Vamos definir uma struct que descreve uma pessoa
-O typedef serve para definir o nome da struct como se fosse o namespace.
dessa forma eu posso criar uma struct chamando apenas "st_pessoa p;"
Caso contrário, se não usasse o typedef, eu deveria criar a variável
chamando "struct pessoa p;"
*/
typedef struct pessoa{
   char nome[100];
   int idade;
   int ano;
   char cpf[20];
}st_pessoa;


int main(){
    
    //struct pessoa p; //Teria que ser invocado o tipo dessa forma se não fosse utilizado typedef
    st_pessoa p;

    strcpy(p.nome, "Patrik");
    p.idade = 33;
    p.ano = 1989;
    strcpy(p.cpf, "000.000.000-00");
    cout << "Nome: " << p.nome << endl;
    cout << "Idade: " << p.idade << endl;
    cout << "Ano: " << p.ano << endl;
    cout << "CPF: " << p.cpf << "\n" << endl;

    //posso criar mais de uma pessoa
    st_pessoa p2[2];
    strcpy(p2[0].nome, "Luiz");
    p2[0].idade = 50;
    p2[0].ano = 1971;
    strcpy(p2[0].cpf,"111.111.111-11"); 
    cout << "Nome: " << p2[0].nome << endl;
    cout << "Idade: " << p2[0].idade << endl;
    cout << "Ano: " << p2[0].ano << endl;
    cout << "CPF: " << p2[0].cpf << "\n" << endl;
    
    //também posso usar ponteiros, mas dessa forma devo acessar as informações usando "->" em vez de "."

    st_pessoa *p3 = new(st_pessoa);
    strcpy(p3->nome,"Josane");
    p3->idade = 45;
    p3->ano = 1975;
    strcpy(p3->cpf,"222.222.222-22");
    cout << "Nome: " << p3->nome << endl;
    cout << "Idade: " << p3->idade << endl;
    cout << "Ano: " << p3->ano << endl;
    cout << "CPF: " << p3->cpf << endl;

return 0;

}