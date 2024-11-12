#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
    int *vetor;
    int tamanho = 4; 
	int i;

    // Alocando o valor de cada posição do vetor em 0
    vetor = (int*) calloc(tamanho, sizeof(int));
    if (vetor == NULL) {
        printf(" ERRO \n");
        return 1;
    }

    // Exibindo os valores do vetor
    printf("Valores do vetor:\n");
    for (i = 0; i < tamanho; i++) {
        printf("vetor[%d] = %d\n", i, vetor[i]); 
    }

    free(vetor);
}

