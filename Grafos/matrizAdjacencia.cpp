/*
Exemplo simples do uso de uma matriz de adjacência como um grafo.
*/
#include <iostream>
using namespace std;

int grafo[5][5] =
{ 
    {0, 0, 1, 0, 0},
    {0, 0, 1, 0, 0},
    {1, 1, 0, 1, 1},
    {0, 0, 1, 0, 1},
    {0, 0, 1, 1, 0}
};

bool tem_ligacao(int v1, int v2){
    if(grafo[v1][v2])
        return true;
    else
        return false;
}

int main(){

    cout << tem_ligacao(0, 4) << endl;
    cout << tem_ligacao(0, 2) << endl;
    cout << tem_ligacao(2, 1) << endl;
    cout << tem_ligacao(4, 0) << endl;

return 0;
}