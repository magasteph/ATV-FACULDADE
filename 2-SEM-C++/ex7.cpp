#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    srand(time(NULL));

    int vetor[10], i, j;

    for ( i = 0; i < 10; i++) {
        vetor[i] = rand() % 100 + 1;
    }

    printf("N�meros gerados aleatoriamente:\n");
    for ( i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }

    int numeroDigitado;
    printf("\n\nDigite um n�mero para verificar se est� no vetor: ");
    scanf("%d", &numeroDigitado);

    int posicao = -1;  
    for ( i = 0; i < 10; i++) {
        if (vetor[i] == numeroDigitado) {
            posicao = i;
            break;  
        }
    }

    if (posicao != -1) {
        printf("O n�mero %d est� no vetor na posi��o %d.\n", numeroDigitado, posicao);
    } else {
        printf("O n�mero %d n�o est� no vetor.\n", numeroDigitado);
    }

    return 0;
}
