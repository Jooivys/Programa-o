#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
  
    setlocale(LC_ALL, "portuguese");
    char nome_completo[256], copia_nome[256];

    printf("Digite seu nome completo: ");
    scanf("%[ -~]", &nome_completo);
	 
    strcpy(copia_nome, nome_completo);

    printf("Nome original:%s\n", nome_completo);
    printf("Cópia do nome:%s\n", copia_nome);

}

