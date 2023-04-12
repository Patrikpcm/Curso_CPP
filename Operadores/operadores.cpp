#include <iostream>

int main(){
    int n1, n2, resultado;
    float res_flutuante;
    n1 = 3;
    n2 = 5;

    std::cout << "Soma" << std::endl;
    resultado = (n1 + n2);
    std::cout << resultado << std::endl;

    std::cout << "Subtração" << std::endl;
    resultado = (n1 - n2);
    std::cout << resultado << std::endl;

    std::cout << "Divisão" << std::endl;
    res_flutuante = ((float)n1 / n2);
    std::cout << res_flutuante << std::endl;

    std::cout << "Multiplicação" << std::endl;
    resultado = (n1 * n2);
    std::cout << resultado << std::endl;

    std::cout << "Resto da divisão" << std::endl;
    resultado = (n2 % n1);
    std::cout << resultado << std::endl;

    return (0);
}