#include <iostream>

using namespace std;

void mensagem(int n){
    cout << "numero: " << n << endl;
}

void mensagem(char c){
    cout << "caractere: " << c << endl;
}

int main(){

    //estou diferenciando as funções de mesmo nome através do tipo e quantidade de parâmetro(s) passado(s).
    mensagem(10);
    mensagem('c');

    return 0;
}