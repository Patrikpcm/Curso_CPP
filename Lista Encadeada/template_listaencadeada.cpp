#include <iostream>
#include "lista.h"

int main(){

    Lista<int> l;

    if(l.vazia())
        cout << "Lista Vazia" << endl;
    else
        cout << "Lista NÃO VAZIA" << endl;

    l.mostrar();

    if(l.existe(10))
        cout << "\nO Elemento 10 existe na lista" << endl;
    else
        cout << "O Elemento 10 NÃO existe na lista" << endl;
    
    l.inserir_final(10);
    l.inserir_final(20);
    l.inserir_final(30);
    l.inserir_final(40);
    l.inserir_inicio(50);

    l.mostrar();

    if(l.existe(10))
        cout << "\nO Elemento 10 existe na lista" << endl;
    else
        cout << "O Elemento 10 NÃO existe na lista" << endl;

    l.remover();
    l.mostrar();

    cout << "Tamanho da lista: " << l.tamanho() << endl;

    //#####LISTA DE STRINGS #####

    Lista<string> s;

    if(s.vazia())
        cout << "Lista Vazia" << endl;
    else
        cout << "Lista NÃO VAZIA" << endl;

    s.mostrar();

    if(s.existe("C"))
        cout << "\nO Elemento 10 existe na lista" << endl;
    else
        cout << "O Elemento 10 NÃO existe na lista" << endl;
    
    s.inserir_final("C");
    s.inserir_final("C++");
    s.inserir_final("Java");
    s.inserir_final("PHP");
    s.inserir_inicio("Python");

    s.mostrar();

    if(s.existe("C++"))
        cout << "\nO Elemento C++ existe na lista" << endl;
    else
        cout << "O Elemento 10 NÃO existe na lista" << endl;

    s.remover();
    s.mostrar();

    cout << "Tamanho da lista: " << s.tamanho() << endl;

return 0;
}