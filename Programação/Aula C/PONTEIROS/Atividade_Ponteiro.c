#include <stdio.h>

int main(void){
	int i = 99, j;
	int *p;
	
	p = &i; /* p = o endereço de memoria do "i", ele não se torna o valor de "i", 
	        ele apenas aponta para a variavel "i", consequentemente apontanto o valor de "i" */
	j = *p + 100; 
	printf("i = %d, j = %d, *p = %d", i , j, *p);
	/*  i = 99 por ser o valor original, j = 199 por "p" apontar para "i" ter virado 99,
	*p = 99 por ter virado o ""i"" */ 

}
