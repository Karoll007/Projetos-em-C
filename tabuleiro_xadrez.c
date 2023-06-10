#include <stdio.h>

#define BOARD_SIZE 8

void exibirTabuleiro(char tabuleiro[BOARD_SIZE][BOARD_SIZE]) {
    printf("  a b c d e f g h\n"); // Letras das colunas
    
    int i,j;
    
    for ( i = 0; i < BOARD_SIZE; i++) {
        printf("%d ", BOARD_SIZE - i); // N�meros das linhas
        
        for (j = 0; j < BOARD_SIZE; j++) {
            printf("%c ", tabuleiro[i][j]);
        }
        
        printf("%d\n", BOARD_SIZE - i); // N�meros das linhas
    }
    
    printf("  a b c d e f g h\n"); // Letras das colunas
}

int main() {
	
	int i,j;
    // Tabuleiro vazio
    char tabuleiro[BOARD_SIZE][BOARD_SIZE];
    
    // Preencher o tabuleiro com espa�os em branco
    for (i = 0; i < BOARD_SIZE; i++) {
        for ( j = 0; j < BOARD_SIZE; j++) {
            tabuleiro[i][j] = ' ';
        }
    }
    
    // Colocar as pe�as iniciais
    char pecas[8] = {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'};
    
    for (i = 0; i < BOARD_SIZE; i++) {
        tabuleiro[0][i] = pecas[i]; // Pe�as pretas na primeira linha
        tabuleiro[1][i] = 'p'; // Pe�es pretos na segunda linha
        tabuleiro[BOARD_SIZE - 2][i] = 'P'; // Pe�es brancos na pen�ltima linha
        tabuleiro[BOARD_SIZE - 1][i] = pecas[i] - 32; // Pe�as brancas na �ltima linha (letras mai�sculas)
    }
    
    exibirTabuleiro(tabuleiro);
    
    return 0;
}

