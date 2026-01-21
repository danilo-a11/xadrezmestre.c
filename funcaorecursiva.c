#include <stdio.h>

/* ================= TORRE (Recursividade) ================= */
/* Torre move 5 casas para a direita */
void moverTorre(int casas) {
    if (casas == 0) {
        return; // caso base
    }

    printf("Direita\n");
    moverTorre(casas - 1); // chamada recursiva
}

/* ================= RAINHA (Recursividade) ================= */
/* Rainha move 8 casas para a esquerda */
void moverRainha(int casas) {
    if (casas == 0) {
        return; // caso base
    }

    printf("Esquerda\n");
    moverRainha(casas - 1);
}

/* ================= BISPO ================= */
/*
   Bispo:
   - Implementado com RECURSIVIDADE
   - E também com LOOPS ANINHADOS
   - Loop externo = movimento vertical
   - Loop interno = movimento horizontal
*/
void moverBispo(int casas) {
    if (casas == 0) {
        return; // caso base da recursão
    }

    for (int vertical = 1; vertical <= 1; vertical++) { // loop vertical
        for (int horizontal = 1; horizontal <= 1; horizontal++) { // loop horizontal
            printf("Cima\n");
            printf("Direita\n");
        }
    }

    moverBispo(casas - 1); // chamada recursiva
}

/* ================= CAVALO (Loops Complexos) ================= */
/*
   Cavalo move em "L":
   - 2 casas para cima
   - 1 casa para a direita
   - Uso de loops aninhados
   - Uso de continue e break
*/
void moverCavalo() {
    for (int vertical = 1; vertical <= 3; vertical++) {

        if (vertical == 3) {
            break; // garante apenas 2 movimentos verticais
        }

        printf("Cima\n");

        for (int horizontal = 1; horizontal <= 2; horizontal++) {

            if (horizontal == 1 && vertical == 1) {
                continue; // controla fluxo do loop
            }

            if (horizontal == 2) {
                printf("Direita\n");
            }
        }
    }
}

/* ================= MAIN ================= */
int main() {

    /* Valores definidos diretamente no código */
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    printf("=== Movimento da Torre ===\n");
    moverTorre(casasTorre);

    printf("\n=== Movimento do Bispo ===\n");
    moverBispo(casasBispo);

    printf("\n=== Movimento da Rainha ===\n");
    moverRainha(casasRainha);

    printf("\n=== Movimento do Cavalo ===\n");
    moverCavalo();

    return 0;
}