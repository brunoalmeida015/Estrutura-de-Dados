#include "fila.h"

int main(void) {

    fila fila;
    cout << "Vazia? " << (fila.estaVazia() ? "Sim" : "Nao") << endl;
    fila.inserir(10);
    fila.print();
    cout << "Vazia? " << (fila.estaVazia() ? "Sim" : "Nao") << endl;
    
    fila.inserir(20);
    fila.print();
    fila.inserir(15);
    fila.print();
    cout << "Tamanho =  " << fila.get_tam() << endl;
    
    fila.inserir(30);
    fila.print();
    fila.inserir(40);
    fila.print();
    cout << "Cheia? " << (fila.estaCheia() ? "Sim" : "Nao") << endl;
    
    fila.print();
    fila.inserir(50);
    fila.print();
    fila.remover();
    fila.print();
    fila.inserir(60);
    fila.print();
    fila.print();
    fila.inserir(70);
    fila.print();
    fila.inserir(80);
    fila.print();
    fila.inserir(90);
    fila.print();
    fila.inserir(100);
    fila.print();
    cout << "Elemento do topo: " << fila.get_cabeca() << endl;
    cout << "Cheia? " << (fila.estaCheia() ? "Sim" : "Nao") << endl;

    fila.remover();
    fila.remover();

    fila.print();


    return 0;
}