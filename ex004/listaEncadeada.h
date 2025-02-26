#ifndef LISTA_ENCADEADA_H
#define LISTA_ENCADEADA_H

#include <iostream>
using namespace std;

class No {
private:
    int valor;
    No *proximo;
public:
    No();
    void setValor(int valor);
    int getValor();
    void setProximo(No *proximo);
    No *getProximo();
};

class ListaEncadeada {
private:
    No *cabeca;
    int tamanho;
public:
    ListaEncadeada();
    void criarListaVazia();
    int listaVazia();
    int obterTamanho();
    int obterElemento(int posicao, int *valor);
    int modificarElemento(int posicao, int valor);
    int inserirElemento(int posicao, int valor);
    int retirarElemento(int posicao, int *valor);
    void imprimirLista();
};
#endif