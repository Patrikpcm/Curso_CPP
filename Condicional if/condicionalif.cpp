#include <iostrem>

int main(){

    int num = 10;

    if (num == 10){
        std::cout << "número igual a 10" << std::endl;
    }
    else{
        std::cout << "número não é igual a 10" << std::endl;
    }


    if (num <= 10){
        std::cout << "número é menor igual a 10" << std::endl;
    }


    if (num >= 10){
        std::cout << "número é maior igual a 10" << std::endl;
    }


    if (num < 10){
        std::cout << "número é menor que 10" << std::endl;
    }


    if (num > 10){
        std::cout << "número é maior que 10" << std::endl;
    }

      if (num != 10){
        std::cout << "número é diferente de 10" << std::endl;
    }

    return 1;
}