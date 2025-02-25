#include <stdio.h>
#include <locale.h> 
/*nao sei porque,mas caso apos colocar o valor desejado,
tem que colocar uma letra e dar enter para ir pro proximo codigo*/
int main(){
	int ano,idade,mes,dias,lanchonete,i;
	char *categoria;
	
	setlocale (LC_ALL, "portuguese");
	
	printf("Digite o ano em que você nasceu: \n");
	scanf("%d ",&ano);
	idade = (2024-ano);
	if (idade >= 5 && idade <= 7) {
        categoria = "Infantil A";
    } else if (idade >= 8 && idade <= 10) {
        categoria = "Infantil B";
    } else if (idade >= 11 && idade <= 13) {
        categoria = "Juvenil A";
    } else if (idade >= 14 && idade <= 17) {
        categoria = "Juvenil B";
    } else if (idade > 17) {
        categoria = "Sênior";
    } else {
        categoria = "Inexistente";
    }
    scanf("%d, %s ",&idade,&categoria);
    printf("Nadador de idade %d é da categoria %s\n",idade,categoria); 
    getchar();
		
	printf("Digite o número do mês: ");
    scanf("%d ", &mes);
    switch (mes) {
        case 1: // Janeiro
        case 3: // Março
        case 5: // Maio
        case 7: // Julho
        case 8: // Agosto
        case 10: // Outubro
        case 12: // Dezembro
            dias = 31;
            break;
        case 4: // Abril
        case 6: // Junho
        case 9: // Setembro
        case 11: // Novembro
            dias = 30;
            break;
        case 2: // Fevereiro
            dias = 28;
            break;
        default:
            printf("Mês inválido \n");
    printf("O mês %d tem %d dias \n", mes, dias);
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
		printf("O valor digitado está errado ou não existe\n");
	}
	getchar();
	
	for(i = 0; i <= 500; i++) {
        printf("%d:I will not throw paper airplanes in class\n", i);
    }
    getchar();
    
	while(i <= 500) {
        printf("%d: Eu não vou mais jogar aviõezinhos de papel na sala de aula.\n", i);
        i++;
    }
    getchar();

	do {
        printf("%d:I will not throw paper airplanes in class\n", i);
        i++;
    } while(i <= 500);
    getchar();
}
