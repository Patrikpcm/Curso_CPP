/*
A Classe Map armazena os elementos de forma que se tenha uma combinação de uma chave / valor.
Através da chave podemos acessar o valor(conteúdo) associado a uma determinada chave
*/

#include <iostream>
#include <map>
using namespace std;

int main(){
    map<int, string> mapa = 
    {
        {1, "Pedro"},
        {2, "João"},
        {3, "Lucio"}
    };

    cout << "Mostrando elementos: " << endl;
    cout << mapa[1] << endl;
    cout << mapa[2] << endl;
    cout << mapa[3] << endl;

    mapa.at(1) = "Marilda";

    cout << "mudando valor da posição 1: " << mapa[1] << endl;

    //limpando elementos do mapa
    mapa.clear();

    if (mapa.empty())
        cout << "Mapa vazio!" << endl;
    else    
        cout << "Mapa NÃO VAZIO!" << endl;

    if (mapa.count(4) > 0)
        cout << "4 é elemento do mapa!" << endl;
    else
        cout << "4 NÃO é elemento do mapa!" << endl;

    cout << "Mapa depois de inserir um elemento com ID 4: ";
    mapa.insert({1,"João"});
    mapa.insert({2,"Castilho"});
    mapa.insert({3,"Pedro"});
    mapa.insert({4,"Bisteca"});
    if (mapa.count(4) > 0)
        cout << "4 é elemento do mapa!" << endl;
    else
        cout << "4 NÃO é elemento do mapa!" << endl;

    //testando se existe um ID 2 no mapa.
    if (mapa.count(5) > 0)
        cout << "5 é elemento do mapa!" << endl;
    else
        cout << "5 NÃO é elemento do mapa!" << endl;

    //Percorrendo mapa utilizando Iterador
    map<int, string>::iterator it;
    for(it = mapa.begin(); it!=mapa.end(); it++)
        //it->first acessa o valor de chave enquanto it->second o valor objeto
        cout << "A chave " << it->first << " => " << it->second << endl;

    //excluindo elemento da posição 2
    it = mapa.find(2);
    mapa.erase(it);

    cout << "\nMapa depois de excluir o elemento da posição 2" << endl;
    for(it = mapa.begin(); it!=mapa.end(); it++)
        //it->first acessa o valor de chave enquanto it->second o valor objeto
        cout << "A chave " << it->first << " => " << it->second << endl;

    //verificando se uma chave existe
    if(mapa.find(2) == mapa.end()) //função find percorre o mapa atrás do índice, se não existe ele retorna mapa.end()
        cout << "Chave 2 NAO existe" << endl;
    else   
        cout << "Chave 2 existe!" << endl;
    
    //outra forma de inserir elemento no mapa
    mapa[6] = "Everaldo";
    for(it = mapa.begin(); it!=mapa.end(); it++)
        cout << "A chave " << it->first << " => " << it->second << endl;

    //Multimap: vários elementos com chaves equivalentes
    multimap<int, string> mm;
    mm.insert({1,"Python 2"});
    mm.insert({1,"Python 3"});
    mm.insert({2,"C"});
    mm.insert({2,"C++"});
    mm.insert({3,"Ruby"});

    multimap<int,string>::iterator itmm = mm.begin();
    while (itmm != mm.end()){
        cout << itmm->first << " => " << itmm->second << endl;
        itmm++;
    }

return 0;
}