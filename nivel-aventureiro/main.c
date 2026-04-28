#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível Aventureiro, você expandirá o sistema para incluir propriedades calculadas, permitindo uma análise mais detalhada das cartas.

int main() {
    // Área para definição das variáveis para armazenar as propriedades das cidades
    char estadoA, estadoB; // Estados
    char codigoA[4], codigoB[4]; // Codigo da carta 
    char cidadeA[50], cidadeB[50]; //Cidade


    unsigned long int populacaoA, populacaoB; //População
    float areaCidadeA, areaCidadeB; // Área
    float pibA, pibB; // PIB
    int PontosTuristicosA, PontosTuristicosB; // Pontos Turisticos
    float densiPopA, densiPopB; //Densidade Populacional
    float pibPerCaptaA, pibPerCaptaB; // PIB per Capita

    // Área para entrada de dados
    // Entradas da carta 1
    printf("\nCadastro da Carta 1:\n");

    printf("Digite a inicial do Estado.(de A a H): \n");
    scanf(" %c", &estadoA);

    printf("Digite o codigo da carta (Ex: Letra inicial do estado seguida de numero de 01 a 04): \n");
    scanf(" %s", codigoA);

    printf("Digite o nome da cidade escolhida: \n");
    scanf(" %[^\n]", cidadeA);

    printf("Digite a população total da cidade: \n");
    scanf(" %lu", &populacaoA);

    printf("Digite a área em km2 da cidade: \n");
    scanf(" %f", &areaCidadeA);

    printf("Digite o PIB total da cidade: \n");
    scanf(" %f", &pibA);

    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf(" %d", &PontosTuristicosA);

    // Entradas da carta 2
    printf("\nCadastro da Carta 2:\n");

    printf("Digite a inicial do Estado.(de A a H): \n");
    scanf(" %c", &estadoB);

    printf("Digite o codigo da carta (Ex: Letra inicial do estado seguida de numero de 01 a 04): \n");
    scanf(" %s", codigoB);

    printf("Digite o nome da cidade escolhida: \n");
    scanf(" %[^\n]", cidadeB);

    printf("Digite a população total da cidade: \n");
    scanf(" %lu", &populacaoB);

    printf("Digite a área em km2 da cidade: \n");
    scanf(" %f", &areaCidadeB);

    printf("Digite o PIB total da cidade: \n");
    scanf(" %f", &pibB);

    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf(" %d", &PontosTuristicosB);
    
    //Área para calculo da densidade populacional e PIB per Capita
    //Carta 1
    densiPopA = (float) populacaoA / areaCidadeA;
    pibPerCaptaA = pibA / (float) populacaoA;

    //Carta 2
    densiPopB = (float) populacaoB / areaCidadeB;
    pibPerCaptaB = pibB / (float) populacaoB;

    // Área para exibição dos dados da cidade
    // Exibição Carta 1
    printf("\nCarta 01\n");
    printf("Estado: %c\n", estadoA);
    printf("Código da carta: %s\n", codigoA);
    printf("Cidade: %s\n", cidadeA);
    printf("População: %lu\n", populacaoA);
    printf("Área em km2 da cidade: %.2f\n", areaCidadeA);
    printf("PIB bruto da cidade: %.2f\n", pibA);
    printf("Quantidade de pontos turisticos da cidade: %d\n", PontosTuristicosA);
    printf("Densidade Populacional: %.2f\n", densiPopA);
    printf("PIB per Capita: %.2f\n", pibPerCaptaA);

     // Exibição Carta 2
    printf("\nCarta 02\n");
    printf("Estado: %c\n", estadoB);
    printf("Código da carta: %s\n", codigoB);
    printf("Cidade: %s\n", cidadeB);
    printf("População: %lu\n", populacaoB);
    printf("Área em km2 da cidade: %.2f\n", areaCidadeB);
    printf("PIB bruto da cidade: %.2f\n", pibB);
    printf("Quantidade de pontos turisticos da cidade: %d\n", PontosTuristicosB);
    printf("Densidade Populacional: %.2f\n", densiPopB);
    printf("PIB per Capita: %.2f\n", pibPerCaptaB);

    return 0;
} 
