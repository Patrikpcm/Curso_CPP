/*
A Classe deque é a implementação de uma fila de duas pontas. 
Ela pode ser usada pra implementar filas FIFO ou FILO.
*/
#include <iostream>
#include <deque> //classe desse exemplo
using namespace std;


int main(){

    deque<int> fila;

    cout << "Fila antes de inserir os elemetos: ";
    if(fila.empty())
        cout << "Fila vazia!\n";
    else
        cout << "Fila NÃO vazia! \n";

    //inserindo elementos no final na fila
    fila.push_back(10);
    fila.push_back(20);
    //inserindo no início da fila
    fila.push_front(30);
    //fila deve ser: 30, 10, 20

    cout << "Depois de inserir elementos: ";
    if(fila.empty())
        cout << "Fila vazia!\n";
    else
        cout << "Fila NÃO vazia! \n";

    cout << "Mostrando os elementos da fila: ";
    deque<int>::iterator it = fila.begin();
    while(it != fila.end())
        cout << *it++ << " ";
    cout << "\n";

    //limpando fila
    cout << "depois de limpar a fila: ";
    fila.clear(); //função para limpar a fila
    if(fila.empty())
        cout << "Fila vazia!\n";
    else
        cout << "Fila NÃO vazia! \n";

    //inserindo elementos no final na fila
    fila.push_back(100);
    fila.push_back(200);
    //inserindo no início da fila
    fila.push_front(300);
    //fila deve ser: 300, 100, 200

    //removendo o segundo elemento
    fila.erase(fila.begin() + 1); //removendo com a função erase
    cout << "Mostrando a fila depois da remoção do segundo elemento: ";
    it = fila.begin();
    while(it != fila.end())
        cout << *it++ << " ";
    cout << "\n";

    cout << "Elemento da frente: " << fila.front() << endl;
    cout << "Elemento de trás: " << fila.back() << endl;

    //inserindo elemento na segunda posição da fila
    it = fila.begin() + 1;
    fila.insert(it, 303);

    cout << "Mostrando fila depois de inserir elemento na segunda posição: ";
    it = fila.begin();
    while(it != fila.end())
        cout << *it++ << " ";
    cout << "\n"; 

    cout << "Removendo elemento do início e depois do final da fila." << endl;
    //remover do inicio
    fila.pop_front();
    //remover do final
    fila.pop_back();

    cout << "Tamanho da fila depois da remoção dos elementos: " << fila.size() << endl;



return 0;
}

