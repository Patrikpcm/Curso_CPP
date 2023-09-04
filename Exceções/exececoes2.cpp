#include <iostream>
#include <exception>
#include <string.h>
using namespace std;
/*
palavras reservadas:
try - tentar alguma coisa
catch - pegar alguma exceção
throw - dispensar alguma coisa 
*/

// Criar uma classe que gere exceções de forma customizada
class ExcecaoCustomizada : public exception{
protected:
    char msg[100];
public:
    ExcecaoCustomizada(const char *e){
        strcpy(msg, e);
    }

    virtual const char *what(){
        return msg;
    }  
};

int fat(int n){
    if (n<0)
        throw ExcecaoCustomizada("Número negativo!");

    if(n==0 || n==1)
        return 1;

    return n*fat(n-1);
}

int main(){

    try{
        cout << "Fatorial de 5: " << fat(5) << endl;
        cout << "Fatorial de -5: " << fat(-5) << endl;
    }
    catch(ExcecaoCustomizada e){
        cerr << "Erro: " << e.what() << endl; //exibe a frase com erro lançada por throw
    }
    catch(...){
        cerr << "Erro inesperado.\n"; //exibe qualquer coisa
    }

    return 0;
}