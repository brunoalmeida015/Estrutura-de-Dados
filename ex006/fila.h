#ifndef FILA_H
#define FILA_H

#include <iostream>
#define MAX 10

using std::cout;
using std::endl;

class fila {
    int tamanho; // armazena o tam atual
    int inicio; // guarda a posicao do primeiro elemento
    int fim; // guarda a posicao do ultimo elemento
    int vetor[MAX];
public:
    fila();

    bool estaVazia();

    bool estaCheia();

    int get_tam();

    void inserir(int v);

    void remover();

    int get_cabeca();

    void print();

};

#endif //FILA_H