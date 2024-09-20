#include <stdio.h> 
#include <locale.h>

int main(){
	
	setlocale (LC_ALL, "portuguese");
    int num1,num2,result;
    char op;
    
    printf("Digite o primeiro numero: ");
	scanf("%d",&num1);
	fflush(stdin);
	printf("Digite o segundo numero: ");
	scanf("%d",&num2);
	fflush(stdin);
	
    printf("Escolha a operação desejada(+),(-),(*),(/): ");
	scanf("%s",&op);
	fflush(stdin);
	switch (op){
		case '+':
			result=(num1+num2);
			printf("O resultado da soma é %d",result);
		break;
		case '-':
			result=(num1-num2);
			printf("O resultado da subtração é %d",result);
		break;
		case '*':
			result=(num1*num2);
			printf("O resultado da multiplicação é %d",result);
		break;
		case '/':
			result=(num1/num2);
			printf("O resultado da divisão é %d",result);
		break;	
		default:
	        printf("Nenhuma opção foi escolhida");
	}

