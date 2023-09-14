#include <iostream>
namespace ns1{
    int num = 42;

    class A{
    public:
        void imprimir(){
            std::cout << "Olá, sou a classe A do namespace NS1" << std::endl;
        }
    };
}

namespace ns2{
    int num = 50;

    class A{
    public:
        void imprimir(){
            std::cout << "Olá, sou a classe A do namespace NS2" << std::endl;
        }
    };
}

using namespace ns1;
using namespace ns2;

int main(){

    //std::cout << "Hello Wordl\n";
    std::cout << ns1::num << std::endl;
    std::cout << ns2::num << std::endl;
    ns1::A ns1;
    ns2::A ns2;

    ns1.imprimir();
    ns2.imprimir();

return 0;
}