#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL, "");

    int **matriz;  // Ponteiro para ponteiro, para a matriz dinâmica
    int linhas, colunas;
    int i, j;

    // Lendo o número de linhas e colunas da matriz
    printf("Digite o número de linhas: ");
    scanf("%d", &linhas);

    printf("Digite o número de colunas: ");
    scanf("%d", &colunas);

    // Alocando memória para o vetor de ponteiros (cada linha da matriz)
    matriz = (int**) malloc(linhas * sizeof(int*));
    if (matriz == NULL) {
        printf("Erro ao alocar memória para as linhas.\n");
        return 1;
    }

    // Alocando memória para cada linha da matriz
    for (i = 0; i < linhas; i++) {
        matriz[i] = (int*) malloc(colunas * sizeof(int));
        if (matriz[i] == NULL) {
            printf("Erro ao alocar memória para a coluna %d.\n", i);
            return 1;
        }
    }

    // Inserindo valores na matriz
    printf("\nDigite os valores da matriz:\n");
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Exibindo os valores da matriz
    printf("\nMatriz inserida:\n");
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Liberando a memória alocada para cada linha
    for (i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    // Liberando a memória alocada para o vetor de ponteiros
    free(matriz);
    getchar();

}

