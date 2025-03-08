#include <stdio.h>

int main() {
    int i;

    // Movimento da Torre - 5 casas para a direita (usando for)
    printf("Movimento da Torre:\n");
    for (i = 0; i < 5; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Movimento do Bispo - 5 casas na diagonal para cima e à direita (usando while)
    printf("Movimento do Bispo:\n");
    i = 0;
    while (i < 5) {
        printf("Cima, Direita\n");
        i++;
    }
    printf("\n");

    // Movimento da Rainha - 8 casas para a esquerda (usando do-while)
    printf("Movimento da Rainha:\n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < 8);
    
    int movimentoCavaloBaixo = 2, movimentoCavaloEsquerda = 1;
    // Movimento do Cavalo - 2 casas para baixo e uma para esquerda (usando loops aninhados)
    printf("Movimento do Cavalo:\n");
    for (int i = 0; i < movimentoCavaloBaixo; i++) {
        printf("Baixo\n");
        for (int j = 0; j < movimentoCavaloEsquerda; j++) {
            if (i == movimentoCavaloBaixo - 1) {
                printf("Esquerda\n");
            }
        }
    }
    return 0;
}
