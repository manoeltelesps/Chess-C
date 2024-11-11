#include <stdio.h>
#include "funcoes.h"

#define COLUNA 8
#define LINHA 8


int main (){

    
    char tabuleiro[LINHA][COLUNA] = {
        {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
        {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'}
    };
    
    char peca, col;
    int lin;

    imprimirTabuleiro(tabuleiro);

    printf("\n\nFaca sua jogada: ");
    scanf("%c%c%d", &peca,&col,&lin);

    
   
   

    return 0;
}

                             







