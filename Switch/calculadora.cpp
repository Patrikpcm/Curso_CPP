#include <iostream>

using namespace std;

int main(){

int num1, num2;
char op; //operação

cout << "Digite o primeiro número: ";
cin >> num1;
cout << "Digite a operação desejada: ";
cin >> op;
cout << "Digite o segundo número: ";
cin >> num2;

switch (op){

    case '+':
        cout << "Resultado: " << (num1+num2) << endl;
        break;
    case '-':
        cout << "Resultado: " << (num1-num2) << endl;
        break;
    case '*':
        cout << "Resultado: " << (num1*num2) << endl;
        break;
    case '/':
        cout << "Resultado: " << (num1/num2) << endl;
        break;
    default:
        break;
}
return 0;
}