#include <stdio.h>
#include <string.h>

typedef struct {
    char estado;
    char codigo[4];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} Carta;

void inserirCarta(Carta *carta) {
    printf("\nDigite o estado (A-H): ");
    scanf(" %c", &carta->estado);
    
    printf("Digite o código da carta (%c01 a %c04): ", carta->estado, carta->estado);
    scanf("%s", carta->codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", carta->nomeCidade);

    printf("Digite a população da cidade: ");
    scanf("%d", &carta->populacao);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &carta->area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &carta->pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta->pontosTuristicos);
}

void exibirCarta(Carta carta) {
    printf("\n--- Carta Super Trunfo ---\n");
    printf("Estado: %c\n", carta.estado);
    printf("Código: %s\n", carta.codigo);
    printf("Cidade: %s\n", carta.nomeCidade);
    printf("População: %d\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f\n", carta.pib);
    printf("Pontos Turísticos: %d\n", carta.pontosTuristicos);
    printf("--------------------------\n");
}

int main() {
    Carta carta1, carta2;

    printf("Insira os dados da primeira carta:");
    inserirCarta(&carta1);

    printf("\nInsira os dados da segunda carta:");
    inserirCarta(&carta2);

    printf("\n\nCartas inseridas:");
    exibirCarta(carta1);
    exibirCarta(carta2);

    return 0;
}
