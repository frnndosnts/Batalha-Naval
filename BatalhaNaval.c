#include <stdio.h>

int main (){
    char Tabuleiro[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 3, 3, 3, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 3, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 3, 0, 3, 0, 0, 0, 0, 0, 0},
        {0, 3, 0, 0, 3, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 3, 0, 0, 0, 0},
        {0, 0, 3, 0, 0, 0, 0, 0, 0, 0},
        {0, 3, 0, 0, 0, 0, 0, 0, 0, 0},
        {3, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };

//Imprimindo o cabeçalho.
    printf("TABULEIRO BATALHA NAVAL\n\n");
    printf("   ");

//Imprimindo o array de char para a linha de A a J.

    for(int i = 0; i < 10; i++) 
    {
        printf(" %c ", Tabuleiro[i]);
    };
    printf("\n");

//Imprimindo a matriz de 10x10 incluindo um for para a coluna com os número de 1 a 10  e for para a linha com o número 0 (água).

    for (int i = 0; i < 10; i++) {  
        printf("%2d ", i + 1);
        for (int j = 0; j < 10; j++) {
            printf(" %d ", tabuleiro[i][j]);
        }
        printf("\n");     
    }   
   
    printf("\n");


}