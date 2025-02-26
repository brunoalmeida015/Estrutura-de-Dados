#include <iostream>
#include "listaEncadeada.h"

void runTests() {
    ListaEncadeada lista;
    lista.criarListaVazia();

    // Teste das operações
    lista.inserirElemento(1, 20); // Inserir na posição 1
    lista.inserirElemento(2, 30); // Inserir na posição 2
    lista.inserirElemento(3, 40); // Inserir na posição 3

    int valor;
    lista.obterElemento(1, &valor);
    std::cout << "Elemento na posicao 1: " << valor << std::endl;

    lista.imprimirLista();

    lista.modificarElemento(1, 25);
    lista.obterElemento(1, &valor);
    std::cout << "Elemento na posicao 1 apos modificacao: " << valor << std::endl;

    lista.imprimirLista();
    lista.retirarElemento(2, &valor);
    std::cout << "Elemento retirado da posicao 2: " << valor << std::endl;

    lista.imprimirLista();
    lista.inserirElemento(2, 35); 
    lista.inserirElemento(4, 50); //inserir no final da lista
    lista.obterElemento(4, &valor);
    std::cout << "Elemento inserido no fim da lista: " << valor << std::endl;
    lista.imprimirLista();
    lista.inserirElemento(1, 60); //inserir no começo da lista
    lista.obterElemento(1, &valor);
    std::cout << "Elemento inserido no comeco da lista: " << valor << std::endl;
    

    lista.imprimirLista();

    std::cout << "Tamanho da lista: " << lista.obterTamanho() << std::endl;
}

int main() {
    runTests();
    return 0;
}