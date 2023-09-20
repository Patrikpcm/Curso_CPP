#include <iostream>
#include <queue>
using namespace std;

class Pessoa{
private:
    string nome;
    int idade;

public: 
    Pessoa(string nome, int idade){
        this->nome = nome;
        this->idade = idade;
    }

    string getNome(){
        return nome;
    }

    int getIdade(){
        return idade;
    }
};

struct CompIdade{
    bool operator() (Pessoa &p1, Pessoa &p2){
        return p1.getIdade() < p2.getIdade();
    }
};

int main(){
    priority_queue<Pessoa, vector<Pessoa>, CompIdade> pq;

    Pessoa p1("Juca", 30), p2("Leo", 16), p3("Josane", 56);
    pq.push(p1);
    pq.push(p2);
    pq.push(p3);
    
    Pessoa pessoa = pq.top();
    cout << "Nome: " << pessoa.getNome() << ", Idade: " << pessoa.getIdade() << endl;

return 0;
}