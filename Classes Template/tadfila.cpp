//TAD - Tipo Abstrato de Dados
//vamos implentar um TAD para uma fila
#include <iostream>
#include "tadfila.h"

int main(){

    Fila<double> f1;

    cout << "ANTES de inserir elementos..." << endl;

    if (f1.vazia())
        cout << "Fila vazia!" << endl;
    else   
        cout << "Fila NÃO vazia!" << endl;

    try{
        double e = f1.remover();
        cout << "Removido elemento: " << e << endl;
    }
    catch(const char *msg){
        cerr << "ERRO: " << msg << endl;
    }

    //Inserindo elemenos na fila
    f1.inserir(5.24);
    f1.inserir(9.23);
    f1.inserir(1.14);

    cout << "DEPOIS de inserir elementos..." << endl;

    if (f1.vazia())
        cout << "Fila vazia!" << endl;
    else   
        cout << "Fila NÃO vazia!" << endl;

    try{
        cout << "Elemento da frente: " << f1.frente() << endl;
    }
    catch(const char *msg){
        cerr << "Erro: " << msg << endl;
    }

    try{
        cout << "Elemento do final: " << f1.final() << endl;
    }
    catch(const char *msg){
        cerr << "Erro: " << msg << endl;
    }

    cout << "Removendo elemento da fila..." << endl;

    try{
        double e = f1.remover();
        cout << "Removido o elemento: " << e << endl;
    }
    catch(const char *msg){
        cerr << "Erro: " << msg << endl;
    }

    try{
        cout << "Elemento da frente: " << f1.frente() << endl;
    }
    catch(const char *msg){
        cerr << "Erro: " << msg << endl;
    }

    //###################### FILA DE STRING ######################

    Fila<string> f2;
    f2.inserir("C");
    f2.inserir("C++");
    f2.inserir("Haskel");
    f2.inserir("Python");
    f2.inserir("Java");

    cout << "\nFILA DE STRINGS...\n" << endl;

    if (f2.vazia())
        cout << "Fila vazia!" << endl;
    else   
        cout << "Fila NÃO vazia!" << endl;

    try{
        cout << "Elemento da frente: " << f2.frente() << endl;
    }
    catch(const char *msg){
        cerr << "Erro: " << msg << endl;
    }

    try{
        cout << "Elemento do final: " << f2.final() << endl;
    }
    catch(const char *msg){
        cerr << "Erro: " << msg << endl;
    }

    cout << "Removendo elemento da fila..." << endl;

    try{
        string s = f2.remover();
        cout << "Removido o elemento: " << s << endl;
    }
    catch(const char *msg){
        cerr << "Erro: " << msg << endl;
    }

    try{
        cout << "Elemento da frente: " << f2.frente() << endl;
    }
    catch(const char *msg){
        cerr << "Erro: " << msg << endl;
    }

return 0;
}