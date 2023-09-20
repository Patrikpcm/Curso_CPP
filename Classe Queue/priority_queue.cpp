/*
A Priority Queue é uma diferenciação da classe queue que implementa uma fila de prioridades.
*/

#include <iostream>
#include <queue>
using namespace std;

int main(){
    
    priority_queue<int> pq; //implementa uma fila decrescente

    pq.push(20);
    pq.push(70);
    pq.push(25);
    pq.push(100);

    cout << "Elemento de maior valor na fila: " << pq.top() << endl;

    if (pq.empty())
        cout << "Fila vazia!\n";
    else{
        cout << "Fila NÃO vazia!\n";
        cout << "Número de elementos na fila: " << pq.size() << endl;
    }

    cout << "Retirando os elementos em ordem decrescente: ";
    while(!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;

    if (pq.empty())
        cout << "Fila vazia!\n";
    else{
        cout << "Fila NÃO vazia!\n";
        cout << "Número de elementos na fila: " << pq.size() << endl;
    }

    //invertendo a prioridade da fila
    priority_queue<int, vector <int>, greater<int> > pq2;

    pq2.push(20);
    pq2.push(70);
    pq2.push(25);
    pq2.push(100);

    cout << "Retirando os elementos em ordem crescente: ";
    while(!pq2.empty()){
        cout << pq2.top() << " ";
        pq2.pop();
    }
    cout << endl;

return 0;
}
