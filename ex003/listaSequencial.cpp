#include "listaSequencial.h"

listaSequencial::listaSequencial() {
    criarListaVazia();
}

void listaSequencial::criarListaVazia() {
    tamanho = 0;
}

int listaSequencial::listaVazia() {
    return tamanho == 0;
}

int listaSequencial::listaCheia() {
    return tamanho == MAX;
}

int listaSequencial::obterTamanho() {
    return tamanho;
}

int listaSequencial::obterElemento(int posicao, int *valor) {
    if (posicao < 1 || posicao > tamanho) {
        return 0; // Posição inválida
    }
    *valor = elementos[posicao - 1];
    return 1; // Sucesso
}

int listaSequencial::modificarElemento(int posicao, int valor) {
    if (posicao < 1 || posicao > tamanho) {
        return 0; // Posição inválida
    }
    elementos[posicao - 1] = valor;
    return 1; // Sucesso
}

int listaSequencial::inserirElemento(int posicao, int valor) {
    if (listaCheia() || posicao < 1 || posicao > tamanho + 1) {
        return 0; // Lista cheia ou posição inválida
    }
    for (int i = tamanho; i >= posicao; i--) {
        elementos[i] = elementos[i - 1];
    }
    elementos[posicao - 1] = valor;
    tamanho++;
    return 1; // Sucesso
}

int listaSequencial::retirarElemento(int posicao, int *valor) {
    if (listaVazia() || posicao < 1 || posicao > tamanho) {
        return 0; // Lista vazia ou posição inválida
    }
    *valor = elementos[posicao - 1];
    for (int i = posicao - 1; i < tamanho - 1; i++) {
        elementos[i] = elementos[i + 1];
    }
    tamanho--;
    return 1; // Sucesso
}

void listaSequencial::imprimirLista() {
    for (int i = 0; i < tamanho; i++) {
        std::cout << elementos[i] << " ";
    }
    std::cout << std::endl;
}