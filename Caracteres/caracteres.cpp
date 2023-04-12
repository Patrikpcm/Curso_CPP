#include <iostream>

int main(){
    char c1 = 'a';
    char c2 = 'b';

    //essa soma retorna 195 pois é a soma da representação decimal dos caracteres 'a'(97) e 'b'(98)
    std::cout << "Somando 2 caracteres: a + b" << std::endl;
    std::cout << c1 + c2 << std::endl; 

    //quando imprimimos caracteres especiais à linguagem deve-se utilizar barra invertida "\" antes do caractere
    std::cout << "Imprimindo aspas simples \" \' \"" << std::endl;
    std::cout << '\'' << std::endl; 

    return (1);
}