/*
Criando objetos (dados) salvando em arquivos e depois recuperando-os.
Os nomes a serem inseridos nesse exemplo devem ser apenas o primeiro nome, sem espaços.
*/
#include <iostream>
#include <fstream>
using namespace std;

class Pessoa{
private:
    string nome;
    int idade;

public:
    string &getNome(){
        return nome;
    }

    int getIdade(){
        return idade;
    }

    void setNome(string nome){
        this->nome = nome;
    }
    void setIdade(int idade){
        this->idade = idade;
    }

    //sobrecarga do operador de inserção de dados
    friend ostream &operator<<(ostream &os, const Pessoa& p){
        //escrever cada membro
        os << "\n" << p.nome << "\n";
        os << p.idade;
        return os;
    }

    //sobregarga do operador de extração de dados
    friend istream &operator>>(istream &is, Pessoa &p){
        is >> p.nome >> p.idade;
        return is;
    }
};

char menu(){
    char resp;
    cout << "Digite 1 para inserir pessoas\n";
    cout << "Digite 2 para listas pessoas\n";
    cout << "Digite 0 para sair\n";
    cout << "Opção: ";
    cin >> resp;
    return resp;
}

int main(){
    char resp;

    while(true){
        resp = menu();
        if(resp == '1'){
            cout << "\nInserindo pessoa...\n\n";
            Pessoa pessoa;
            string nome;
            int idade;
            //App = append(Adiciona ao final do arquivo)
            //abrindo o arquivo
            ofstream ofs("arquivo.txt", fstream::app);
            cout << "Digite o nome da pessoa: ";
            cin >> nome;
            cout << "Digite a idade da pessoa: ";
            cin >> idade;
            cout << endl;
            //setando parâmetros de pessoa
            pessoa.setNome(nome);
            pessoa.setIdade(idade);

            ofs << pessoa; //temos que sobrecarregar o operador << dentro da Classe
            ofs.close(); //fechando o arquivo
        }
        else if(resp == '2'){
            Pessoa p;
            ifstream ifs("arquivo.txt");
            
            cout << "\nListando pessoas...\n\n";
            //verifica se o arquivo existe e se é possível ler
            if(ifs.good()){
                //eof = End of File
                //Enquanto não chegar ao fim do arquivo
                while(!ifs.eof()){
                    //necessário fazer a sobrecarga do operador de extração >>
                    ifs >> p; //faz extração dos dados
                    //mostrar dados
                    cout << "Nome: " << p.getNome() << ", Idade: " << p.getIdade() << endl;
                }
                ifs.close();
            }
            else{
                cout << "Falha ao abir o arquivo!\n\n";
            }
            
        }
        else if(resp == '0'){
            cout << "\nFim do programa!\n\n";
            break;
        }
        else
            cout << "\nOpção inexistente!\n\n";
    }
return 0;
}