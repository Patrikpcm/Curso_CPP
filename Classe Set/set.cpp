/*
A Classe set provê funções para a estrutura de Conjunto (Estrutura sem elementos repetidos)
*/
#include <iostream>
#include <set>
using namespace std;


int main(){
    
    int vet[] = {10, 20, 10, 30, 40};
    set<int> myset(vet, vet+5);
    set<int>::iterator it = myset.begin();

    while(it != myset.end()){
        cout << *it << " ";
        it++;
    }
    cout << endl;

    if(myset.empty())
        cout << "Conjunto vazio!\n";
    else{
        cout << "Conjunto NÃO vazio!\n";
        cout << "Número de elementos no conjunto: " << myset.size() << endl;
    }

    //apagando o primeiro elemento
    cout << "Apagando o primeiro elemento!\n";
    it = myset.begin();
    myset.erase(it);

    it = myset.begin();
    while(it != myset.end()){
        cout << *it << " ";
        it++;
    }
    cout << endl;

    //encontrando elemento
    it =  myset.find(30);
    if(*it == 30)
        cout << "Elemento 30 existe no conjunto!\n";
    else   
        cout << "Elemento 30 NAO existe no conjunto!\n";

    //apagando o conjunto
    cout << "Número de elementos no conjunto: " << myset.size() << endl;
    cout << "Apagando elementos...\n";
    myset.clear();
    cout << "Número de elementos no conjunto: " << myset.size() << endl;

    
return 0;
}
