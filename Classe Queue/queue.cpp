/*
A classe Queue implementa uma estrutura de fila FIFO.
*/

#include <iostream>
#include <queue>
using namespace std;

int main(){
    
    queue<int> fila;

    fila.push(10);
    fila.push(20);
    fila.push(30);
    fila.push(40);
    //fila: 10, 20, 30, 40

    cout << "Último elemento da fila: " << fila.back() << endl;
    cout << "Primeiro elemento da fila: " << fila.front() << endl;

    if (fila.empty())
        cout << "Fila vazia!\n";
    else {
        cout << "Fila NÃO vazia!\n";
        cout << "Tamanho da fila: " << fila.size() << endl;
    }

    cout << "Retirando todos os elementos da fila: ";
    while(!fila.empty()){
        int e = fila.front();
        cout << e << " ";
        fila.pop(); //Função pop remove os elementos do início da fila
        /*
        A classe queue implementa uma fila FIFO, portanto os elementos são inseridos no inicio
        e removidos apenas do inicio utilizando unica e exclusivamente a função pop().

        Diferente da Classe Deque que implentava uma fila que poderia ter seus elementos removidos do 
        inicio e do final com as funções pop_back() e pop_front().
        */
    }
    cout << endl;

    if (fila.empty()){
        cout << "Fila vazia!\n";
        cout << "Tamanho da fila: " << fila.size() << endl;
    }
    else   
        cout << "Fila NÃO vazia!\n";

return 0;
}
