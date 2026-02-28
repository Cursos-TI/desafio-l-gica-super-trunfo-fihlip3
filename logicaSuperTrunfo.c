#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    // Carta 1
    char pais1[] = "França";
    int populacao1 = 338000; 
    float area1 = 518.49;
    float pib1 = 17.0; 
    int pontosTuristicos1 = 15;
    float densidade1;

    // Carta 2
    char pais2[] = "Brasil";
    int populacao2 = 1225000;
    float area2 = 1521.00;
    float pib2 = 1066.82; 
    int pontosTuristicos2 = 50;
    float densidade2;

    // Variáveis dos switchs e ponteiros para opções e valores
    int opcao1, opcao2;
    float valor1_carta1, valor2_carta1, valor1_carta2, valor2_carta2;
    char *nome_atri1 = ""; 
    char *nome_atri2 = "";

    // Cálculos
    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;
    
    // Resumo dos dados dos paises
    printf("\n================XXX================\n");
    printf("          RESUMO DAS CARTAS\n");
    printf("================XXX================\n\n");

    printf("==x== Carta 1: ==x==\n");
    printf("Nome do país: %s\n", pais1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %.2f hab/km²\n\n", densidade1);

    printf("==x== Carta 2: ==x==\n");
    printf("Nome do país: %s\n", pais2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);

    // Escolha do primeiro atributo
    printf("\n================XXX================\n");
    printf("          BATALHA DE CARTAS\n");
    printf("================XXX================\n\n");
    printf("Escolha o PRIMEIRO atributo para iniciar a batalha:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade demográfica\n\n");
    
    printf("Digite o número da sua escolha: ");
    scanf("%d", &opcao1);

    printf("\n=======================================\n");

    switch (opcao1) {
        case 1: 
            valor1_carta1 = (float)populacao1; valor1_carta2 = (float)populacao2; 
            nome_atri1 = "População"; break;
        case 2: 
            valor1_carta1 = area1; valor1_carta2 = area2; 
            nome_atri1 = "Área"; break;
        case 3: 
            valor1_carta1 = pib1; valor1_carta2 = pib2; 
            nome_atri1 = "PIB"; break;
        case 4: 
            valor1_carta1 = (float)pontosTuristicos1; valor1_carta2 = (float)pontosTuristicos2; 
            nome_atri1 = "Pontos turísticos"; break;
        case 5: 
            valor1_carta1 = densidade1; valor1_carta2 = densidade2; 
            nome_atri1 = "Densidade demográfica"; break;
        default: 
            printf("\nOpção inválida! Reinicie o jogo.\n"); 
            return 1;
    }

    // Escolha do segundo atributo
    printf("\nEscolha o SEGUNDO atributo para iniciar a batalha:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade demográfica\n\n");
    
    printf("Digite o número da sua escolha: ");
    scanf("%d", &opcao2);

    if (opcao1 == opcao2) {
        printf("\nOpção repetida! Reinicie o jogo.\n");
        return 1;
    }
    switch (opcao2) {
        case 1: 
            valor2_carta1 = (float)populacao1; valor2_carta2 = (float)populacao2; 
            nome_atri2 = "População"; break;
        case 2: 
            valor2_carta1 = area1; valor2_carta2 = area2; 
            nome_atri2 = "Área"; break;
        case 3: 
            valor2_carta1 = pib1; valor2_carta2 = pib2; 
            nome_atri2 = "PIB"; break;
        case 4: 
            valor2_carta1 = (float)pontosTuristicos1; valor2_carta2 = (float)pontosTuristicos2; 
            nome_atri2 = "Pontos turísticos"; break;
        case 5: 
            valor2_carta1 = densidade1; valor2_carta2 = densidade2; 
            nome_atri2 = "Densidade demográfica"; break;
        default: 
            printf("\nOpção inválida! Reinicie o jogo.\n"); 
            return 1;
    }

    // Soma dos atributos para a rodada final
    float soma_carta1 = valor1_carta1 + valor2_carta1;
    float soma_carta2 = valor1_carta2 + valor2_carta2;

    printf("\n================XXX================\n");
    printf("             RESULTADOS\n");
    printf("================XXX================\n\n");

    // Determinação dos vencedores de cada atributo
    char *vencedor_atri1 = (opcao1 == 5) ? ((valor1_carta1 < valor1_carta2) ? pais1 : pais2) : ((valor1_carta1 > valor1_carta2) ? pais1 : pais2);
    char *vencedor_atri2 = (opcao2 == 5) ? ((valor2_carta1 < valor2_carta2) ? pais1 : pais2) : ((valor2_carta1 > valor2_carta2) ? pais1 : pais2);

    // Exibição dos resultados
    printf("Primeira rodada! Atributo 1: %s\n", nome_atri1);
    printf("  - %s: %.2f\n", pais1, valor1_carta1);
    printf("  - %s: %.2f\n", pais2, valor1_carta2);
    printf("  -> Vencedor: %s\n\n", vencedor_atri1);

    printf("Segunda rodada! Atributo 2: %s\n", nome_atri2);
    printf("  - %s: %.2f\n", pais1, valor2_carta1);
    printf("  - %s: %.2f\n", pais2, valor2_carta2);
    printf("  -> Vencedor: %s\n\n", vencedor_atri2);

    printf("Rodada final! Soma dos atributos:\n");
    printf("  - %s: %.2f\n", pais1, soma_carta1);
    printf("  - %s: %.2f\n\n", pais2, soma_carta2);

    printf("Campeão da batalha: ");
    if (soma_carta1 == soma_carta2) {
        printf("Empate!\n");
    } else {
        if (soma_carta1 > soma_carta2) {
            printf("%s venceu a batalha!\n", pais1);
        } else {
            printf("%s venceu a batalha!\n", pais2);
        }
    }

    return 0;
}