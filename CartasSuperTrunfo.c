#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    char estadoA , estadoB;
    char codigo_cartaA[4] , codigo_cartaB[4];
    char cidadeA[20], cidadeB[20];
    int populacaoA, populacaoB;
    float areaA, areaB;
    float pibA, pibB;
    int pontos_turisticosA, pontos_turisticosB;
    float densidade_Demografica1 , densidade_Demografica2;
    float percapita1 , percapita2 ;
    int duelo;

// PREENCHIMENTO DE CADASTRO CARTA 1.

    printf("CADASTRO CARTA 1:\n");
    printf("Insira estado carta: ");
    scanf(" %c", &estadoA);
    printf("Insira codigo da carta: ");
    scanf(" %s", &codigo_cartaA);
    printf("Nome da Cidade: ");
    scanf(" %s", &cidadeA);
    printf("População: ");
    scanf(" %d", &populacaoA);
    printf("Area km: ");
    scanf(" %f", &areaA);
    printf("PIB: ");
    scanf(" %f", &pibA);
    printf("Numero de pontos turísticos: ");
    scanf(" %d", &pontos_turisticosA);
    printf("\n\n");

    // PREENCHIMENTO DE CADASTRO CARTA 2.

    printf("CADASTRO CARTA 2:\n");
    printf("Insira estado carta: ");
    scanf(" %c", &estadoB);
    printf("Insira codigo da carta: ");
    scanf(" %s", &codigo_cartaB);
    printf("Nome da Cidade: ");
    scanf(" %s", &cidadeB);
    printf("População: ");
    scanf(" %d", &populacaoB);
    printf("Area km: ");
    scanf(" %f", &areaB);
    printf("PIB: ");
    scanf(" %f", &pibB);
    printf("Numero de pontos turísticos: ");
    scanf(" %d", &pontos_turisticosB);
    printf("\n\n");

    //CALUCULOS DE ATRIBUTOS DENSIDADE POPULACIONAL E PIB PER CAPITA
    densidade_Demografica1 =  (float) populacaoA / areaA ;
    percapita1 = ( float) pibA / populacaoA ;
    densidade_Demografica2 =  (float) populacaoB / areaB ;
    percapita2 = ( float) pibB / populacaoB ;


    // IMPRESSAO DE DADOS DE CADA CARTA 1

    printf("CARTA 1\n");
    printf("Estado: %c\n", estadoA);
    printf("Codigo: %s\n", codigo_cartaA);
    printf("Cidade: %s\n", cidadeA);
    printf("População: %d\n", populacaoA);
    printf("Area km: %.2f\n", areaA);
    printf("Densidade demografica: %.1f\n", densidade_Demografica1);
    printf("PIB: %.3f\n", pibA);
    printf("Pib per capita: %.3f\n", percapita1);
    printf("Pontos Turisticos: %d\n", pontos_turisticosA);
    printf("\n");

    // IMPRESSAO DE DADOS DE CADA CARTA 2

    printf("CARTA 2\n");
    printf("Estado: %c\n", estadoB);
    printf("Codigo: %s\n", codigo_cartaB);
    printf("Cidade: %s\n", cidadeB);
    printf("População: %d\n", populacaoB);
    printf("Area km: %.2f\n", areaB);
    printf("Densidade demografica: %.1f\n", densidade_Demografica2);
    printf("PIB: %.3f\n", pibB);
    printf("Pib per capita: %.3f\n", percapita2);
    printf("Pontos Turisticos: %d\n", pontos_turisticosB);
    printf("\n");
}
