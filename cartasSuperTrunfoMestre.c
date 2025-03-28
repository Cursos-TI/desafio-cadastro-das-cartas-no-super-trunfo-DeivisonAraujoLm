#include <stdio.h>

int main() {
    // Declaração das variáveis
    char codigo1[4], codigo2[4];
    unsigned long int populacao1, populacao2;
    int pontosTuristicos1, pontosTuristicos2;
    float area1, area2, pib1, pib2;
    float densidade1, densidade2, pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    // Entrada de dados da primeira carta
    printf("Digite o código da primeira carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite a população da primeira carta: ");
    scanf("%lu", &populacao1);
    printf("Digite a área da primeira carta: ");
    scanf("%f", &area1);
    printf("Digite o PIB da primeira carta: ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da primeira carta: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos da primeira carta
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;
    superPoder1 = pib1 + populacao1 + pontosTuristicos1 + (1.0 / densidade1);

    // Entrada de dados da segunda carta
    printf("\nDigite o código da segunda carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Digite a população da segunda carta: ");
    scanf("%lu", &populacao2);
    printf("Digite a área da segunda carta: ");
    scanf("%f", &area2);
    printf("Digite o PIB da segunda carta: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da segunda carta: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos da segunda carta
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;
    superPoder2 = pib2 + populacao2 + pontosTuristicos2 + (1.0 / densidade2);

    // Exibição dos dados cadastrados e cálculos
    printf("\nDados da primeira carta:\n");
    printf("Código: %s\n", codigo1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\nDados da segunda carta:\n");
    printf("Código: %s\n", codigo2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparação dos atributos
    printf("\nResultados da comparação:\n");
    printf("População: %d\n", populacao1 > populacao2 ? 1 : 0);
    printf("Área: %d\n", area1 > area2 ? 1 : 0);
    printf("PIB: %d\n", pib1 > pib2 ? 1 : 0);
    printf("Pontos turísticos: %d\n", pontosTuristicos1 > pontosTuristicos2 ? 1 : 0);
    printf("Densidade Populacional (menor vence): %d\n", densidade1 < densidade2 ? 1 : 0);
    printf("Super Poder: %d\n", superPoder1 > superPoder2 ? 1 : 0);

    return 0;
}