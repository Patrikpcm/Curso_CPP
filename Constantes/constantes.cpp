#include <iostream>

using namespace std;

//Variáveis constantes não podem ter seu conteúdo modificado.

int main(){

    const double PI = 3.141592; //variáveis double tem que ser iniciadas sempre. 

    int vet[] = {1,2,3,4,5};

    const int *p1; // Ponteiro para array de constante int-Pode modificar o ponteiro mas não o inteiro apontado
    int const *p2; // Ponteiro para array de constante int-Pode modificar o ponteiro mas não o inteiro apontado
    int* const p3 = new int[3]; // Ponteiro constante para um array int. Não podemos modificar o ponteiro. Deve ser inicializado.
    const char* const p4 = "Patrik"; //Ponteiro constante apontando para uma variável constante. Nenhum pode ser modificada

    *p3 = 1;
    *(p3 + 1) = 2;
    *(p3 + 2) = 3;

    //Não consigo manipular o ponteiro fazendo p3++, por exemplo.
    cout << "P3: |";
    cout << *p3 << "|";
    cout << *(p3 +1) << "|";
    cout << *(p3 +2) <<"|"<< endl;


    return 0;
}