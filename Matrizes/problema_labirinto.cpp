/*
Resolvendo problema do labirinto utilizando busca em matrizes de grafos. O problema consiste em um labirinto
formado por zeros e uns, onde "zeros" são os caminhos que os policiais podem passar e os "uns" são paredes
onde não se pode passar. Os ladrões estão sempre na última posição a direita da matriz enquanto os policiais
estão na primeira casa a esquerda da matriz.
O algoritmo deve procurar o menor caminho, se existir, entre os policiais e os bandidos e imprimir no final
quem ganha naquela matriz.

As matrizes são sempre [5][5].
Os policiais não andam nas diagonais.

Ex. de matriz:

Policiais->0 0 0 0 1
           1 1 0 0 1
           0 1 0 0 0                Nesse labirinto, ganha os policiais.
           0 0 0 1 1
           1 1 0 0 0<-Bandidos

Policiais->0 0 0 0 1
           1 1 0 0 1
           0 1 0 0 0                Nesse labirinto, ganha os bandidos.
           0 0 1 1 1
           1 1 0 0 0<-Bandidos

Ex. de entrada:
2

0 0 0 0 1
1 1 0 0 1
0 1 0 0 0
0 0 0 1 1
1 1 0 0 0

0 0 0 0 1
1 1 0 0 1
0 1 0 0 0
0 0 1 1 1
1 1 0 0 0
*/

#include <iostream>
#include <vector>
using namespace std;

int winner;

class Coordenada{
public:
    int x, y;
    bool visitada;
};

void busca(vector<vector<int>> mat, vector<vector<Coordenada>> coordenadas, int i, int j){
    if(i>=0 && i<5 && j>=0 && j<5 && !winner){
        coordenadas[i][j].visitada = true;
        if(i==4 && j==4)
            winner = 1;
        else{
            //busca para baixo, cima, direita, esquerda
            if(i+1<5 && mat[i+1][j] == 0 && !coordenadas[i+1][j].visitada)
                busca(mat,coordenadas,i+1,j);
            if(i-1>=0 && mat[i-1][j] == 0 && !coordenadas[i-1][j].visitada)
                busca(mat,coordenadas,i-1,j);
            if(j+1<5 && mat[i][j+1] == 0 && !coordenadas[i][j+1].visitada)
                busca(mat,coordenadas,i,j+1);
            if(j-1>=0 && mat[i][j-1] == 0 && !coordenadas[i][j-1].visitada)
                busca(mat,coordenadas,i,j-1);
        }
    }
}

int main(){

    int T; //número de casos de testes
    cin >> T;

    for(int i=0; i<T; i++){
        vector<vector<int>> mat(5);
        vector<vector<Coordenada>> coordenadas(5); //vetor para verificar os pontos pelos quais já passei

        for(int j=0; j<5; j++){
            mat[j].resize(5);//inicializando as posições da matriz
            coordenadas[j].resize(5);
        
            for(int k=0; k<5; k++){
                int e;
                //cout << "Lendo e\n";
                cin >> e;
                mat[j][k]=e;
               // cout << "Leu e e gravou\n";
                coordenadas[j][k].x = j;
                coordenadas[j][k].y = k;
                coordenadas[j][k].visitada = false;
            }
        }
        winner = 0;
        busca(mat, coordenadas, 0, 0);

        if(winner)
            cout << "COPS\n";
        else
            cout << "ROBBERS\n";
    }

return 0;
}