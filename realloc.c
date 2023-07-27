#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int *list = malloc(3 * sizeof(int));
	int i;

	if(list == NULL ) 	/*Checar se o valor da lista � nulo*/
	{ 
	
		return 1;
	}
	printf("Primeira lista: \n");
	
	list[0] = 1;
	list[1] = 2;
	list[2] = 3;
	
		for(i = 0; i<3; i++){
		printf("%d\n", list[i]);
	}
	int *temp = realloc (list, 4 * sizeof(int)); /* realloc - realocar um peda�o de mem�ria 4x o tamanho do int, mas realocar  especificamente a vari�vel "list". */
	
	if (temp == NULL)
	{
		free(list);
		return 1;
	}
	
	temp[3] = 4;
	
	
	
	
	
		printf(" \nSegunda lista: ");
	for(i = 0; i<4; i++)
	{
		printf("\n%d", list[i]);
	}
	
	return 0;
}

/* Nesse c�digo foi utilizado "realloc" para realocar um peda�o ESPEC�FICO de mem�ria (list). Para se ultilizar realloc s�o necess�rios dois argumentos:
o primeiro � o endere�o de um peda�o demem�ria (list). Na linha 24 o endere�o alocado por malloc (linha 7) � devolvido para realloc e indicando o endere�o a ser REdimensionado e
realocado para o tamanho 4. Ao ultilizar o "realloc" torna-se desnecess�rio copiar os valores de uma vari�vel para a vari�vel tempor�ria, realloc copia o antigo no novo de forma
autom�tica. Devolve o endere�o de um novo endere�o de mem�ria grande o suficiente para caber os novos valores.  */

	/*
	for(i = 0; i<3; i++)  - Isso torna-se desnecess�rio, visto que, realloc dar� um peda�o de mem�ria maior al�m de devolver o que voc� j� havia solicitado automaticamente
	{
		temp[i] = list [i] - copiar valores da lista original p/ a lista tempor�ria
	}; 
    */

