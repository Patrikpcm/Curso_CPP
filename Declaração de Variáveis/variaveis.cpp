#include <iostream>

int main(){
    char letra = 'L';
    int inteiro = -1;
    float racional_32bits = 1.3033333; //número racional com representatividade de 32 bits
    double racional_64bits= 2.40444444444444444444444; //número racional com representatividade de 64 bits, é mais preciso.
    unsigned int inteiro_sem_negativo = (3); //quando utilizado unsigned, vc não tera capacidade de representar sinais negativos na sua variável
    
    std::cout << inteiro << std::endl;
    std::cout << std::fixed;
    std::cout.precision(10);
  //  std::cout << setiosflags (ios::fixed) << f << std::endl;
    std::cout << racional_32bits << std::endl;
    std::cout.precision(15);
    std::cout << racional_64bits << std::endl;
    std::cout << inteiro_sem_negativo << std::endl;
    std::cout << letra << std::endl;
    
    return(1);
}