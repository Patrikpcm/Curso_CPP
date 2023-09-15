#include <iostream>
using namespace std;

extern int var = 10;
/*
Quando declaramos uma função em C, um extern já esta presente por padrão.
Em funções, como por exemplo a abaixo, seria redundante declara-la da seguinte forma:
    extern void print_var(){...}

Entretanto, isso não é verdadeiro para variáveis. Quando declaramos as variáveis como
extern, nos procuramos ampliar a visibilidade da varíavel e/ou função.
*/
extern void print_var(){//extern é uma declaração redundante nesse caso, o compilador já identifica a função como extern.
    cout << var << endl;
}

int main(){

    print_var();

    return 0;
}