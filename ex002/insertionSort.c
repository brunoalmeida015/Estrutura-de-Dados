#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    FILE *file;
    char nome[50];
    printf("Digite o nome do arquivo: ");
    scanf("%s", nome);
    char filename[100] = "C:/Users/bruno/Desktop/instancias-num/"; // Caminho completo
    strcat(filename, nome); // Concatenar o nome do arquivo ao caminho

    // Abrir o arquivo no modo de leitura
    file = fopen(filename, "r");
    if (file == NULL) {
        perror("Erro ao abrir o arquivo");
        return EXIT_FAILURE;
    }

    // Contar o número de linhas no arquivo
    int linhas = 0;
    char ch;
    while (!feof(file)) {
        ch = fgetc(file);
        if (ch == '\n') {
            linhas++;
        }
    }
    rewind(file); // Voltar ao início do arquivo

    // Alocar memória para o array com base no número de linhas
    int *arr = (int *)malloc(linhas * sizeof(int));
    if (arr == NULL) {
        perror("Erro ao alocar memória");
        fclose(file);
        return EXIT_FAILURE;
    }

    // Ler o arquivo linha por linha e armazenar os números no array
    int n = 0;
    char line[1024];
    while (fgets(line, sizeof(line), file) != NULL) {
        arr[n++] = atoi(line); // Converter a linha para inteiro e armazenar no array
    }

    // Fechar o arquivo
    fclose(file);

    // Marcar o tempo de início
    clock_t start = clock();

    // Ordenar o array usando InsertionSort
    insertionSort(arr, n);

    // Marcar o tempo de fim
    clock_t end = clock();

    // Calcular o tempo de execução
    double time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;

    // Exibir o tempo de execução
    printf("Tempo de execução: %f segundos\n", time_taken);

    // Liberar a memória alocada
    free(arr);

    return EXIT_SUCCESS;
}