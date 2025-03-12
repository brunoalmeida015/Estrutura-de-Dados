#include "fila.h" 

fila::fila() : tamanho(0), inicio(0), fim(-1) {
    cout << "Fila criada" << endl;
}

bool fila::estaVazia() {
    return tamanho == 0;
}

bool fila::estaCheia() {
    return tamanho == MAX;
}

int fila::get_tam() {
    return tamanho;
}

void fila::inserir(int v) {
    if (estaCheia()) {
        cout << "Fila cheia" << endl;
        return;
    }
    
    fim = (fim + 1) % MAX;
    vetor[fim] = v;
    tamanho++;
    cout << "Valor " << v << " adicionado." << endl;
}

void fila::remover() {
    if (estaVazia()) {
        cout << "Fila vazia" << endl;
    }

    cout << "Valor " << vetor[inicio] << " removido." << endl;
    inicio = (inicio + 1) % MAX;
    tamanho--;
}

int fila::get_cabeca() {
    return vetor[inicio];
}

void fila::print() {
    int aux = inicio;

    cout << "Fila: ";

    while (aux != fim) {
        cout << vetor[aux] << " ";
        aux = (aux + 1) % MAX;
    }
    cout << vetor[aux];
    cout << endl;
}