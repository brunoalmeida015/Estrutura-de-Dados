#include "listaEncadeada.h"

// Implementação da classe No
No::No() : valor(0), proximo(nullptr) {}

void No::setValor(int valor) {
    this->valor = valor;
}

int No::getValor() {
    return valor;
}

void No::setProximo(No *proximo) {
    this->proximo = proximo;
}

No* No::getProximo() {
    return proximo;
}

// Implementação da classe ListaEncadeada
ListaEncadeada::ListaEncadeada() : cabeca(nullptr), tamanho(0) {}

void ListaEncadeada::criarListaVazia() {
    cabeca = nullptr;
    tamanho = 0;
}

int ListaEncadeada::listaVazia() {
    return (cabeca == nullptr);
}

int ListaEncadeada::obterTamanho() {
    return tamanho;
}

int ListaEncadeada::obterElemento(int posicao, int *valor) {
    if (posicao < 1 || posicao > tamanho) {
        return -1; // Posição inválida
    }
    No *atual = cabeca;
    for (int i = 1; i < posicao; i++) {
        atual = atual->getProximo();
    }
    *valor = atual->getValor();
    return 0; // Sucesso
}

int ListaEncadeada::modificarElemento(int posicao, int valor) {
    if (posicao < 1 || posicao > tamanho) {
        return -1; // Posição inválida
    }
    No *atual = cabeca;
    for (int i = 1; i < posicao; i++) {
        atual = atual->getProximo();
    }
    atual->setValor(valor);
    return 0; // Sucesso
}

int ListaEncadeada::inserirElemento(int posicao, int valor) {
    if (posicao < 1 || posicao > tamanho + 1) {
        return -1; // Posição inválida
    }
    No *novoNo = new No();
    novoNo->setValor(valor);
    if (posicao == 1) {
        novoNo->setProximo(cabeca);
        cabeca = novoNo;
    } else {
        No *atual = cabeca;
        for (int i = 1; i < posicao - 1; i++) {
            atual = atual->getProximo();
        }
        novoNo->setProximo(atual->getProximo());
        atual->setProximo(novoNo);
    }
    tamanho++;
    return 0; // Sucesso
}

int ListaEncadeada::retirarElemento(int posicao, int *valor) {
    if (posicao < 1 || posicao > tamanho) {
        return -1; // Posição inválida
    }
    No *atual = cabeca;
    if (posicao == 1) {
        *valor = cabeca->getValor();
        cabeca = cabeca->getProximo();
        delete atual;
    } else {
        No *anterior = nullptr;
        for (int i = 1; i < posicao; i++) {
            anterior = atual;
            atual = atual->getProximo();
        }
        *valor = atual->getValor();
        anterior->setProximo(atual->getProximo());
        delete atual;
    }
    tamanho--;
    return 0; // Sucesso
}

void ListaEncadeada::imprimirLista() {
    No *atual = cabeca;
    while (atual != nullptr) {
        std::cout << atual->getValor() << " ";
        atual = atual->getProximo();
    }
    std::cout << std::endl;
}