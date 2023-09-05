#include <iostream>
#include <list>

using namespace std;
/*
A Classe list cria uma lista duplamente encadeada utilizando ponteiros
*/

bool par(const int &n){
    return (n % 2 ==0);
}

bool comparar_tamanho(const string &s1, const string &s2){
    //Se o tamanho da primeira string é menor, deve vir antes, então retorna true
    if(s1.length() < s2.length())
        return true;
    //caso contrário, retorna false
    return false;
}

int main(){
    list<int> l1; //lista de inteiros vazia
    list<int> l2(3,10); //lista com 3 elementos 10
    list<int>::iterator it; //iterador para a lista

    l1.push_back(10); //l1: 10
    l1.push_front(20);//l1: 20,10
    l1.push_back(30); //l1: 20,10,30

    cout << "Mostrando os elementos de L1:" << endl;
    //Note no For abaixo que não se pode utilizar "it < l1.end()" porque a lista não é contínua como na classe vetor
    for(it = l1.begin(); it != l1.end(); it++) 
        cout << *it << endl;

    cout << "\nMostrando os elementos de L2:" << endl;
    for(it = l2.begin(); it != l2.end(); it++) 
        cout << *it << endl;

    //Acessando o primeiro e último elemento em L1 - Front e back
    cout << "\nPrimeiro elemento de l1: " << l1.front() << endl;
    cout << "\nÚltimo elemento de l1: " << l1.back() << endl;
    //Descobrindo o tamanho da lista
    cout << "\nTamanho de L1: " << l1.size() << endl; //L1(3): 20, 10, 30
    //Removendo o primeiro elemento de L1
    l1.pop_front(); //remove o 10
    //removendo o último elemento de L1
    l1.pop_back(); //remove o 30
    //Mostrando a lista L1
    cout << "Mostrando os elementos de L1:" << endl;
    for(it = l1.begin(); it != l1.end(); it++) 
        cout << *it << endl;
        
    //Removendo todos os elementos de L2
    while(!l2.empty())
        l2.pop_front();
    
    //mostrando quantidade de elementos de L2
    cout << "\nNovo tamanho de L2: " << l2.size() << endl;

    //Atribuindo elementos a L2 - Função assign
    int vet[] = {1,2,3,4};
    l2.assign(vet, vet + 4);

    cout <<"\nMostrando novos elementos de L2: " << endl;
    for(it = l2.begin(); it != l2.end(); it++) 
        cout << *it << endl;
    //Adicionando mais um elemento a L2
    l2.insert(l2.end(), 100); //não pode fazer l2.begin()+1, por exemplo.
    cout <<"\nMostrando novamente elementos de L2: " << endl;
    for(it = l2.begin(); it != l2.end(); it++) 
        cout << *it << endl;

    //inserindo elemento na segunda posição da lista
    it = l2.begin();
    it++;
    l2.insert(it,200);

    cout <<"\nMostrando novamente elementos de L2: " << endl;
    for(it = l2.begin(); it != l2.end(); it++) 
        cout << *it << endl;

    //inserindo varios elementos de uma vez
    l2.insert(l2.begin(), 3, 17); //inserindo no inicio, 3x, o elemento 17
    cout <<"\nMostrando novamente elementos de L2: " << endl;
    for(it = l2.begin(); it != l2.end(); it++) 
        cout << *it << endl;
    
    //apagando as a primeira posição
    l2.erase(l2.begin());
    cout <<"\nMostrando novamente elementos de L2: " << endl;
    for(it = l2.begin(); it != l2.end(); it++) 
        cout << *it << endl;

    //removendo as 2 primeiras posições de uma vez
    it = l2.begin();
    it++;
    it++; //interando até a segunda posição
    l2.erase(l2.begin(), it);//apagando do começo até a posição do iterador (2)
    cout <<"\nMostrando novamente elementos de L2: " << endl;
    for(it = l2.begin(); it != l2.end(); it++) 
        cout << *it << endl;

    //removendo todos os elementos da lista
    l2.clear();
    cout << "\nTamanho de L2: " << l2.size() << endl;
    
    l1.insert(l1.end(), 3, 23);
    //função splice - transfere elementos de uma lista para outra
    cout << "\nTamanho de L1: " << l1.size() << endl;

    cout <<"\nMostrando elementos de L1: " << endl;
    for(it = l1.begin(); it != l1.end(); it++) 
        cout << *it << endl;
    cout <<"\nMostrando elementos de L2: " << endl;
    for(it = l2.begin(); it != l2.end(); it++) 
        cout << *it << endl;

    cout << "\nComando splice - Transferindo elementos de L1 para L2" << endl;
    l2.splice(l2.begin(), l1); //transferindo os elementos de L1 para L2
  
    cout <<"\nMostrando elementos de L1: " << endl;
    for(it = l1.begin(); it != l1.end(); it++) 
        cout << *it << endl;
    cout <<"\nMostrando elementos de L2: " << endl;
    for(it = l2.begin(); it != l2.end(); it++) 
        cout << *it << endl;

    //removendo elementos específicos da lista
    cout << "\nRemovendo elementos 23 da lista com l2.remove(23)" << endl;
    l2.remove(23);
    cout <<"\nMostrando elementos de L2: " << endl;
    for(it = l2.begin(); it != l2.end(); it++) 
        cout << *it << endl;

    //Removendo elementos se ocorrer condição determinada
    int vet2[] = {6,8,10,5,20,21,22,23};
    l1.assign(vet2, vet2+8);
    cout <<"\nL1 Antes da Remoção: " << endl;
    for(it = l1.begin(); it != l1.end(); it++) 
        cout << *it << endl;
    //removendo os elementos pares
    l1.remove_if(par);
    cout <<"\nL1 Depois da remoção dos elementos Pares: " << endl;
    for(it = l1.begin(); it != l1.end(); it++) 
        cout << *it << endl;

    l1.push_back(3);
    l1.push_back(310);
    l1.push_back(4);
    l1.push_back(15);
    l1.push_back(33);
    l1.push_back(99);

    cout <<"\nMostrando elementos de L1 antes da ordenação: " << endl;
    for(it = l1.begin(); it != l1.end(); it++) 
        cout << *it << endl;
    
    l1.sort();//ordenando com sort()

    cout <<"\nMostrando elementos de L1 DEPOIS da ordenação: " << endl;
    for(it = l1.begin(); it != l1.end(); it++) 
        cout << *it << endl;

    //Ordenando strings
    list<string> l3;
    list<string>::iterator it2;
    l3.push_back("C++");
    l3.push_back("Python");
    l3.push_back("C");
    l3.push_back("Ruby");
    l3.push_back("Haskell");
    l3.push_back("PHP");
    l3.push_back("Java");

    cout <<"\nOrdenando strings - L3 ANTES da ordenação: " << endl;
    for(it2 = l3.begin(); it2 != l3.end(); it2++) 
        cout << *it2 << endl;

    l3.sort();//ordenando as strings

    cout <<"\nOrdenando strings - L3 DEPOIS da ordenação: " << endl;
    for(it2 = l3.begin(); it2 != l3.end(); it2++) 
        cout << *it2 << endl;    

    //ordenando as strings pelo tamanho da string
    l3.sort(comparar_tamanho);
    cout <<"\nStrings ordenadas por tamanho: " << endl;
    for(it2 = l3.begin(); it2 != l3.end(); it2++) 
        cout << *it2 << " - Tamanho: " << (*it2).length() << endl;  

return 0;
}