#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "portuguese");
    char nome_completo[256];
    int i;
    
    printf("Digite seu nome completo: ");
    scanf("%[ -~]", &nome_completo);

    for (i=0;i<(strlen(nome_completo));i+=2) {
        char temp = nome_completo[i];
        nome_completo[i] = nome_completo[i + 1];
        nome_completo[i + 1] = temp;
    }
    printf("Nome invertido duas a duas: %s\n", nome_completo);
}

