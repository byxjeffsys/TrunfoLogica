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

    //Menu interativo - Escolha dos atributos para comparação

    int atributo1, atributo2; 

    printf("#**VAMOS COMEÇAR**#\n");
    printf("Você precisará escolher 2 atributos!\n");
    printf("****1° Atributo:****\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade populacional\n");
    printf("6. PIB per capita\n");
    scanf("%d", &atributo1);

    printf("****2° Atributo:****\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade populacional\n");
    printf("6. PIB per capita\n");
    scanf("%d", &atributo2);

    if (atributo2 == atributo1) {
    printf("\nVocê não pode escolher o mesmo atributo duas vezes!\n");
    printf("Escolha novamente o segundo atributo: ");
    scanf("%d", &atributo2);
}
    printf("\nVocê escolheu os atributos %d e %d.\n", atributo1, atributo2);


// Comparação do PRIMEIRO atributo

    int pontos1 = 0, pontos2 = 0;

    switch (atributo1) {
    case 1: // População
        pontos1 += (populacao1 > populacao2) ? 1 : 0;
        pontos2 += (populacao2 > populacao1) ? 1 : 0;
        break;
    case 2: // Área
        pontos1 += (area1 > area2) ? 1 : 0;
        pontos2 += (area2 > area1) ? 1 : 0;
        break;
    case 3: // PIB
        pontos1 += (pib1 > pib2) ? 1 : 0;
        pontos2 += (pib2 > pib1) ? 1 : 0;
        break;
    case 4: // Pontos turísticos
        pontos1 += (pturisticos1 > pturisticos2) ? 1 : 0;
        pontos2 += (pturisticos2 > pturisticos1) ? 1 : 0;
        break;
    case 5: // Densidade populacional (menor vence)
        pontos1 += (densidade1 < densidade2) ? 1 : 0;
        pontos2 += (densidade2 < densidade1) ? 1 : 0;
        break;
    case 6: // PIB per capita
        pontos1 += (pibper1 > pibper2) ? 1 : 0;
        pontos2 += (pibper2 > pibper1) ? 1 : 0;
        break;
}

    // Comparação do SEGUNDO atributo
    switch (atributo2) {
    case 1: // População
        pontos1 += (populacao1 > populacao2) ? 1 : 0;
        pontos2 += (populacao2 > populacao1) ? 1 : 0;
        break;
    case 2: // Área
        pontos1 += (area1 > area2) ? 1 : 0;
        pontos2 += (area2 > area1) ? 1 : 0;
        break;
    case 3: // PIB
        pontos1 += (pib1 > pib2) ? 1 : 0;
        pontos2 += (pib2 > pib1) ? 1 : 0;
        break;
    case 4: // Pontos turísticos
        pontos1 += (pturisticos1 > pturisticos2) ? 1 : 0;
        pontos2 += (pturisticos2 > pturisticos1) ? 1 : 0;
        break;
    case 5: // Densidade populacional (menor vence)
        pontos1 += (densidade1 < densidade2) ? 1 : 0;
        pontos2 += (densidade2 < densidade1) ? 1 : 0;
        break;
    case 6: // PIB per capita
        pontos1 += (pib1 > pib2) ? 1 : 0;
        pontos2 += (pib2 > pib1) ? 1 : 0;
        break;
    }

    // Soma dos atributos para exibir
    float soma1 = 0, soma2 = 0;

    // Primeiro atributo
    switch (atributo1) {
    case 1: soma1 += populacao1; soma2 += populacao2; break;
    case 2: soma1 += area1; soma2 += area2; break;
    case 3: soma1 += pib1; soma2 += pib2; break;
    case 4: soma1 += pturisticos1; soma2 += pturisticos2; break;
    case 5: soma1 += densidade1; soma2 += densidade2; break;
    case 6: soma1 += pibper1; soma2 += pibper2; break;
    }

    // Segundo atributo
    switch (atributo2) {
    case 1: soma1 += populacao1; soma2 += populacao2; break;
    case 2: soma1 += area1; soma2 += area2; break;
    case 3: soma1 += pib1; soma2 += pib2; break;
    case 4: soma1 += pturisticos1; soma2 += pturisticos2; break;
    case 5: soma1 += densidade1; soma2 += densidade2; break;
    case 6: soma1 += pibper1; soma2 += pibper2; break;
    }

    // Exibição do resultado
    printf("*****RESULTADO****\n");
    printf("Carta 1: %.2f\n", soma1);
    printf("Carta 2: %.2f\n", soma2);

    if (soma1 > soma2) {
    printf("Carta 1 venceu!\n");
    } else if (soma2 > soma1) {
    printf("Carta 2 venceu!\n");
    } else {
    printf("Empate!\n");}

}