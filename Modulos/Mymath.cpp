
/*Esse módulo contém funções matemáticas*/

int fatorial(int n)
{
    int fat;
    for (int i = n, fat = 1; i >= 1; i--)
    {
        fat = fat * i;
    }
    return n;
}

int area_quadrado(int lado)
{
    return (lado * lado);
}

int area_retangulo(int lado, int base)
{
    return ((lado * base) / 2);
}