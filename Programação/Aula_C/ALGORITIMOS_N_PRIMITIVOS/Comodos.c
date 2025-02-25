#include <stdio.h>
#include <locale.h>

// Numero total de comodos que pode ter 
#define MAX_COMODOS 5

// Estrutura dos dados do cômodo
typedef struct {
    char nome[30];
    float largura;
    float comprimento;
    float area;
} Comodo;

int main() {
    setlocale(LC_ALL, "Portuguese"); 

    Comodo comodos[MAX_COMODOS];
    int num_comodos = 0;
    int i;
    char resposta;
    float area_total = 0;

    // Captura de dados dos cômodos
    do {
        if (num_comodos >= MAX_COMODOS) {
            printf("Número máximo de cômodos atingido.\n");
            break;
        }

        printf("Digite o nome do cômodo: \n");
        scanf("%s", comodos[num_comodos].nome); 

        printf("Digite a largura do cômodo (em metros): \n");
        scanf("%f", &comodos[num_comodos].largura);

        printf("Digite o comprimento do cômodo (em metros): \n");
        scanf("%f", &comodos[num_comodos].comprimento);

        // Calculo da área do cômodo
        comodos[num_comodos].area = comodos[num_comodos].largura * comodos[num_comodos].comprimento;
        area_total += comodos[num_comodos].area;
        num_comodos++;

        // Usuario quer continuar ou nao
        printf("Deseja adicionar outro cômodo? (S/N): \n");
        scanf(" %c", &resposta);

    } while (resposta == 'S' || resposta == 's');

    // Exibindo os dados armazenados e a área total
    printf("Resumo dos Cômodos:\n");
    for (i = 0; i < num_comodos; i++) {
        printf("Cômodo: %s\n", comodos[i].nome);
        printf("Largura: %.2f m\n", comodos[i].largura);
        printf("Comprimento: %.2f m\n", comodos[i].comprimento);
        printf("Área: %.2f m²\n\n", comodos[i].area);
    }

    printf("Área total da residência: %.2f m²\n", area_total);

}

