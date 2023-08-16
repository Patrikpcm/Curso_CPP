#include <iostream>
using namespace std;

#define MAX 10

class Carro{
public:
    char nome[100];
    char cor[20];
    char placa[20];
    double preco;
};

int main(){

    Carro carros[MAX]; //criando a classe carros
    
    int i = 0;
    while(true){ //criando os carros
        char resp;
        cout << "Digite o nome do carro: ";
        cin >> carros[i].nome;
        cout << "Digite a cor: ";
        cin >> carros[i].cor;
        cout << "Digite o preço do carro: ";
        cin >> carros[i].preco;
        cout << "Deseja continuar? <S>SIM ou <N>NÃO: ";
        cin >> resp;
        if(resp!='S' && resp!='s'){
            cout << "\n";
            break;
        }
        i++;
        cout << "\n";
    }

    for(int j=0; j<=i; j++){ //imprimindo carros
        cout << carros[j].nome << endl;
        cout << carros[j].cor << endl;
        cout << carros[j].preco << "\n" <<endl;
    }

    /*
    Ordenando carros pelo preço com o algoritmo bubble sort
    i é a quantidade de carros inserida na lista
    */
    for(int k=0; k<=i; k++){
        for(int j=k+1; j<=i; j++){
            if (carros[k].preco > carros[j].preco){
                Carro aux;
                aux = carros[k];
                carros[k] = carros[j];
                carros[j]=aux;
            }
        }
    }

    cout << "Lista de carros ordenada por preço: " << endl;
    cout << "| ";
    for(int j=0; j<=i; j++){ //imprimindo carros ordenados
        cout << carros[j].nome << " | ";
    }
    cout << "\n" << endl;
}