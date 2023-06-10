#include <stdio.h>

#define NUM_VOOS 10

int main() {
	int i;
    int voos[NUM_VOOS] = {0}; // Inicializa todos os voos como disponíveis

    printf("BEM-VINDO À RESERVA DE VOOS\n");

    while (1) {
        int opcao;
        printf("\nEscolha uma opcao:\n");
        printf("1 - Listar voos disponiveis\n");
        printf("2 - Reservar um voo\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\nVOOS DISPONIVEIS:\n");
                for ( i = 0; i < NUM_VOOS; i++) {
                    if (voos[i] == 0) {
                        printf("Voo %d\n", i + 1);
                    }
                }
                break;
            case 2:
                printf("\nDigite o numero do voo desejado: ");
                int numVoo;
                scanf("%d", &numVoo);

                if (numVoo < 1 || numVoo > NUM_VOOS) {
                    printf("Voo invalido.\n");
                } else if (voos[numVoo - 1] == 1) {
                    printf("Voo nao disponivel.\n");
                } else {
                    voos[numVoo - 1] = 1;
                    printf("Voo %d reservado com sucesso.\n", numVoo);
                }
                break;
            case 0:
                printf("Encerrando o programa.\n");
                return 0;
            default:
                printf("Opcao invalida. Por favor, tente novamente.\n");
                break;
        }
    }

    return 0;
}

