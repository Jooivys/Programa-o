#include <stdio.h> 

int main()
{
   printf("Hello Word\n"); //nao muda linha 
   printf("Padaria\n"); // 'n\' é uma quebra de linha 
   puts("Hello Word");//muda de linha automaticamente 
   
   int i=10;
   float r=3.145; // uso de sitema numerico americano( . vira ,)(, vira .)
   printf("Inteiro:%d, Real:%f \n",i,r); // '%-alguma letra-' é onde as variaveis serao impressas,onsulte a tabela para saber qual letra colocar
   // caso erre a ordem das variaves, o codigo nao entendera
   
   int num;
   printf("Digite um valor:");
   scanf("%d",&num);// se nao tiver '&' o scanf nao roda, ele serve para guardar um dado,necessario pra um input
   printf("O valor vai ser,magicamente:%d, igual oque voce digitou",num);
   getchar(); // usado para parar o codigo em uma certa parte
 
} 
