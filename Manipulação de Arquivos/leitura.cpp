#include <iostream>
#include <fstream>
using namespace std;

int main(){

    ifstream in("../teste.txt");
 
    string texto; //redimenciona automaticamente a quantidade de dados necessária para os caracteres da string
    char c = in.get();//pegar o caractere
    texto.push_back(c);//colocar o caractere em texto.
 
    cout << "Mostrando cada caractere:\n";
    while(in.good()){
        cout << c;
        c = in.get();
        texto.push_back(c);
    }

    cout << "\n\nMostrando a string:\n" << texto << endl;
    
    return 0;
}