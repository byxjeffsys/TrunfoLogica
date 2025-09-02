#include <stdio.h>

int main(){

    //Declaração da Carta 1
    char estado1[3];
    char codigo1[4];
    char cidade1[49];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pturisticos1;

    //Declaração da Carta 2
    char estado2[3];
    char codigo2[4];
    char cidade2[49];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pturisticos2;

    //Cadastro da Carta 1
    printf("\nCadastro da Carta 1 \n");
    printf("Digite o Estado (A-H): \n");
    scanf(" %s", estado1);
    printf("Informe o código da carta: \n");
    scanf(" %s", codigo1);
    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade1);
    printf("Informe a população da cidade: \n");
    scanf("%lu", &populacao1);
    printf("Digite a área da cidade (KM): \n");
    scanf("%f", &area1);
    printf("Informe o PIB da cidade (Em bilhões de reais): \n");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turisticos na cidade: \n");
    scanf("%d", &pturisticos1);

    printf("\nCarta de código %s foi cadastrada com sucesso!\n", codigo1);


    //Cadastro da Carta 2
    printf("\nCadastro da Carta 2 \n");
    printf("Digite o Estado (A-H): \n");
    scanf(" %s", estado2);
    printf("Informe o código da carta: \n");
    scanf(" %s", codigo2);
    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);
    printf("Informe a população da cidade: \n");
    scanf("%lu", &populacao2);
    printf("Digite a área da cidade (KM): \n");
    scanf("%f", &area2);
    printf("Informe o PIB da cidade (Em bilhões de reais): \n");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turisticos na cidade: \n");
    scanf("%d", &pturisticos2);

    printf("\nCarta de código %s foi cadastrada com sucesso!\n", codigo2);


    //Cálculo - Carta 1
    float densidade1 = populacao1 / area1;
    float pibper1 = (pib1 * 1000000000) / populacao1;
    float superpoder1 = populacao1 + area1 + pib1 + pibper1 + pturisticos1 + (1.0f / densidade1);

    //Exibição Carta 1
    printf("\n Carta 1 \n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %lu de pessoas\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turisticos: %d\n", pturisticos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: R$ %.2f\n", pibper1);


    //Cálculo - Carta 2
    float densidade2 = populacao2 / area2;
    float pibper2 = (pib2 * 1000000000) / populacao2;
    float superpoder2 = populacao2 + area2 + pib2 + pibper2 + pturisticos2 + (1.0f / densidade2);

    //Exibição Carta 2
    printf("\n Carta 2 \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %lu de pessoas\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turisticos: %d\n", pturisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: R$ %.2f\n", pibper2);

    //Comparações das cartas

    printf("\n**COMPARAÇÃO DE CARTAS**\n **ATRIBUTO: População**\n");
    printf("Carta 1 - %s (%s): %lu\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %lu\n", cidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("Carta 1 venceu!");
    }else {
        printf("Carta 2 venceu!");
    }







    return 0;




}
