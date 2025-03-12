# Implementação de Fila em C++

Este projeto implementa uma estrutura de dados de fila em C++ com operações básicas como inserir, remover, verificar se está vazia ou cheia, e imprimir os elementos da fila.

## Estrutura do Projeto

O projeto contém os seguintes arquivos:

- `fila.h`: Declaração da classe `fila` e suas funções membro.
- `fila.cpp`: Implementação das funções membro da classe `fila`.
- `main.cpp`: Função principal que demonstra o uso da classe `fila`.

## Classe `fila`

A classe `fila` é definida no arquivo [fila.h](fila.h) e implementada no arquivo [fila.cpp](fila.cpp). Ela possui as seguintes funções membro:

- `fila()`: Construtor que inicializa a fila.
- `bool estaVazia()`: Verifica se a fila está vazia.
- `bool estaCheia()`: Verifica se a fila está cheia.
- `int get_tam()`: Retorna o tamanho atual da fila.
- `void inserir(int v)`: Insere um elemento no final da fila.
- `void remover()`: Remove um elemento do início da fila.
- `int get_cabeca()`: Retorna o elemento no início da fila.
- `void print()`: Imprime todos os elementos da fila.

## Como Compilar e Executar

Para compilar e executar o projeto, siga os seguintes passos:

1. Navegue até o diretório do projeto.
2. Compile os arquivos `main.cpp` e `fila.cpp`:
    ```sh
    g++ main.cpp fila.cpp -o main
    ```
3. Execute o programa:
    ```sh
    ./main
    ```

## Exemplo de Uso

- fila.inserir(50);
- fila.print();
- fila.remover();
- fila.print();