/*Esse módulo contém funções matemáticas*/

int fatorial(int n){
    int fat = 1;
    for (int i = n; i >= 1; i--){
        fat = fat * i;
    }
    return fat;
}

int area_quadrado(int lado){
    return (lado*lado);
}

int area_triangulo(int lado, int base){
    return ((lado * base)/2);
}