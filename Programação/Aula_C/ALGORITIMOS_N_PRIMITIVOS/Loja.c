#include <stdio.h>
#include <locale.h>

// Tipo de loja, 0 = filial, 1 = matriz 
enum TipoLoja{
    MATRIZ = 0, 
    FILIAL = 1,
};
// Estrutura da loja
struct Loja{
    enum TipoLoja tipo; 
    char nome[50];
    char endereco[100];
    float faturamento;
};

int main(){
    setlocale(LC_ALL, "Portuguese");

    // Daaos de cada tipo de loja
    struct Loja loja1 = {MATRIZ, "Loja Evasão-Fiscal", "Rua Principal, 123 - Centro", 250000.00};
    struct Loja loja2 = {FILIAL, "Loja Evasão-Fiscal", "Avenida Secundária, 321 - Bairro Comercial", 180000.00};
    
    // Dados da Loja MATRIZ
    printf("Dados da loja 1:\n");
    printf("Tipo de Loja: %s\n", loja1.tipo == MATRIZ ? "Matriz" : "Filial"); 
    printf("Nome: %s\n", loja1.nome);
    printf("Endereço: %s\n", loja1.endereco);
    printf("Faturamento: R$ %.2f \n", loja1.faturamento);
    printf("\n");
    
    // Dados da loja FILIAL
    printf("Dados da loja 2:\n");
    printf("Tipo de Loja: %s\n", loja2.tipo == MATRIZ ? "Matriz" : "Filial"); 
    printf("Nome: %s\n", loja2.nome);
    printf("Endereço: %s\n", loja2.endereco);
    printf("Faturamento: R$ %.2f\n", loja2.faturamento);

}

