#include <iostream>

using namespace std;

class Pai1{
public:
    void foo(){
        cout << "Oi, sou o Pai1." << endl;
    }
};

class Pai2{
public:
    void foo(){
        cout << "Oi, sou o Pai2." << endl;
    }
};

//Classe filha herdando multiplamente os atributos das classes Pai1 e Pai2
class Filha : public Pai1, public Pai2{ 

};

int main(){

    Filha f;
    f.Pai1::foo(); //operador de escopo para o código saber qual função foo chamar.
    f.Pai2::foo();

    return 0;
}