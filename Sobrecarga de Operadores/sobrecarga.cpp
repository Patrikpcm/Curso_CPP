#include <iostream>
using namespace std;

/*
Vamos realizar uma sobrecarga de utilização de operadores, NESSE EXEMPLO o operador de adição "+"

por exemplo, como realizar a soma de números imaginários?

n1 = 1 + 2i;
n2 = 3 + 4i;
n3 = n1 + n2 ??
O resultado deveria ser: n3 = 4 + 6i
*/
class Complexo{
public:
    int real, img;

    Complexo(int real, int imag){
        this->real = real;
        this->img = imag;
    }
    //exemplo de sobrecarga do operador +
    Complexo operator+(Complexo &c){ //argumento por referência para ser mais rápido e menor
        return Complexo(this->real + c.real, this->img + c.img);
    }
};

int main(){
    Complexo c1(1, 2), c2(3, 4);
    Complexo c3 = c1+c2;
    Complexo c4 = c1.operator+(c2); //executa a mesma tarefa do modo anterior

    cout << "Parte real:" << c3.real << " Parte Img: " << c3.img << "i"<< endl;
    cout << "Parte real:" << c4.real << " Parte Img: " << c4.img << "i"<< endl;

    return 0;
}