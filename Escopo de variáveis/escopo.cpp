#include <iostream>

using namespace std;

int var_global = 12; //variável global

void foo (){
    int num = 10; //variável local apenas da fujnção foo;
    static int num_static = 1; //variável estática ao contrário do que se pensa retem o valor de uma chamda da função para outra;
    cout << "Variável local: " << num << endl;
    cout << "Variável global: " << var_global << endl;
    cout << "Variável estática: " << num_static << endl;
    num_static++;
    cout << "Variável estática somada +1: " << num_static << endl;
}

int main(){
    foo();
    foo();
    foo();
    return 0;
}