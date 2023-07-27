#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int *list = malloc(3 * sizeof(int));
	int i;

	if(list == NULL ) 	/*Checar se o valor da lista � nulo*/
	{ 
	
		return 1;
	}
	/*opera��o matem�tica de ponteiro - V� para o endere�o *list e adicione "tal numero" l� (1,2,3)
	*list = 1; - primeiro endere�o
	*(list + 1) = 2; - segundo endere�o
	*(list + 2) = 3; - terceiro endere�o
	*/
	
	printf("Primeira lista: \n");
	
	list[0] = 1;
	list[1] = 2;
	list[2] = 3;
	
		for(i = 0; i<3; i++){
		printf("%d\n", list[i]);
	}
	int *temp = malloc (4 * sizeof(int)); /* Alocando espa�o dinamicamente para mais inteiros,no caso,4. */
	
	if (temp == NULL)
	{
		free(list);
		return 1;
	}
	
	for(i = 0; i<3; i++)
	{
		temp[i] = list [i]; /*Copiando os vallores para esse peda�o de mem�ria tempor�rio (temp) os valores da lista original*/
	}
	
	temp[3] = 4;
	free(list); /*Liberar lista original*/
	
	
	list = temp; /* Atualizar lista antiga p/ apontar para nova lista - indicando o endere�o p/ esse novo pede�o de mem�ria*/
	
		printf(" \nSegunda lista: ");
	for(i = 0; i<4; i++)
	{
		printf("\n%d", list[i]);
	}
	
	return 0;
}

/* Nesse c�digo o malloc foi utilizado para alocar mem�ria de forma din�mica. Se uma array fosse declarado (aloca��o est�tica) como forma de alocar espa�o, seria necess�rio reescrever 
o c�digo, caso alguma altera��o em seu tamanho fosse solicitado.*/
