# Implementação de Grafos em Python

Este projeto implementa uma estrutura de grafo em Python, com suporte para leitura de grafos a partir de arquivos, busca em largura (BFS), busca em profundidade (DFS) e outras funcionalidades relacionadas.

## Estrutura do Projeto

O projeto é composto pelos seguintes arquivos:

- **`graph.py`**: Contém a classe `Graph`, que implementa a estrutura de grafo e os algoritmos BFS e DFS.
- **`leitor_arquivo.py`**: Contém a função `load_from`, que lê um arquivo de texto e carrega as estruturas do grafo.
- **`main.py`**: Arquivo principal para executar e testar as funcionalidades do grafo.
- **`pcv4.txt`**: Arquivo de entrada contendo a matriz de adjacência do grafo.

## Funcionalidades

### Classe `Graph` (`graph.py`)
A classe `Graph` implementa as seguintes funcionalidades:
- **Representação do Grafo**:
  - Matriz de adjacência (`M`).
  - Lista de adjacência (`L`).
- **Busca em Largura (BFS)**:
  - Calcula as distâncias e os predecessores a partir de um vértice fonte.
  - Encontra e imprime o caminho entre dois vértices.
- **Busca em Profundidade (DFS)**:
  - Implementação recursiva.
  - Implementação iterativa usando pilha.
- **Cálculo do número de componentes conectados**.

### Leitura do Grafo (`leitor_arquivo.py`)
A função `load_from` lê um arquivo de texto contendo a matriz de adjacência do grafo e carrega as estruturas do grafo.

### Arquivo de Entrada (`pcv4.txt`)
O arquivo de entrada deve conter:
1. O número de vértices na primeira linha.
2. A matriz de adjacência nas linhas seguintes, com valores separados por tabulação (`\t`).

Exemplo de arquivo `pcv4.txt`:


### Arquivo Principal (`main.py`)
O arquivo `main.py` executa as seguintes operações:
1. Carrega o grafo a partir do arquivo `pcv4.txt`.
2. Imprime as estruturas do grafo.
3. Calcula e imprime o número de componentes conectados.
4. Executa a busca em largura (BFS) e imprime o caminho entre dois vértices.
5. Executa a busca em profundidade (DFS) iterativa.

## Como Executar

### Pré-requisitos
- Python 3.x instalado no sistema.

### Passos
1. Certifique-se de que todos os arquivos estão no mesmo diretório.
2. Abra o terminal no diretório do projeto.
3. Execute o arquivo `main.py`:
   ```bash
   python main.py

 # Saída

  ```
Número de Vértices: 4
Matriz de adjacência:
[[0, 3, 4, 0], [3, 0, 5, 7], [4, 5, 0, 0], [0, 7, 0, 0]]
Lista de Adjacência:
[[1, 2], [0, 2, 3], [0, 1], [1]]
Vertice: 0
Vertice: 1
Vertice: 2
Vertice: 3
Número de Componentes: 1

BFS Caminho:
Caminho entre 0 e 3: 0 -> 1 -> 3

DFS Iterativo:
Visitando vértice: 0
Visitando vértice: 2
Visitando vértice: 1
Visitando vértice: 3
 ```
