#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
    int matriz[3][3], i, j;
    
    
    
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		    printf("Digite o valor na linha %d e coluna %d da matriz: ",i+1,j+1);
		    scanf("%d", &matriz[i][j]); 
		}
	}
	
	for(i=0;i<3;i++){
		for (j=0;j<3;j++){
			if (j<2){
			printf("%d - ", matriz[i][j]);
			}else{
				printf("%d", matriz[i][j]);
			}
		}
		printf("\n");
	}
	
}
