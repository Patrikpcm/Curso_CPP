#include <iostream>

using namespace std;

class ClasseMae{
public:
    virtual void mostrarMensagem(){
        cout << "Mensagem classe Mãe" << endl;
    }
};

class ClasseFilha : public ClasseMae{
public:
    virtual void mostrarMensagem(){
        cout << "Mensagem classe Filha" << endl;
    }
};

//função para exemplificar a chamada prematura da função.
void foo(ClasseMae *p){
    p->mostrarMensagem();
}

int main(){
    /*
    Nessa forma, o compilador c++ faz uma ligação prematura da função
    sabendo qual mensagem vai chamar.
    */
    ClasseMae mae;
    ClasseFilha filha;
    mae.mostrarMensagem();
    filha.mostrarMensagem();
 
    //exemplo de ligação prematura (Retire a definição "Virtual" das classes para testar o exemplo).
    foo(&mae);
    foo(&filha);//mesmo passando endereço de classe filha, ele mostra a mensagem de mãe.
  
    /*
    O C++ também suporta a ligação de Forma Tardia (Polimorfismo), que é até preferível na
    programação Orientada a Objeto. 
    Para fazermos isso, devemos adicionar a palavra "virtual" ao nome da classe. 
    */
    return 0;
}