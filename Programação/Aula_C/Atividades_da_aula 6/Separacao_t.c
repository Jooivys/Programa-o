#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
   
	setlocale(LC_ALL, "portuguese");
    char nome1[256], nome2[256]; 
	char nome_completo[100]="";

    printf("Digite o primeiro nome: ");
    scanf("%s", &nome1);
    printf("Digite o segundo nome: ");
    scanf("%s", &nome2);

    strcat(nome_completo, nome1);
    strcat(nome_completo, nome2);
    printf("O tamanho do nome completo é: %d\n", strlen(nome_completo));
  
    printf("Nome completo com letras separadas é:\n");
    for (int i = 0; i < strlen(nome_completo); i++) {
        printf("%c\t", nome_completo[i]);
    }

  
}

