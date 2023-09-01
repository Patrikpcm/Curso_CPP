#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream output("../saida.txt"); //saída de dados para o arquivo
    output << "Testando saída de arquivo\n"; //função para escrever no arquivo
    output << "Aprendendo C++\n"; 
    return 0;
}