#include <iostream>
using namespace std;

class Carro{
private:
    int ano;
public:
    //Essa mesma técnica pode ser usada para construtores.
    Carro(int ano = 1900){
        this->ano = ano;
    }
    int getAno(){
        return ano;
    }
    void setAno(int ano){
        this->ano = ano;
    }
};

/*
Se atribuir um valor na chamada da função, o parâmetro passa a ser opcional não
causando erro de compilação.

Observe que a variável abaixo possui um valor padrão que será substituído caso 
um valor seja passado na chamada da função
*/
int quad(int num = 1){
    return num * num;
}

int main(){

    int num = 3;

    cout << "Quadrado: " << quad() << endl; //chamando a função sem valor atribuído
    cout << "Quadrado: " << quad(num) << endl;

    Carro c1(2023);
    Carro c2;

    cout << "Carro 1: " << c1.getAno() << endl;
    cout << "Carro 2: " << c2.getAno() << endl; //construtor sem valor atribuído
    
    return 0;
}