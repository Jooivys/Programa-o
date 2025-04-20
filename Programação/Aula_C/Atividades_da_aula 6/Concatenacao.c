#include <stdio.h>
#include <locale.h>
#include <string.h> 

int main()
{
	setlocale(LC_ALL, "portuguese");
	char primeiro_nome[256],nome_do_meio[256],ultimo_nome[256]; //256 � o tamanho maximo de uma str
	char nome_completo[256]="";// usar isso para nao ter chance de dar erro
	
	printf("Digite o primerio nome:");
	scanf("%s", &primeiro_nome);
	printf("Digite o nome do meio:");
	scanf("%s", &nome_do_meio);
	printf("Digite o ultimo nome:");
	scanf("%s", &ultimo_nome);
	
	strcat(nome_completo, primeiro_nome);  //primeira variavel � onde ser� somada as outras
    strcat(nome_completo, " "); //dar espa�o
    strcat(nome_completo, nome_do_meio);  
    strcat(nome_completo, " "); //dar espa�o
    strcat(nome_completo, ultimo_nome);
    
    printf("Nome completo:%s\n", nome_completo);
 printf()
}

