#include <iostream>

using namespace std;

int main(){

    /*
    A primeira posição de um vetor é sempre 0.
    Em um vetor de 10 posições, a primeira posição é [0] e a última é [9]
    */
    int vetor[10];

    /*
    Sempre que se trabalha com vetores, é necessário inicializa-lo, caso
    contrário ira imprimir "lixos" que estão alocados nas suas posições de memória
    */    
    for (int i =0; i<10; i++)
        vetor[i]=i;

    // imprimindo as posições do vetor    
    cout << "| ";
    for (int i = 0; i<10; i++)
        cout << vetor[i] << " | ";
    
    cout << endl;
    /*
    Descobrindo o tamanho de um vetor:

    Sizeof retorna o tamanho de um tipo em Bytes (1 Byte = 8 Bits). Um vetor com 100 inteiros (4 bytes)
    tem tamanho 100 * 4 = 400.
    Se fosse um vetor com 5 caracteres do tipo char, a impressão seria 5, pois
    cada char tem tamanho de um byte.
    
    */
    cout << "Tamanho do vetor: " << sizeof(vetor) << endl; 
    return 0;
}