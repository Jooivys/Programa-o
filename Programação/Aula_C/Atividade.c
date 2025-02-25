#include <stdio.h>// permite o uso do printf
#include <

int main()
{
int numint;
char caractere;
float nota1,nota2,media,far,celsius,base,altura,area;

printf("Digite um numero inteiro: ");
scanf("%d", &numint);
printf("O numero digitado foi: %d\n", numint);

printf("Digite um caractere: ");
scanf(" %c", &caractere);
printf("Caractere foi: %c\n", caractere);
printf("O caractere em formato de inteiro: %d\n", caractere);
printf("O caractere em formato hexadecimal: %x\n", caractere);

printf("Digite a primeira nota(NUMERO): ");
scanf("%f", &nota1);
printf("Digite a segunda nota(NUMERO): ");
scanf("%f", &nota2);
media=(nota1+nota2)/2;
printf("A media das duas notas sera: %f\n", media);

printf("Digite a temperatura em graus Fahrenheit: ");
scanf("%f", &far);
celsius=(far-32)*(5.0/9);
printf("A temperatura em graus Celsius sera: %f\n", celsius);

printf("Digite a base do triangulo: ");
scanf("%f", &base);
printf("Digite a altura do triangulo: ");
scanf("%f", &altura);
area=(base*altura)/2;
printf("A area do triangulo sera: %f\n", area);
getchar();

}
