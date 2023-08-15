#include <iostream>

using namespace std;
/*
argc - argument counter: conta a quantidade de argumentos, incluindo o nome do próprio programa.
argv - Array de ponteiros que aponta para os arguementos
*/

int main(int argc, char *argv[]){ 

    cout << "argc: " << argc << endl;
    cout << "argv:[0]: " << argv[0] << endl;

    //exemplo de como o argv é enxergado
    int n1 = 10, n2 = 20, n3 = 30; 
    int *parray[3] = {&n1,&n2,&n3}; //são 3 ponteiros, um para cada elemento da lista.

    cout << "ponteiro [0] para o elemento [0]: " << *parray[1] << endl;
    cout << "ponteiro [1] para o elemento [1]: " << *parray[1] << endl;
    cout << "ponteiro [2] para o elemento [2]: " <<  *parray[2] << endl;

    return 0;
}