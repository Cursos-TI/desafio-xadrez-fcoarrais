#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    
    //Mover a Torre 5 casas para direita

    for(int i = 0; i < 5; i++){

    printf("Torre Direita \n"); //Imprime a direção do Movimento
    }

        
    int i = 1;
    
    // Mover a Rainha 8 casas para esquerda    
    
    do{

        printf("Rainha Esquerda \n", i);
        i++;

    } while (i <= 8);

    // Mover o Bispo 5 casas para Cima, Direita

    while (i <= 5);
    {
        printf("Bispo Cima, Direita \n", i);
        i++;
    }


    return 0;
}
