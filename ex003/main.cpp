#include <iostream>
#include "listaSequencial.h"

void runTests() {
    listaSequencial lista;
    lista.criarListaVazia();
    lista.listaCheia();

    // Teste das operações
    lista.inserirElemento(1, 10);
    lista.inserirElemento(2, 20);
    lista.inserirElemento(3, 30);
    lista.inserirElemento(4, 40);

    int valor;
    lista.obterElemento(1, &valor);
    std::cout << "Elemento na posicao 1: " << valor << std::endl;

    lista.modificarElemento(1, 25);
    lista.obterElemento(1, &valor);
    std::cout << "Elemento na posicao 1 apos modificacao: " << valor << std::endl;

    // lista.retirarElemento(1, &valor);
    // std::cout << "Elemento retirado da posicao 1: " << valor << std::endl;
    
    lista.imprimirLista();
    lista.retirarElemento(3, &valor);

    lista.imprimirLista();
    lista.inserirElemento(4, 35);
    
    lista.imprimirLista();

    std::cout << "Tamanho da lista: " << lista.obterTamanho() << std::endl;
}

int main() {
    runTests();
    return 0;
}