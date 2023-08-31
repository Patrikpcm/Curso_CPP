#include <iostream>
using namespace std;
/*
Esse arquivo revisa os conceitos de acesso a membros privados, protegidos, publicos, etc das classes e como
esses membros se comportam, tanto na classe mãe quanto em suas filhas.
*/

class ClasseBase{
private:
    int n;
protected:
    int n1, n2;
public:
    int n3, n4;

    ClasseBase(){
        n = 0;
        n1 = 1;
        n2 = 2;
        n3 = 3;
        n4 = 4;
    }
};

class SubClasse1 : public ClasseBase{
public:
    void foo(){
        cout << "Subclasse1:" << endl;
        //cout << n << endl; //isso já apresenta erro de compilação pelo membro ser privado
        cout << n1 << endl << n2 << endl;
        cout << n3 << endl << n4 << endl;
    }
};

class SubClasse2 : private ClasseBase{
public:
    void foo(){
        cout << "Subclasse1:" << endl;
        //cout << n << endl; 
        cout << n1 << endl << n2 << endl;
        cout << n3 << endl << n4 << endl;
    }
    int getN3(){
        return n3;
    }
};

int main(){
    SubClasse1 sub1;
    SubClasse2 sub2;

    sub1.foo();
    sub2.foo();

    cout << "Classe 1 na Main: " << endl;
   // cout << sub1.n1 << endl << sub1.n2 << endl; //Não acessa, membro protegido da ClasseBase
    cout << sub1.n3 << endl << sub1.n4 << endl;

    cout << "Classe 2 na Main: " << endl;
    /*
    cout << sub2.n3 << endl << sub2.n4 << endl;
    
    Essa chamada não funciona porque os membros, mesmo que publicos, numa subclasse privadamente
    declarada se tornam privados. Portanto essa chamada apresenta falha na compilação.
    Para acessarmos esses membros precisamos de uma função.
    */
   cout << sub2.getN3() << endl;
    
    
    return 0;
}