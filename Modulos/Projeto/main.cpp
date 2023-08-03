#include <iostream>
//#include "mymath.cpp" //funciona
#include "mymath.hpp" //Arquivo de módulo criado com as funções matemáticas usadas no main

using namespace std;

int main()
{
    int n;
    cout << "Digite um número para fatorar: ";
    cin >> n;
    cout << "Fatorial = " << fatorial(n) << endl;

    cout << "Digite o tamanho do lado de um quadrado para calcular a área: ";   
    cin >> n;
    cout << "Área do quadrado= " << area_quadrado(n) << endl;
    
    cout << "Digite o tamanho do lado e da base de um triangulo para calcular sua área: ";
    int m;
    cin >> n;
    cin >> m;
    cout << "Área do triângulo= " << area_triangulo(n, m) << endl;
    return 0;
}