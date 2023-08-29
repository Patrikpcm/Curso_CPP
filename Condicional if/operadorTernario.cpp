#include <iostream>
using namespace std;

/*
Operação Ternária é uma operação com 3 operandos:

<condição> ? <operação 1> : <operação 2>;

*/

int main(){

    int num = 10;

    /*
    if(num > 10)
        cout << "num maior que 10" << endl;
    else
        cout <<"num menor que 10" << endl;
    */

    num > 10 ? cout << "Maior!" << endl : cout << "Menor/igual" << endl; 


    return 0;
}