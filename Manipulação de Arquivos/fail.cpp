#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream in("../teste.txt");
    char c;
    /*
    Função fail() serve para testar se existe algum caractere para ser lido no arquivo.
    */
    while(true){
        in >> c;
        if(in.fail()) 
            break;
        cout << c;
    }
}