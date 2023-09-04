#include <iostream>
#include <vector>
using namespace std;
/*
Classe Vector é uma classe padrão da biblioteca C++ e visa manipular contêiners de sequência
(vetores).
*/

class Ponto{
public:
    int x, y;

    Ponto(int x, int y){
        this->x = x;
        this->y = y;
    }
};


int main(){

    vector<int> vet;//criando classe sem tamanho definido.
    vector<int> v(3);//A classe já inicializa as posições do vetor em 0

    vet.push_back(10);
    vet.push_back(20);
    vet.push_back(30);
    vet.push_back(40);

    cout << "Vetor com valores definidos: " << endl;
    for (unsigned int i = 0; i<vet.size(); i++)
        cout << vet[i] << endl;

    cout << "Vetor com tamanho inicial, mas sem valores atribuídos: " << endl;
    for (unsigned int i = 0; i<v.size(); i++)
        cout << v[i] << endl;

    //função begin aponta para o início do vetor.
    //O Iterador é um objeto que permite analisar um contêiner.
    vector<int>::iterator it = vet.begin();
    cout << "Primeiro elemento do iterador: " << *it << endl;
    cout << "Último elemento: " << *(--vet.end()) << endl;

    for (it = vet.begin(); it < vet.end(); it++){
        cout << *it << endl;
    }

    //Iterador reverso
    cout << "Imprimindo com o iterador reverso: " << endl;
    vector<int>::reverse_iterator rit;
    for(rit = vet.rbegin(); rit<vet.rend(); rit++){
        cout << *rit << endl;
    }

    //verificar se o vetor esta vazio
    vector<int> v2;
    if (v2.empty())
        cout << "Vetor VAZIO!" << endl;
    else
        cout << "Vetor NAO vazio" << endl;
    
    v2.push_back(300);
    
    if (v2.empty())
        cout << "Vetor VAZIO!" << endl;
    else
        cout << "Vetor NAO vazio" << endl;
    
    v2.push_back(400); 
    v2.push_back(500);
    v2.push_back(600);

    //removendo elementos do vetor
    while(!v2.empty()){
        v2.pop_back();//removendo elementos
    }

    if (v2.empty())
        cout << "Vetor VAZIO!" << endl;
    else
        cout << "Vetor NAO vazio" << endl;

    v2.push_back(1);
    v2.push_back(2);
    v2.push_back(3);

    cout <<"Último elemento inserido: " << v2.back() << endl;
    cout <<"Primeiro elemento inserido: " << v2.front() << endl;

    //imprimir uma posição do vetor
    cout <<"Posição [2] do vetor: " << v2.at(1) << endl;

    //inserir um elemento em uma posição do vetor
    cout << "Inserindo elemento 10 na posição [1] do vetor: " << endl;
    it = v2.begin();
    v2.insert(it+1,10);

    for(it = v2.begin(); it<v2.end(); it++)
        cout << *it << endl;

     cout << "Apagando elemento 10 na posição [1] do vetor: " << endl;
    it = v2.begin();
    v2.erase(it+1);
    
    for(it = v2.begin(); it<v2.end(); it++)
        cout << *it << endl;

    //função de troca de dados entre vetores
    vector<char> a(2, 'a');//vetor com 2 posições preenchidas com 'a'
    vector<char> b(3, 'b');//vetor com 3 posições preenchidas com 'b'
    a.swap(b);//trocou valores do vetor

    for(unsigned int i = 0; i< a.size(); i++)
        cout << "a " << a[i] << endl;
    for(unsigned int i = 0; i< b.size(); i++)
        cout << "b " << b[i] << endl;
    
    //vetor com objetos de classe
    cout << "Vetor com objetos de classe" << endl;

    vector<Ponto*> p;
    vector<Ponto*>::iterator itr;

    Ponto *p1 = new Ponto(1,2);
    Ponto *p2 = new Ponto(3,4);

    p.push_back(p1);
    p.push_back(p2);

    for (itr = p.begin(); itr < p.end(); itr++)
        cout << "(" << (*itr)->x << "," <<(*itr)->y << ")" << endl;


return 0;
}