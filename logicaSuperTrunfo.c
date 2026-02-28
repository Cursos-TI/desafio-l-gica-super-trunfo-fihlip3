#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    // Carta 1
    char estado1 = 'A';
    char codigo1[] = "A01";
    char cidade1[] = "Blumenau";
    unsigned long int populacao1 = 338000; 
    float area1 = 518.49;
    float pib1 = 17.0; 
    int pontosTuristicos1 = 15;
    float densidade1;
    float pibPerCapita1;

    // Carta 2
    char estado2 = 'B';
    char codigo2[] = "B02";
    char cidade2[] = "São Paulo";
    unsigned long int populacao2 = 12250000;
    float area2 = 1521.00;
    float pib2 = 1066.82; 
    int pontosTuristicos2 = 50;
    float densidade2;
    float pibPerCapita2;

    // Cálculos
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0) / (float)populacao1;
    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0) / (float)populacao2;
    
    // Exibição dos dados da cidade
    printf("\n================XXX================\n");
    printf("          RESUMO DAS CARTAS\n");
    printf("================XXX================\n\n");

    printf("==x== Carta 1: ==x==\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n\n", pontosTuristicos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f reais\n", pibPerCapita1);

    printf("==x== Carta 2: ==x==\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f reais\n", pibPerCapita2);

    printf("\n================XXX================\n");
    printf("          BATALHA DE CARTAS\n");
    printf("================XXX================\n\n");
    printf("Comparando a população das duas cidades...\n");
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } 
    else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } 
    else {
        printf("Resultado: Empate! As duas cidades têm a mesma população.\n");
    }
    return 0;
}