#include <stdio.h>

int main(){

//FIZ O CÓDIGO EM INT PARA QUE PREENCHESSE ALTOMÁTICO O CÓDIGO DA CARTA

    char estado[10], cidade[20], CIDADE[20], ESTADO[10];
    int populacao, turismo, codigo, POPULACAO, TURISMO, CODIGO;
    float area, pib, AREA, PIB;
    float dp, ppc, DP, PPC;

    //CARTA 1
    printf("Carta 1:\n");

    printf("Uma letra de A a H para representar de 1 a 8 estados: ");
    scanf(" %s", estado);

    printf("Número de 01 a 04 para representar o código da carta: ");
    scanf("%d", &codigo);

    printf("Nome da cidade: ");
    scanf("%s", cidade);

    printf("Número de habitantes da cidade: ");
    scanf("%d", &populacao);

    printf("Área da cidade em quilometros quadrados: ");
    scanf("%f", &area);

    printf("O PIB da cidade: ");
    scanf("%f", &pib);

    printf("A quantidade de pontos turísticos da cidade: ");
    scanf("%d", &turismo);

//CARTA 2
    printf("\n\nCarta 2:\n");

    printf("Uma letra de A a H para representar de 1 a 8 estados: ");
    scanf(" %s", ESTADO);

    printf("Número de 01 a 04 para representar o código da carta: ");
    scanf("%d", &CODIGO);

    printf("Nome da cidade: ");
    scanf("%s", CIDADE);

    printf("Número de habitantes da cidade: ");
    scanf("%d", &POPULACAO);

    printf("Área da cidade em quilometros quadrados: ");
    scanf("%f", &AREA);

    printf("O PIB da cidade: ");
    scanf("%f", &PIB);

    printf("A quantidade de pontos turísticos da cidade: ");
    scanf("%d", &TURISMO);

    //CARTA 1
    printf("\nCarta 1:\n");

    printf("Estado: %s\n", estado);
    printf("Código da carta: %s0%d\n",estado, codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %d Habitantes\n", populacao);
    printf("Área: %.1f Km2\n", area);
    printf("PIB: %.1f Reais\n", pib);
    printf("Número de pontos turísticos: %d Pontos Turisticos", turismo);


    //CARTA 2
    printf("\n\nCarta 2:\n");

    printf("Estado: %s\n", ESTADO);
    printf("Código da carta: %s0%d\n", ESTADO, CODIGO);
    printf("Nome da cidade: %s\n", CIDADE);
    printf("População: %d Habitantes\n", POPULACAO);
    printf("Área: %.1f Km2\n", AREA);
    printf("PIB: %.1f Reais\n", PIB);
    printf("Número de pontos turísticos: %d Pontos Turisticos\n\n\n", TURISMO);

   
    //CALCULOS DE DENSIDADE POPULACIONAL E PIB PER CAPITA.
    printf("Carta 1:\n");
    dp = (float) (populacao / area);
    ppc = (float) (pib / populacao);

    printf("Densidade populacional: %.2f\n", dp);
    printf("PIB per capita: %.2f\n\n", ppc);

    printf("Carta 2:\n");
    DP = (float) (POPULACAO / AREA);
    PPC = (float) (PIB / POPULACAO);

    printf("Densidade populacional: %.2f\n", DP);
    printf("PIB per capita: %.2f\n\n", PPC);

    return 0;
}