#include <stdio.h>

int main() {
    int numero;
    char caractere;
    float nota1, nota2, media;
    float fahrenheit, celsius;
    float base, altura, area;

    // 1. Ler um número e exibir a frase: “O número digitado foi: ”
    printf("Digite um número: ");
    scanf("%d", &numero);
    printf("O número digitado foi: %d\n", numero);

    // 2. Solicitar ao usuário para digitar um caractere e exibi-lo de diferentes maneiras
    printf("\nDigite um caractere: ");
    scanf(" %c", &caractere); // Note o espaço antes de %c para evitar problemas de leitura
    printf("Como caractere: %c\n", caractere);
    printf("Como inteiro: %d\n", caractere);
    printf("Como hexadecimal: %x\n", caractere);

    // 3. Ler duas notas e exibir a média aritmética
    printf("\nDigite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    media = (nota1 + nota2) / 2;
    printf("A média aritmética é: %.2f\n", media);

    // 4. Ler uma temperatura em graus Fahrenheit e apresentá-la convertida em graus Celsius
    printf("\nDigite a temperatura em graus Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) * (5.0 / 9);
    printf("A temperatura em graus Celsius é: %.2f\n", celsius);

    // 5. Ler a altura e a base de um triângulo e calcular sua área
    printf("\nDigite a base do triângulo: ");
    scanf("%f", &base);
    printf("Digite a altura do triângulo: ");
    scanf("%f", &altura);
    area = (base * altura) / 2;
    printf("A área do triângulo é: %.2f\n", area);

    return 0;
}
