class Pilha{
private:
    int *vet;
    int tam_pilha;
    int topo;

public:
    Pilha(int tam);
    ~Pilha();
    void empilhar(int item);
    int desempilhar();
    int qtdItens();
        /*
        Como a pilha começa em 0 e -1 significa que ela esta vazia,
        eu retorno o valor de topo + 1 para saber a quantidade de itens 
        na pilha.
        ex: -1 + 1 = 0;
            0 + 1 = 1 (um item)
            1 + 1 = 2 (dois itens)
            ...
            n + 1 = n+1(n+1 itens)
        */
};