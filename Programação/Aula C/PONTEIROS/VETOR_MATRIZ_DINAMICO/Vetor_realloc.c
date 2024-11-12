#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
    int *vetor;
    int tamanho_inicial = 2;
    int novo_tamanho = 4;
    int i;

    // Alocando um vetor de 2 inteiros
    vetor = (int*) malloc(tamanho_inicial * sizeof(int));
    if (vetor == NULL) {
        printf(" ERRO 1.0 \n");
        return 1;
    }

    // Preenchendo o vetor
    for (i = 0; i < tamanho_inicial; i++) {
        vetor[i] = i + 1; // Dados do vetor
    }
    printf("Vetor antes do realloc:\n");      // Imprimindo o Vetor 
    for (i = 0; i < tamanho_inicial; i++) {     
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }

    // Mudando o vetor para 4 inteiros
    vetor = (int*) realloc(vetor, novo_tamanho * sizeof(int));
    if (vetor == NULL) {
        printf(" ERRO 2.0 \n");
        return 1;
    }
    
    /* O espaço das novas posiçoes sera zero pois não foi adicionado novos dados
    caso queira preencher as novas posições, utilize o codigo abaixo que esta em bloco de comentário */
    
	/*for (i = tamanho_inicial; i < novo_tamanho; i++) {
        vetor[i] = i + 1 ; 
	} */
        
    printf("\nVetor depois do realloc:\n"); // Imprimindo o vetor com o novo tamanho 
    for (i = 0; i < novo_tamanho; i++) {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }

    free(vetor);
}

