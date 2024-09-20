#include <stdio.h> 
#include <locale.h> // serve para o programa ler os caracteres especiais

int main(){
	
	setlocale (LC_ALL, "portuguese");// tradutor dos caracteres especiais, se deixar vazio ele usa o da maquina 
	float not1,not2,soma,nota1,nota2,media;
	int num1,aluno;
	int lanchonete;
	char resp;

	printf("Nota1: ");
	scanf("%f", &not1);
	printf("Nota2: ");
	scanf("%f", &not2);
	soma = (not1 + not2);
	printf("A soma será %f",soma);
	if (soma>=6.0){
	printf("O aluno foi aprovado\n");
	}
	else if(soma>=1.0 && soma<6.0){ // '&&' = and
	  printf("O aluno esta na final\n");
	}
    else{
    printf("O aluno foi reprovado\n");
	}
	
	printf("Num1: ");
	scanf("%d", &num1);
	if (num1%2==0){ //'%' =divisao
	printf("O numero é par\n");
	}
	else{
	printf("O numero não será par\n");
	}
	getchar();
	
	printf("Escolha uma das opções: ");
	scanf("%d", &lanchonete);
	switch (lanchonete){
		case 1:
		printf("Hamburguer\n");
		break;
		case 2:
		printf("Batata frita\n");
		break;
		case 3:
		printf("Pizza\n");
		break;
		case 4:
		printf("Coxinha\n");
		break;	
		default:
		printf("O valor digitado está errado ou não existe");
	}
	
	for(aluno=1;aluno<=3;aluno++){
	printf("O aluno %d\n",aluno);
	printf("Digite a primeira nota: \n");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: \n");
    scanf("%f", &nota2);
    media = (nota1 + nota2) / 2;
    printf("A média do aluno %d é: %f\n", media,aluno);
	}
	getchar();
	
	do{
	printf("Digite a primeira nota: \n");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: \n");
    scanf("%f", &nota2);
    media = (nota1 + nota2) / 2;
    printf("A média é: %f\n", media);
	printf("Digite s para continuar ou qualquer outro caractere para sair\n");
    scanf("%s", &resp);
    }while (resp=='s');
    getchar();
    
    float num1,num2,num3;
	
	printf("Digite o primeiro número: ");
	scanf("%f",&num1);
	fflush(stdin);
	printf("Digite o segundo número: ");
	scanf("%f",&num2);
	fflush(stdin);
	printf("Digite o terceiro número: ");
	scanf("%f",&num3);
	fflush(stdin);
	
	if(num1>num2 && num1>num3){
		printf("O %.2f é maior",num1);
	}
	else if (num2>num1 && num2>num3){
		printf("O %.2f é maior",num2);
	}
	else if(num3>num1 && num3>num2){
		printf("O %.2f é maior",num3);
	}
	else{
		printf("Os três números são iguais");
	}
	
	int num;
    
    printf("Digite um número inteiro: ");
    scanf("%d",&num);
    
    if(num==1||num==3||num==5){
	printf("O número %d pertence ao conjunto\n",num);
	}else{
		printf("O %d não pertence ao conjunto\n",num);
	}
	fflush(stdin);
    
    printf("Digite um número: ");
	scanf("%d", &num);
	switch (num){
		case 1:
		case 3:
		case 5:
		printf("O número %d faz parte do conjunto 1,3,5\n",num);
		break;	
		default:
		printf("O número %d não faz parte do conjunto 1,3,5 \n",num);
	}
	getchar();
	
	char nome[4];
	int i;
	
	printf("Escreva seu nome: ");
	scanf("%s",&nome); //'%s' porque estamos guardando uma SERIE de caracteres
	for(i=0;i<4;i++){
		printf("Indice do vetor %d é %c\n",i,nome[i]); //usamos '%c' pq estaremos imprimindo UM caractere
	}
	printf("\n");//serve apenas pra dar espaço
	
	for(i=3;i>=0;i--){ //NAO ESQUEÇA DE USAR '--' ao inves de '++'
		printf("Indice do vetor %d é %c\n",i,nome[i]); //usamos '%c' pq estaremos imprimindo UM caractere
	}
	
	
	
}
