/* Implementação solicitada de algoritmo Bubblesort */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char vetorA[10]; // Array para armazenar as letras
    int i, j;
    char troca;

    for (i = 0; i < 10; i++) {
        printf("Digite a %d letra: ", i);
        scanf(" %c", &vetorA[i]); // Lê uma letra do usuário
        fflush(stdin);
    }

    for (i = 0; i < 9; i++) {
        for (j = i + 1; j < 10; j++) {
            if (vetorA[i] > vetorA[j]) { // Compara as letras adjacentes
                troca = vetorA[i];
                vetorA[i] = vetorA[j]; // Realiza a troca das letras
                vetorA[j] = troca;
            }
        }
    }

    printf("\nVETOR ORDENADO:\n");
    for (i = 0; i < 10; i++) {
        printf("%c - ", vetorA[i]); // Imprime as letras em ordem alfabética
    }

    return 0;
}