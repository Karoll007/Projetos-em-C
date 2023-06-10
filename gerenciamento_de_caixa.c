#include <stdio.h>

#define MAX_TRANSACOES 100

struct Transacao {
    char tipo;
    float valor;
};

int main() {
	int i;
    struct Transacao transacoes[MAX_TRANSACOES];
    int numTransacoes = 0;
    float saldo = 0;
    char opcao;

    do {
        printf("\nSISTEMA DE GERENCIAMENTO DE CAIXA\n");
        printf("-------------------------------\n");
        printf("Escolha uma opcao:\n");
        printf("1 - Registrar entrada de dinheiro\n");
        printf("2 - Registrar saida de dinheiro\n");
        printf("3 - Exibir saldo atual\n");
        printf("4 - Exibir historico de transacoes\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf(" %c", &opcao);

        switch (opcao) {
            case '1':
                printf("Digite o valor da entrada: ");
                scanf("%f", &transacoes[numTransacoes].valor);
                transacoes[numTransacoes].tipo = 'E';
                saldo += transacoes[numTransacoes].valor;
                numTransacoes++;
                printf("Entrada registrada com sucesso!\n");
                break;
            case '2':
                printf("Digite o valor da saida: ");
                scanf("%f", &transacoes[numTransacoes].valor);
                transacoes[numTransacoes].tipo = 'S';
                saldo -= transacoes[numTransacoes].valor;
                numTransacoes++;
                printf("Saida registrada com sucesso!\n");
                break;
            case '3':
                printf("Saldo atual: %.2f\n", saldo);
                break;
            case '4':
                printf("\nHISTORICO DE TRANSACOES\n");
                printf("-----------------------\n");
                for (i = 0; i < numTransacoes; i++) {
                    printf("Transacao %d: ", i+1);
                    if (transacoes[i].tipo == 'E') {
                        printf("Entrada de %.2f\n", transacoes[i].valor);
                    } else {
                        printf("Saida de %.2f\n", transacoes[i].valor);
                    }
                }
                break;
            case '0':
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opcao invalida. Por favor, tente novamente.\n");
                break;
        }
    } while (opcao != '0');

    return 0;
}

