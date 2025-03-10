#include <stdio.h>

// Função recursiva para mover a Torre
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para mover a Rainha
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva para mover o Bispo
void moverBispo(int casas) {
    if (casas == 0) return;
    for (int i = 0; i < 1; i++) {
        printf("Cima, Direita\n");
    }

    moverBispo(casas - 1);
}

int main() {
    int i, j;
    const int movimentoTorre = 5;
    const int movimentoBispo = 5;
    const int movimentoRainha = 8;
    const int movimentoCavaloCima = 2;
    const int movimentoCavaloDireita = 1;

    // Movimento da Torre
    printf("Movimento da Torre:\n");
    moverTorre(movimentoTorre);
    printf("\n");

    // Movimento do Bispo (Recursão + Loops Aninhados)
    printf("Movimento do Bispo:\n");
    moverBispo(movimentoBispo);
    printf("\n");

    // Movimento da Rainha
    printf("Movimento da Rainha:\n");
    moverRainha(movimentoRainha);
    printf("\n");

    // Movimento do Cavalo - 2 casas para cima e 1 para a direita (Loops aninhados com múltiplas variáveis e condições)
    printf("Movimento do Cavalo:\n");
    for (i = 0, j = 0; i < movimentoCavaloCima || j < movimentoCavaloDireita; i++, j++) {
        printf("Cima\n");
        if (i == movimentoCavaloCima - 1) {
            printf("Direita\n");
        }
    }
    
    return 0;
}