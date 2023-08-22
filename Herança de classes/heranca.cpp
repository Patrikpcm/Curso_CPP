#include <iostream>
#include <string.h>
using namespace std;
/*
Classe Animal é classe mãe
Classe Cachorro é filha
Cachorro sempre herda características de Animal
Cachorro é sempre um Animal
Animal nem sempre é um cachorro
*/
class Animal{
protected: 
    char *tipo;
    char *especie;
    bool voa;
    int patas;

public:
    //Construtor da classe Animal
    Animal(const char *tipo, const char *especie, bool voa, int patas){
        cout << "Construindo animal" << endl;
        this->tipo = new char[strlen(tipo)+1];
        this->especie = new char[strlen(especie)+1];
        strcpy(this->tipo, tipo);
        strcpy(this->especie, especie);
        this->voa = voa;
        this->patas = patas;
        cout << "Animal construido" << endl;
    }

    ~Animal(){
        cout << "Destruindo animal" << endl;
        delete[] tipo;
        delete[] especie;
        patas = 0;
        cout << "Animal destruído" << endl;
    }
    const char *getTipo(){
        return tipo;
    }
    const char *getEspecie(){
        return especie;
    }
    int getPatas(){
       return patas;
    }
    bool getVoa(){
        return voa;
    }
};

class Cachorro : public Animal{
protected:
    char *cor;
    char *raca;
    int peso;

public:
    /*
    Construtor da classe Cachorro. Ele deve receber os parâmetros na chamada da função
    e passa-los para a classe Animal    
    */
    Cachorro(   const char *tipo, //passado para Animal
                const char *especie, //passado para Animal
                bool voa, //passado para Animal
                int patas, //passado para Animal
                const char *cor, 
                const char *raca, 
                int peso):Animal(tipo,
                                 especie,
                                 voa,
                                 patas){
        /*
        O construtor não precisa alocar as informações que pertencem
        a classe Animal, ela se resposabiliza por isso.
        */
        cout << "Construindo cachorro" << endl;
        this->cor = new char[strlen(cor)+1];
        this->raca = new char[strlen(raca)+1];
        strcpy(this->cor,cor);
        strcpy(this->raca,raca);
        this->peso = peso;
        cout << "Cachorro construído" << endl;
    }
    ~Cachorro(){
        cout << "Destruindo Cachorro" << endl;
        delete[] cor;
        delete[] raca;
        peso = 0;
        cout << "Cachorro destruído" << endl;
    }
    const char *getCor(){
        return cor;
    }
    const char *getRaca(){
        return raca;
    }
    int getPeso(){
        return peso;
    }
};

int main(){
    //Chamada da classe Cachorro passando os argumentos tanto da própria classe como de Animal
   Cachorro c(  "Mamifero",
                "Canis Lupus Familiaris",
                false,
                4,
                "Preto",
                "SRD",
                20);

    cout << "Peso: " << c.getPeso() << endl; //Peso é de Cachorro
    cout << "Espécie: " << c.getEspecie() << endl; //Espécie é de Animal
    cout << "Cor: " << c.getCor() << endl; //Cor é de cachorro
    cout << "Tipo: "<<  c.getTipo() << "\n" << endl; //Tipo é de Animal

    return 0;
}