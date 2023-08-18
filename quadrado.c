#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int largura,altura,j,i;
	
	
	printf("Digite a largura do quadrado: \n");
	scanf("%d",&largura);
	
	printf("Digite a altura do quadrado: \n");
	scanf("%d",&altura);
	
	printf("\n");
	
	for (i=1; i<= largura; i++)
	{
		printf("*");	
	}
	
	printf("\n");
	
	for (i = 1; i <= altura; i++ )
	{
		printf("*");
			
		for ( j = 2; j < largura; j++)
		{
			printf(" ");
		}
		printf("*\n");	
	}
	
	for (i=1; i<= largura; i++)
	{
		printf("*");	
	}
	
	
	
	
	return 0;
}
