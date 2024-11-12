#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int *vetor;    // Ponteiro para o vetor dinâmico
    int tamanho, i;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    // Alocando memória para o vetor com base no tamanho informado pelo usuário
    vetor = (int*) malloc(tamanho * sizeof(int));
    if (vetor == NULL) {
        printf("Erro ao alocar memória \n");
        return 1;
    }

    // Inserindo valores no vetor
    for (i = 0; i < tamanho; i++) {
        printf("Digite o valor para vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    // Exibindo os valores do vetor
    printf("\nValores no vetor:\n");
    for (i = 0; i < tamanho; i++) {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }

    // Liberando a memória alocada
    free(vetor);

}

