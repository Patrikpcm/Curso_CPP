// Sobrecarga de operador de índice em vetores: []
#include <iostream>
#include <stdlib.h> //função exit()
using namespace std;

class Vetor{
private:
    int *vet, *vet_pos;
    int max;

public:
    Vetor(int max=100){
        if (max < 0){
            cerr << "Erro: Limite máximo menor do que zero." << endl;
            exit(1);
        }
        else if(max > 1000000){
            cerr << "Erro: Limite máximo maior do que 1000000" << endl;
            exit(1);
        }

        this->max = max;
        //alocar
        vet = (int*)malloc(max * sizeof(int));
        vet_pos = (int*)malloc(max * sizeof(int)); //vetor auxiliar que ira ajudar a identificar as posições que possuem elementos

        for(int i = 0; i < max; i++){
            vet_pos[i] = 0;
        }
    }

    ~Vetor(){
        delete [] vet;
    }

    bool inserir(int e, int pos){
        if(pos < max && pos >=0){
            vet[pos] = e;
            vet_pos[pos] = 1;
            return true;
        }
        return false;
    }

    int &operator[](int i){ //AQUI ACONTECE A SOBRECARGA DO OPERADOR
        if(i < 0 || i >= max){
            cerr << "Erro: Acesso invalido ao vetor.\n";
            exit(1);
        }
        else if(vet_pos[i] == 0){
            cerr << "Erro: Não existe elemento nessa posição! \n";
            exit(1);
        }
        return vet[i];
    }
    int tam(){
        int i, cont = 0;
        for( i = 0; i<max; i++){
            if(vet_pos[i] == 1)
                cont++;
        }
        return cont;
    }
};

int main(){
     
    Vetor v(10);
    
    if (v.inserir(10,0))
        cout << "Elemento inserido com sucesso!\n";
    else
        cout << "Erro ao inserir o elemento.\n";

    if (v.inserir(11,2))
        cout << "Elemento inserido com sucesso!\n";
    else
        cout << "Erro ao inserir o elemento.\n";

    if (v.inserir(12,10))
        cout << "Elemento inserido com sucesso!\n";
    else
        cout << "Erro ao inserir o elemento.\n";

    if (v.inserir(12,30)){
        cout << "Elemento inserido com sucesso!\n";
    }
    else{
        cout << "Erro ao inserir o elemento.\n";
    }
     
        cout << "Primeiro elemento: " << v[0] << endl;
        cout << "terceiro elemento: " << v[2] << endl;
        cout << "Trigésimo elemento: " << v[30] << endl;

return 0;
}

