#include <stdio.h>
#include <locale.h>

// Constante do numero de pessoas\empresa
#define NUM_PESSOAS 3 

// Estrutura para endereço
struct Endereco {
    char rua[50];
    int numero;
    char cidade[30];
};

// Union para CPF ou CNPJ
union Documento {
    char cpf[11];
    char cnpj[14];
};

// Estrutura para os dados de uma pessoa ou empresa
struct Pessoa {
    char nome[50];
    struct Endereco endereco;
    char tipo;
    union Documento documento;
    int idade;
};

int main() {
    setlocale(LC_ALL, "Portuguese");
    int i;

    struct Pessoa pessoas[NUM_PESSOAS];

    for (i = 0; i < NUM_PESSOAS; i++) {
        printf("Pessoa/Empresa %d:\n", i + 1);

        // Captura do nome
        printf("Nome: ");
        scanf(" %[ -~]", pessoas[i].nome); 

        // Captura do endereço
        printf("Endereço - Rua: ");
        scanf(" %[ -~]", pessoas[i].endereco.rua);
        printf("Número: ");
        scanf("%d", &pessoas[i].endereco.numero);
        printf("Cidade: ");
        scanf(" %[ -~]", pessoas[i].endereco.cidade);

        // Captura do tipo de pessoa
        printf("Tipo (F para Física, J para Jurídica): ");
        scanf(" %c", &pessoas[i].tipo);

        // Captura do CPF ou CNPJ
        if (pessoas[i].tipo == 'F' || pessoas[i].tipo == 'f') {
            printf("CPF: ");
            scanf(" %s", pessoas[i].documento.cpf);
        } else if (pessoas[i].tipo == 'J' || pessoas[i].tipo == 'j'){
            printf("CNPJ: ");
            scanf(" %s", pessoas[i].documento.cnpj);
        }
        // Captura da idade
        printf("Idade: ");
        scanf("%d", &pessoas[i].idade);
        printf("\n");
    }

    // Exibindo os dados armazenados
    printf("Dados Armazenados:\n");
    for (i = 0; i < NUM_PESSOAS; i++) {
        printf("Pessoa/Empresa %d:\n", i + 1);
        printf("Nome: %s\n", pessoas[i].nome);
        printf("Endereço: %s, Nº %d, %s\n", pessoas[i].endereco.rua, pessoas[i].endereco.numero, pessoas[i].endereco.cidade);
        printf("Tipo: %s\n", (pessoas[i].tipo == 'F') ? "Pessoa Física" : "Pessoa Jurídica");
		
        // Exibe CPF ou CNPJ dependendo do tipo
        if (pessoas[i].tipo == 'F') {
            printf("CPF: %s\n", pessoas[i].documento.cpf);
        } else if (pessoas[i].tipo == 'J') {
            printf("CNPJ: %s\n", pessoas[i].documento.cnpj);
        }
        printf("Idade: %d\n", pessoas[i].idade);
        printf("\n");    
	}  
    }



