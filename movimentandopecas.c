#include <stdio.h>

int main() {

    /* ================= TORRE =================
       A Torre se move em linha reta.
       Simulação: 5 casas para a direita
       Estrutura usada: FOR
    */
    int casasTorre = 5;

    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    /* ================= BISPO =================
       O Bispo se move na diagonal.
       Simulação: 5 casas para cima e à direita
       Estrutura usada: WHILE
    */
    int casasBispo = 5;
    int contadorBispo = 1;

    printf("Movimento do Bispo:\n");
    while (contadorBispo <= casasBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    printf("\n");

    /* ================= RAINHA =================
       A Rainha se move em todas as direções.
       Simulação: 8 casas para a esquerda
       Estrutura usada: DO-WHILE
    */
    int casasRainha = 8;
    int contadorRainha = 1;

    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    return 0;
}