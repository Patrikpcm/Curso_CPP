#include <iostream>

using namespace std;

class Conta{
public:
    int numero;
    double saldo;

    double depositar(double valor){
        if (valor > 0){
            saldo += valor;
        }
        return saldo;
    }
    double sacar(double valor){
        if (saldo >= valor){
            saldo -= valor;
        }
        return saldo;
    }

    double getSaldo(){
        return saldo;
    }
};

void foo(Conta *c){ //deve-se colocar ponteiro para o valor ser modificado por referência.
    c->depositar(50);
}

int main(){

    Conta c;

    c.numero = 1;
    c.saldo = 100.70;

    cout << "Saldo: " << c.saldo << endl;
    cout << "Saldo depois do depósito: " << c.depositar(-60) << endl; //tentando depositar valor negativo
    cout << "Saldo depois do saque: " << c.sacar(10) << endl; //saquei valor que possuo

    foo(&c); //passando o endereço por referência

    cout << "Saldo: " << c.getSaldo() << endl;
    return 0;
}