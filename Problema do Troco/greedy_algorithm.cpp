/*
Esse algoritmo aborda a tentativa de dar um troco utilizando a menor quantidade de moedas possíveis.

Nesse caso estamos usando um algoritmo guloso, entretanto nem sempre o resultado desse algoritmo é ótimo.
Um exemplo claro é usar o algoritmo para dar um troco no valor de 8 com um conjunto de moedas M{1, 4, 6}.

O Algorítmo dara o troco utilizando 3 moedas, duas moedas de 1 e uma moeda de 6. troco:{1,1,6}.

Porém, a solução ótima seria dar o troco utilizando duas moedas de 4. troco:{4,4}

Temos que ter isso em mente.
*/

#include <iostream>
#include <vector>
using namespace std;

int num_moedas(vector<int> &moedas, int troco){
    int qte_moedas = 0;
    int tam_moedas = moedas.size();

    for(int i = tam_moedas - 1; i>=0; i--){
        int aux_moedas = troco / moedas[i];
        troco -= aux_moedas * moedas[i];
        qte_moedas += aux_moedas;
    }

    return qte_moedas;
}

int main(){

    vector<int> moedas;
    int troco;

    troco = 26;
    moedas.push_back(1);
    moedas.push_back(2);
    moedas.push_back(5);
    moedas.push_back(10);
    moedas.push_back(20);

    cout << "O número mínimo de moedas para o troco de "<< troco
    <<" é de: " << num_moedas(moedas, troco)
    << " moedas.\n";

return 0;
}