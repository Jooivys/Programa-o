#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    
    setlocale(LC_ALL, "portuguese");
    char str1[256], str2[256];
    int result;

    printf("Digite a primeira palavra:");
    scanf("%s", &str1);
    printf("Digite a segunda palavra:");
    scanf("%s", &str2);

    result = strcmp(str1, str2);

    if (result == 0) {
        printf("As palavras são iguais \n");
    } else if (result < 0) {
        printf("A primeira palavra é menor que a segunda \n");
    } else {
        printf("A primeira palavra é maior que a segunda \n");
    }

}

