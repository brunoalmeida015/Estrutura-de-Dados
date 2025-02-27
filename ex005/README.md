# Resolução de Labirinto usando pilha

Este projeto implementa um solucionador de labirintos utilizando a biblioteca Pygame para visualização e algoritmos de busca para encontrar o caminho do jogador até o prêmio.

## Descrição

O labirinto é representado por uma matriz binária onde:
- `0` representa uma parede.
- `1` representa um corredor.
- `2` representa o jogador.
- `3` representa o prêmio.

O objetivo é encontrar o caminho do jogador até o prêmio utilizando algoritmos de busca.

## Estrutura do Projeto

- `maze.py`: Contém a classe `Maze` que implementa a lógica do labirinto, incluindo carregamento de arquivo CSV, inicialização do jogador e prêmio, visualização com Pygame e resolução do labirinto.
- `main_maze.py`: Script principal que inicializa o labirinto, exibe a visualização e resolve o labirinto.

## Dependências

- Python 3.13.1
- Pygame 2.6.1
- NumPy

## Instalação

1. Clone o repositório:
     ```
    https://github.com/brunoalmeida015/Estrutura-de-Dados/tree/main/ex005.git
    ```
2. Instale as dependências:
    ```sh
    pip install pygame numpy
    ```

## Uso

1. Certifique-se de que o arquivo [labirinto1.txt](http://_vscodecontentref_/0) está no mesmo diretório que os scripts Python.
2. Execute o script principal:
    ```sh
    python main_maze.py
    ```

## Estrutura do Arquivo CSV

O arquivo CSV (`labirinto1.txt`) deve conter a matriz binária que representa o labirinto. Cada linha do arquivo representa uma linha do labirinto, e os valores são separados por vírgulas. Exemplo:

## Funcionalidades

- Carregamento do Labirinto: Carrega a matriz do labirinto a partir de um arquivo CSV.

- Inicialização do Jogador e Prêmio: Posiciona o jogador e o prêmio em posições aleatórias no corredor do labirinto.

- Visualização com Pygame: Exibe o labirinto, destacando a posição inicial do jogador em vermelho.

- Resolução do Labirinto: Utiliza algoritmos de busca (Backtracking com Pilha), para encontrar o caminho do jogador até o prêmio.

- Bruno Almeida dos Santos 
