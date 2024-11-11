#include <stdio.h>
#define COLUNA 8
#define LINHA 8

void imprimirTabuleiro(char x[LINHA][COLUNA]);

void imprimirTabuleiro(char x[LINHA][COLUNA]) {
    printf("    A B C D E F G H\n");
    printf("-----------------------\n");

    for (int i = 0; i < LINHA; i++) {
        printf("%d | ", i + 1);

        for (int j = 0; j < COLUNA; j++) {
            // Alterna entre quadrados claros e escuros
            if ((i + j) % 2 == 0) {
                printf("%c ", x[i][j]); // Quadrado claro
            } else {
                printf("%c ", x[i][j]); // Quadrado escuro
            }
        }
        printf("| %d\n", i + 1);
    }

    printf("-----------------------\n");
    printf("    A B C D E F G H\n");
}
