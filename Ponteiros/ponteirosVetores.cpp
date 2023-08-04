#include <iostream>

using namespace std;

int foo(int vet[]){
    vet[0] = 100;
}

int main(){

    /*
    A função new aloca 10 espaços no vetor usando ponteiros.
    Essa função é equivalente a função malloc(sizeof(*)) da linguagem C.
    */
    cout << "Vetor vet" << endl;
    int *vet = new int[10];  //em C ficaria: int *vet = malloc(sizeof(*vet));
    //adicionando os dados ao vetor através do endereço do vetor na memória (ponteiro)
    *(vet + 0) = 10;
    *(vet + 1) = 20;
    *(vet + 2) = 30;

    //modo padrão de acesso aos dados do vetor
    cout << "|" << vet[0];
    cout << "|" << vet[1];
    cout << "|" << vet[2] << "|" << endl << endl;

    //acessando os dados através do endereço do vetor
    cout << "|" << *(vet);
    cout << "|" << *(vet + 1);
    cout << "|" << *(vet + 2) << "|" << endl << endl;

    //exemplos de como o mesmo funciona para o modo padrão
    cout << "Vetor aux" << endl;
    int aux[10];
    aux[0] = 10;
    aux[1] = 20;
    aux[2] = 30;

    cout << "|" << aux[0];
    cout << "|" << aux[1];
    cout << "|" << aux[2] << "|" << endl << endl;

    //acessando os dados através do endereço de memória do vetor aux
    cout << "|" << *(aux);
    cout << "|" << *(aux + 1);
    cout << "|" << *(aux + 2) << "|" << endl << endl;

    /*
    Ao contrário do que acontece com as variáveis, quando se passa 
    um vetor como variável de uma função auxiliar, vc esta passando
    o ponteiro para o primeiro elemento do vetor, e isso funciona 
    como uma passagem por referência e não como valor.
    Logo, as modificações realizadas na função refletem diretamente
    nos valores do vetor. 
    */
    foo(aux);
    cout << "Valor modificado pela função Foo(): " << aux[0] << endl;

    return 0;
}