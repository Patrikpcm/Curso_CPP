#include <iostream>

//criando a função booleana de verificação de paridade de um número
bool parImpar(int num){
    if (num % 2 == 0)
        return true;
    else
        return false;
}

//função mensagem. Escreve uma mensagem na tela 
void mensagem(){
    std::cout << "Definindo a paridade de um número" << std::endl;
}

int main (){
    int n;
    mensagem();
    std::cout << "Digite um número pra verificar se é Par ou Impar: ";
    std::cin >> n;

    if (parImpar(n))
        std::cout << "O número é Par" << std::endl;
    else
        std::cout << "O número é Impar" << std::endl;

return 0;
}
