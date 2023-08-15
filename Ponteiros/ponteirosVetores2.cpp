#include <iostream>

using namespace std;

int main(){

    //Alocando um vetor dinâmicamente
    int tam;   
    cout << "Digite o tamanho do vetor vet[]" << endl;
    cin >> tam;
    int *vet = new int[tam];

    //alocando um vetor de forma padrão
    int vet2[10];

    /*
    Percorrer um vetor com for sem saber o tamanho do mesmo, que pode mudar.
    Utiliza-se para isso o cálculo de sizeof(vetor)/sizeof(tipo dos dados)
    */
    cout << "Tamanho vet, não funciona para alocações dinâmicas: " << sizeof(vet)/sizeof(int) << endl;
    cout << "Tamanho vet2: " << sizeof(vet2)/sizeof(int) << endl << endl;
    cout << "Imprimindo valores do vetor(não inicializado):" << endl;
    cout << "|";
    for(int i = 0; i < sizeof((vet2))/sizeof(int); i++)
        cout << vet[i] << "|";

    cout << endl;

    delete[] vet;
    return 0;
}