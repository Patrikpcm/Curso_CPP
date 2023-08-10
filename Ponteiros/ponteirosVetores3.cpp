#include <iostream>

using namespace std;

int main(){

    int array[] = {1,2,3,4,5};
    int *parray = &array[0]; //ponteiro para o primeiro elemento do array
    int **pparray = &parray; //ponteiro para ponteiro

    int i = 0;
    //cout << *parray << endl;
    //Imprimindo o conteudo de um vetor com ponteiro
    while (i < 5){
        cout << *parray << endl;
        parray++;
        i++;
    }

    return 0;
}