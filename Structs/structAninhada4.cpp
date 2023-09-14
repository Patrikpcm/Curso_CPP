#include <iostream>
#include "structaninhada.h"
void exibirAluno(t_aluno &aluno);
void construirAluno(t_aluno &aluno, string nome, string universidade);

int main(){

    t_aluno aluno;
    t_aluno *ptr_aluno; //ponteiro para aluno

    ptr_aluno = &aluno;

    ptr_aluno->setNome("Patrik Luiz Gogola");
    ptr_aluno->setUniversidade("UFPR");

    cout << "Aluno: " << ptr_aluno->obterNome() << endl;
    cout << "Universidade: " << ptr_aluno->obterUniversidade() << endl;

    t_aluno aluno2;
    construirAluno(aluno2, "Bill Gates", "Harvard");
    exibirAluno(aluno2);

return 0;
}

void construirAluno(t_aluno &aluno, string nome, string universidade){

    aluno.setNome(nome);
    aluno.setUniversidade(universidade);
}

void exibirAluno(t_aluno &aluno){
    cout << "Aluno: " << aluno.obterNome() << endl;
    cout << "Universidade: " << aluno.obterUniversidade() << endl;
}