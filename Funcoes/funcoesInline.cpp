#include <iostream>
using namespace std;

/*
As funções inline tem seu trecho de código copiado para a posição de chamada da mesma, pelo compilador.
Isso aumenta o desempenho do programa mas também aumenta o espaço em memória.
*/

inline void foo(){
    cout << "Aprendendo C++" << endl;
}

int main(){
    foo();
    return 0;
}