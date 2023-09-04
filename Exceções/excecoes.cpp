#include <iostream>
using namespace std;
/*
palavras reservadas:
try - tentar alguma coisa
catch - pegar alguma exceção
throw - dispensar alguma coisa 
*/

double div(double n1, double n2){

    if(n2 == 0)
        throw "Divisão por zero!\n";
    return (n1 / n2);
}

int fat(int n){ //tentar fazer um fatorial de um número negativo
    if(n<0)
        throw "Número negativo!";

    if (n == 0 || n == 1)
        return 1;

    return n* fat(n-1); //chamada recursiva da função
}

int main(){

    try{
        cout << "Fatorial de 5: " << fat(5) << endl;
        //cout << "Fatorial de -5: " << fat(-5) << endl;
        cout << "10/0: " << div(10.0 , 0.0) << endl;
    }
    catch(const char *e){
        cerr << "Erro: " << e << endl; //exibe a frase com erro lançada por throw
    }
    catch(...){
        cerr << "Erro inesperado.\n"; //exibe qualquer coisa
    }

    return 0;
}