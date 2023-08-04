#include <iostream>

using namespace std;

int main(){
    
    cout << "Digite o tamanho do vetor Aux[]" << endl;
    cin >> *(aux);
    //int aux[tam];

    /*
    Percorrer um vetor com for sem saber o tamanho do mesmo, que pode mudar.
    Utiliza-se para isso o cálculo de sizeof(vetor)/sizeof(tipo dos dados)
    */
    cout << "Exemplo tam. vetor utilizando cálculo sizeof(vetor)/sizeof(tipo dos dados): " << sizeof(aux)/sizeof(int) << endl << endl;
    cout << "Vetor não iniciado, imprimindo lixos" << endl;
    cout << "|";
    for(int i = 0; i < sizeof(aux)/sizeof(int); i++)
        cout << aux[i] << "|";

    cout << endl;
    return 0;
}