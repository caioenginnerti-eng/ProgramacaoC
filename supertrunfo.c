#include <stdio.h>

int main() {
     int opcao;
    printf("Menu Principal\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: \n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
    printf("Iniciando jogo...\n");
    
    // Declaração de variáveis para duas cartas
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;
    float superpoder1, superpoder2;


    // Cadastro da Carta 1
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o codigo (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade1);
    printf("Digite a populacao: ");
    scanf("%d", &populacao1);
    printf("Digite a area em km2: ");
    scanf("%f", &area1);
    printf("Digite o pib: ");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;
    superpoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + densidadePopulacional1 + pibPerCapita1;
    // ... ler os outros atributos da Carta 1 ...




    // Cadastro da Carta 2
    printf("Digite o estado da carta 2: ");
    scanf(" %c", &estado2);
    printf("Digite o codigo da carta 2: ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade da carta 2: ");
    scanf("%s", nomeCidade2);
    printf("Digite a populacao da carta 2: ");
    scanf("%d", &populacao2);
    printf("Digite a area em km2 da carta 2: ");
    scanf("%f", &area2);
    printf("Digite o pib da carta 2: ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos da carta 2: ");
    scanf("%d", &pontosTuristicos2);
    
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;
    superpoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + densidadePopulacional2 + pibPerCapita2;
    // ... ler os outros atributos da Carta 2 ...


    if (superpoder1 > superpoder2) {
        printf("Carta 1 é mais forte que Carta 2\n");
    } else if (superpoder1 < superpoder2) {
        printf("Carta 2 é mais forte que Carta 1\n");
    } else {
        printf("As cartas são igualmente fortes\n");
    }




    if (estado1 > estado2) {
        printf("Carta 1 tem estado maior que Carta 2\n");
    } else if (estado1 < estado2) {
        printf("Carta 2 tem estado maior que Carta 1\n");
    } else {
        printf("As cartas têm o mesmo estado\n");
    }





     if (area1 > area2) {
        printf("Carta 1 tem área maior que Carta 2\n");
    } else if (area1 < area2) {
        printf("Carta 2 tem área maior que Carta 1\n");
    } else {
        printf("As cartas têm a mesma área\n");
    }





    if (pib1 > pib2) {
        printf("Carta 1 tem PIB maior que Carta 2\n");
    } else if (pib1 < pib2) {
        printf("Carta 2 tem PIB maior que Carta 1\n");
    } else {
        printf("As cartas têm o mesmo PIB\n");
    }





    if (pontosTuristicos1 > pontosTuristicos2) {
        printf("Carta 1 tem mais pontos turisticos que Carta 2\n");
    } else if (pontosTuristicos1 < pontosTuristicos2) {
        printf("Carta 2 tem mais pontos turisticos que Carta 1\n");
    } else {
        printf("As cartas têm o mesmo número de pontos turisticos\n");
    }






        if (densidadePopulacional1 > densidadePopulacional2) {
        printf("Carta 1 tem densidade populacional maior que Carta 2, logo carta 2 venceu\n");
    } else if (densidadePopulacional1 < densidadePopulacional2) {
        printf("Carta 2 tem densidade populacional maior que Carta 1 , logo carta 1 perdeu \n");
    } else {
        printf("As cartas têm a mesma densidade populacional\n");
    } 
    
    
    
    
    
     if (pibPerCapita1 > pibPerCapita2) { 
        printf("Carta 1 tem PIB per capita maior que Carta 2, logo carta 1 venceu\n");
    } else if (pibPerCapita1 < pibPerCapita2) {
        printf("Carta 2 tem PIB per capita maior que Carta 1, logo carta 2 venceu \n");
    } else {
        printf("As cartas têm o mesmo PIB per capita\n");    
    } 





    // Exibição dos dados
    printf("\nCarta 1:\nEstado: %c, Codigo: %s, Populacao: %d, Area: %.2f, PIB: %.2f, Pontos Turisticos: %d, Densidade Populacional: %.2f, PIB per Capita: %.2f, Superpoder: %.2f\n", estado1, codigo1, populacao1, area1, pib1, pontosTuristicos1, densidadePopulacional1, pibPerCapita1, superpoder1);
    printf("\nCarta 2:\nEstado: %c, Codigo: %s, Populacao: %d, Area: %.2f, PIB: %.2f, Pontos Turisticos: %d, Densidade Populacional: %.2f, PIB per Capita: %.2f, Superpoder: %.2f\n", estado2, codigo2, populacao2, area2, pib2, pontosTuristicos2, densidadePopulacional2, pibPerCapita2, superpoder2);






    break;
   
    case 2:
    printf("Regras do Super Trunfo:\n");
    printf("1. Cada carta tem atributos como população, área, PIB, etc.\n");
    printf("2. O jogo compara os atributos das cartas.\n");
    printf("3. A carta com o maior valor em um atributo vence.\n");
    break;
   
    case 3:
    printf("Saindo do jogo...\n");
    break;
   
    default:
    break;
   }





    return 0;
}
