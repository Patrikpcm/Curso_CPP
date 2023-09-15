#include <iostream>
using namespace std;

/*
A variável estática mantém seu valor mesmo após a execução da função
*/
int geraID(){
    //int ID = 0;
    static int ID = 0;//rode este código com e sem static no valor de ID e veja o resultado
    return ID++;
}

int main(){
    string nome;

    while (true){
        cout << "Digite o nome da pessoa: ";
        cin >> nome;
        cout << "ID gerado para o usuário " << nome << ": " << geraID() << endl;
    }
    return 0;
}