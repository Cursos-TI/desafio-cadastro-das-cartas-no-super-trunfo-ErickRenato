#include <stdio.h>

int main(){

//FIZ O CÓDIGO EM INT PARA QUE PREENCHESSE ALTOMÁTICO O CÓDIGO DA CARTA

    char estado[10], cidade[20], CIDADE[20], ESTADO[10];
    int populacao, turismo, codigo, POPULACAO, TURISMO, CODIGO;
    float area, pib, AREA, PIB;

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
    printf("População: %d\n", populacao);
    printf("Área: %.1f\n", area);
    printf("PIB: %.1f\n", pib);
    printf("Número de pontos turísticos: %d", turismo);


    //CARTA 2
    printf("\n\nCarta 2:\n");

    printf("Estado: %s\n", ESTADO);
    printf("Código da carta: %s0%d\n", ESTADO, CODIGO);
    printf("Nome da cidade: %s\n", CIDADE);
    printf("População: %d\n", POPULACAO);
    printf("Área: %.1f\n", AREA);
    printf("PIB: %.1f\n", PIB);
    printf("Número de pontos turísticos: %d\n", TURISMO);

    return 0;
}