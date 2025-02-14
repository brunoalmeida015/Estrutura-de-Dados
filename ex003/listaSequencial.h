#ifndef LISTASEQUENCIAL_H
#define LISTASEQUENCIAL_H

#include <iostream>
using namespace std;

#define MAX 100

class listaSequencial {
private:
    int elementos[MAX];
    int tamanho;
public:
    listaSequencial();
    void criarListaVazia();
    int listaVazia();
    int listaCheia();
    int obterTamanho();
    int obterElemento(int posicao, int *valor);
    int modificarElemento(int posicao, int valor);
    int inserirElemento(int posicao, int valor);
    int retirarElemento(int posicao, int *valor);
    void imprimirLista();
};

#endif