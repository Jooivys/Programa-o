#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "portuguese");
    char nome[256];  
    int i, conta=0, contb=0, contc=0;

    printf("Digite o seu nome completo: ");
    scanf("%[ -~]", nome);  
    printf("%s\n", nome);
    
    for(i=0; i<(strlen(nome)); i++){
        if (nome[i]=='a' || nome[i]=='A'){
            conta++;
        }else if(nome[i]=='b' || nome[i]=='B'){
            contb++;
        }else if(nome[i]=='c' || nome[i]=='C'){
            contc++;
        }
    }
    
    printf("Quantidade de letras 'a' ou 'A': %d\n", conta);
    printf("Quantidade de letras 'b' ou 'B': %d\n", contb);
    printf("Quantidade de letras 'c' ou 'C': %d\n", contc);
}
