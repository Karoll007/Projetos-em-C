#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int numTermos,i;

    printf("Digite o numero de termos desejado: ");
    scanf("%d", &numTermos);

    printf("Sequência de Fibonacci com %d termos:\n", numTermos);

    for ( i = 0; i < numTermos; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}

