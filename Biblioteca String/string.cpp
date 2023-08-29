#include <iostream>
#include <string> //Biblioteca String do C++ (obs: string.h é de C). Serve para manipular strings de forma mais fácil.

using namespace std;

void showMessage(const char *str){
    cout << str << endl;
}

int main(){

    char palavra[] = "Palavra"; //modo padrão de declaração de uma string

    string str = "O rato roeu"; //utilizando a biblioteca string

    cout << palavra << endl;
    cout << str << endl;
    /*
    A biblioteca String possui diversar funções prontas para manipular strings em C++ de forma mais fácil.
    Abaixo segue alguns exemplos.
    */
    cout << "O rato roeu" << endl;
    cout << "Tamanho - str.size(): " << str.size() << endl; 
    cout << "Comprimento - str.length(): " << str.length() << endl;
    cout << "Capturar um caracter da posição - str.at(2): " << str.at(2) << endl;
    cout << "Último caracter - str.back(): " << str.back() << endl;
    cout << "Primeiro Caracter - str.front()" << str.front() << endl;
    cout << "Concatenar - str.append(a roupa): " << str.append(" a roupa") << endl;
    cout << "Inserir algo numa posição - str.insert(0, \"Começo: \"): " << str.insert(0,"Começo: ") << endl;
    cout << "Inserir algo no final usando str.inser(str.size(),\"do rei\"): " << str.insert(str.size()," do rei") << endl;
    cout << "Apagar string - str.erase(0, str.size()): " << str.erase(0, str.size()) << endl;
    str.clear();
    cout << "Apagar uma string sem parametro nenhum - str.clear(): " << str << endl;
    cout << "Testar se a string é vazia(boolean) - str.empty(): " << str.empty() << endl;
    /*
    Caso tenha um método que recebe uma string, o programa irá dar erro de compilação por não conseguir
    converter um const char. Pra isso utilizamos uma função que converte a string para o padrão C. 
    */
    str = "O rato roeu";
    cout << "Utilizando um método para converter a str C++ em C(const char *) - showMessage(str.c_str()): ";
    //showMessage(str); Se utilizar dessa forma, verá um erro de compilação.
    showMessage(str.c_str());
    cout << "Substituir uma palavra na string - str.replace(2,5,\"pato\"): " << str.replace(2,4,"pato") << endl;
    /*
    A função find retorna um valor do tipo size_t(int sem sinal), portanto temos que criar uma variável
    desse tipo para receber o retorno, se necessário.
    
    */
    cout << "Encontrar uma palavra na string - str.find(\"pato\"): " << str.find("pato") << endl;
    return 0;
}