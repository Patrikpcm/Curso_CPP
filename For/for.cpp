#include <iostream>

int main(){

    /*
    Cálculo de fatorial
    0! = 0
    1! = 1
    2! = 2 * 1 = 2
    3! = 3 * 2 * 1 = 6
    4! = 4 * 3 * 2 * 1 = 24
    ...
    */

    int i, fat;
    //calculo de 5!
    for (i=5, fat=1; i>=1; i--){ //for (parte1; parte2; parte3)
        fat = fat*i;
    }

    std::cout << "fatorial: " << fat << std::endl;
}