#include <stdio.h>

int main() {

    /* ===== Carta 1 - São Paulo ===== */
    char estado1[] = "Sao Paulo";
    int codigoCarta1 = 1;
    char cidade1[] = "Sao Paulo";
    int populacao1 = 12300000;
    float area1 = 1521.11;
    float pib1 = 828000.50;
    int pontosTuristicos1 = 35;

    float densidade1 = (float) populacao1 / area1;
    float pibPerCapita1 = pib1 / (float) populacao1;

    /* Super Poder Carta 1 */
    float superPoder1 =
        (float) populacao1 +
        area1 +
        pib1 +
        (float) pontosTuristicos1 +
        pibPerCapita1 +
        (1.0f / densidade1);

    /* ===== Carta 2 - Rio de Janeiro ===== */
    char estado2[] = "Rio de Janeiro";
    int codigoCarta2 = 2;
    char cidade2[] = "Rio de Janeiro";
    int populacao2 = 6700000;
    float area2 = 1200.25;
    float pib2 = 364000.75;
    int pontosTuristicos2 = 50;

    float densidade2 = (float) populacao2 / area2;
    float pibPerCapita2 = pib2 / (float) populacao2;

    /* Super Poder Carta 2 */
    float superPoder2 =
        (float) populacao2 +
        area2 +
        pib2 +
        (float) pontosTuristicos2 +
        pibPerCapita2 +
        (1.0f / densidade2);

    /* ===== COMPARAÇÕES ===== */
    int vencePopulacao = populacao1 > populacao2;
    int venceArea = area1 > area2;
    int vencePIB = pib1 > pib2;
    int vencePontosTuristicos = pontosTuristicos1 > pontosTuristicos2;
    int vencePIBperCapita = pibPerCapita1 > pibPerCapita2;

    /* Para densidade: MENOR vence */
    int venceDensidade = densidade1 < densidade2;

    /* Super Poder: MAIOR vence */
    int venceSuperPoder = superPoder1 > superPoder2;

    /* ===== RESULTADOS ===== */
    printf("=== RESULTADO DAS COMPARACOES ===\n");
    printf("Populacao: %d\n", vencePopulacao);
    printf("Area: %d\n", venceArea);
    printf("PIB: %d\n", vencePIB);
    printf("Pontos Turisticos: %d\n", vencePontosTuristicos);
    printf("PIB per Capita: %d\n", vencePIBperCapita);
    printf("Densidade Populacional: %d\n", venceDensidade);
    printf("Super Poder: %d\n", venceSuperPoder);

    return 0;
}