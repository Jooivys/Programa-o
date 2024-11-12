#include <stdio.h>
#include <string.h>
#include <locale.h>

void criptografaZENITPOLAR(char *texto) {
	int i;
    
    for (i=0; i<(strlen(texto)); i++) {
        switch (texto[i]) {
            case 'Z': texto[i] = 'P'; break;
            case 'z': texto[i] = 'p'; break;
            case 'E': texto[i] = 'O'; break;
            case 'e': texto[i] = 'o'; break;
            case 'N': texto[i] = 'L'; break;
            case 'n': texto[i] = 'l'; break;
            case 'I': texto[i] = 'A'; break;
            case 'i': texto[i] = 'a'; break;
            case 'T': texto[i] = 'R'; break;
            case 't': texto[i] = 'r'; break;
            case 'P': texto[i] = 'Z'; break;
            case 'p': texto[i] = 'z'; break;
            case 'O': texto[i] = 'E'; break;
            case 'o': texto[i] = 'e'; break;
            case 'L': texto[i] = 'N'; break;
            case 'l': texto[i] = 'n'; break;
            case 'A': texto[i] = 'I'; break;
            case 'a': texto[i] = 'i'; break;
            case 'R': texto[i] = 'T'; break;
            case 'r': texto[i] = 't'; break;
        }
    }
}

int main() {
   
    setlocale(LC_ALL, "portuguese");
    char texto[256];

    printf("String a ser criptografada: ");
    scanf("%[ -~]", &texto);

    criptografaZENITPOLAR(texto);

    printf("String criptografada: %s\n", texto);

    criptografaZENITPOLAR(texto);

    printf("String restaurada: %s\n", texto);

}

