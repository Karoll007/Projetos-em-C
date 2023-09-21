#include <stdio.h>
#include <string.h>

// Função para realizar a troca de duas strings
void trocar(char *a, char *b) {
    char temp[50];
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
}

// Função para realizar o QuickSort de um vetor de strings
void quickSort(char vetor[][50], int esq, int dir, int *trocas, int *comparacoes) {
    if (esq < dir) {
        int i = esq, j = dir;
        char pivo[50];
        strcpy(pivo, vetor[esq]);

        while (i < j) {
            while (strcmp(vetor[i], pivo) <= 0 && i < dir) {
                i++;
                (*comparacoes)++;
            }
            while (strcmp(vetor[j], pivo) > 0) {
                j--;
                (*comparacoes)++;
            }
            if (i < j) {
                trocar(vetor[i], vetor[j]);
                (*trocas)++;
            }
        }

        trocar(vetor[esq], vetor[j]);
        (*trocas)++;

        quickSort(vetor, esq, j - 1, trocas, comparacoes);
        quickSort(vetor, j + 1, dir, trocas, comparacoes);
    }
}

int main() {
	
	int i;
    char palavras[][50] = {"maca", "banana", "pera", "uva", "laranja", "abacaxi", "limao", "manga", "abacate", "kiwi", "cereja", "morango", "pessego", "goiaba", "melancia", "framboesa", "amora", "caqui", "figo", "papaya"};
    int tamanho = sizeof(palavras) / sizeof(palavras[0]);
    int trocas = 0;
    int comparacoes = 0;

    quickSort(palavras, 0, tamanho - 1, &trocas, &comparacoes);

    printf("Numero de trocas: %d\n", trocas);
    printf("Numero de comparacoes: %d\n", comparacoes);

    printf("Vetor ordenado:\n");
    for (i = 0; i < tamanho; i++) {
        printf("(%d) %s\n", i + 1, palavras[i]);
    }

    // Encontrar a mediana
    char mediana[50];
    if (tamanho % 2 == 0) {
        strcpy(mediana, palavras[tamanho / 2 - 1]);
    } else {
        strcpy(mediana, palavras[tamanho / 2]);
    }
    printf("Mediana: %s\n", mediana);

    // Gerar arquivo de saída
    FILE *arquivo = fopen("saida.txt", "w");
    fprintf(arquivo, "Numero de trocas: %d\n", trocas);
    fprintf(arquivo, "Numero de comparacoes: %d\n", comparacoes);
    fprintf(arquivo, "Vetor ordenado:\n");
    for (i = 0; i < tamanho; i++) {
        fprintf(arquivo, "(%d) %s\n", i + 1, palavras[i]);
    }
    fprintf(arquivo, "Mediana: %s\n", mediana);
    fclose(arquivo);

    return 0;
}

