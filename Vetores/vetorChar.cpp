#include <iostream>
#include <string.h>
/*
Algumas funções da biblioteca string.h são isupper(), isalpha(), isdigit(), islower() entre outras.
Nenhuma delas foi usada nesse trecho de código, mas podem ser utilizadas para verificar os caracteres
de um texto, se são números, letras, maiúscula, minúscula, entre outras.
*/

using namespace std;

int main(){

    char nome[] = {'P','a','t','r','i','k','\0'}; //Adicionamento meu nome a um vetor de 6 posições(string)
    cout << nome << endl;
    
    char sobrenome[] = "Gogola";
    int i = 0;

    //'\0' é a representação de NULL
    while (sobrenome[i] != '\0'){
        cout << sobrenome[i];
        i++;
    }
    
    cout << endl;
    cout << sobrenome[4] << endl;
    return 0;
}