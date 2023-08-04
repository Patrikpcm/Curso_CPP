#include <iostream>

using namespace std;

int foo(int *n){
    int x = *n;
    x++;
    *n = x;
    
}

int main(){
    int var = 10;
    int *pvar; 
    
    /*
    Deve-se sempre inicializar o ponteiro antes de usa-lo.
    O ponteiro deve apontar para uma variável de mesmo tipo
    */
    pvar = &var; //& comercial aponta para o endereço da variável
    cout << *pvar << endl;
    
    *pvar = 20;
    cout << "Ponteiro: " << *pvar << "| Variável: " << var << endl;
    
    //passagem por referência para uma função
    foo(&var);
    cout << "Passagem por referência da variável: " << var << endl;

    //passagem do ponteiro para uma variável
    foo(pvar);
    cout << "Passagem por referência do ponteiro: " << var << endl;

    return 0;
}