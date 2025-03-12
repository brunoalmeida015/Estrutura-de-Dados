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

## Saída

 ```
Fila criada
Vazia? Sim
Valor 10 adicionado.
Fila: 10
Vazia? Nao
Valor 20 adicionado.
Fila: 10 20
Valor 15 adicionado.
Fila: 10 20 15      
Tamanho =  3
Valor 30 adicionado.
Fila: 10 20 15 30
Valor 40 adicionado.
Fila: 10 20 15 30 40
Cheia? Nao
Fila: 10 20 15 30 40
Valor 50 adicionado.
Fila: 10 20 15 30 40 50
Valor 10 removido.
Fila: 20 15 30 40 50
Valor 60 adicionado.
Fila: 20 15 30 40 50 60
Fila: 20 15 30 40 50 60
Valor 70 adicionado.
Fila: 20 15 30 40 50 60 70
Valor 80 adicionado.
Fila: 20 15 30 40 50 60 70 80
Valor 90 adicionado.
Fila: 20 15 30 40 50 60 70 80 90
Valor 100 adicionado.
Fila: 20 15 30 40 50 60 70 80 90 100
Elemento do topo: 20
Cheia? Sim
Valor 20 removido.
Valor 15 removido.
Fila: 30 40 50 60 70 80 90 100
 ```
