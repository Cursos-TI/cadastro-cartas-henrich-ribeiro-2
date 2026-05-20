#include <stdio.h>

// Desafio Super Trunfo - Países

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
    float densidadeInvertidaA, densidadeInvertidaB; // Densidade Invertida
    float superPoderA, superPoderB;

    //Definição variavel opção para o menu
    int opcao1, opcao2;

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
    
    //Área para calculo da densidade populacional e PIB per Capita, densidade invertida e Super Poder
    //Carta 1
    densiPopA = (float) populacaoA / areaCidadeA;
    pibPerCaptaA = pibA / (float) populacaoA;
    densidadeInvertidaA = 1.0 / densiPopA;
    superPoderA = (float)populacaoA + areaCidadeA + pibA + (float)PontosTuristicosA + pibPerCaptaA + densidadeInvertidaA;

    //Carta 2
    densiPopB = (float) populacaoB / areaCidadeB;
    pibPerCaptaB = pibB / (float) populacaoB;
    densidadeInvertidaB = 1.0 / densiPopB;
    superPoderB = (float) populacaoB + areaCidadeB + pibB + (float)PontosTuristicosB + pibPerCaptaB + densidadeInvertidaB;


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
    printf("Super poder = %.2f\n", superPoderA);

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
    printf("Super poder = %.2f\n", superPoderB);
    
    //Área destinada ao menu interativo
    printf("\n====================================\n");
    printf("-------- SUPER TRUNFO - MENU ----------\n");
    printf("====================================\n");
    printf("Escolha dois dos atributo abaixo para comparar\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Densidade Populacional\n");
    printf("5 - PIB Per Capita\n");
    printf("6 - Pontos Turisticos\n");
    printf("7 - Super Poder\n");

    printf("\nDigite a primeira comparação desejada:");
    scanf("%d", &opcao1);

    switch (opcao1) //Lógica para que a escolha fique mais simples para o usuario
    {
    case 1:
        printf("\n2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Densidade Populacional\n");
        printf("5 - PIB Per Capita\n");
        printf("6 - Pontos Turisticos\n");
        printf("7 - Super Poder\n");
        printf("\nDigite a segunda comparação desejada:");
        scanf("%d", &opcao2);
        break;
    
    case 2:
        printf("\n1 - População\n");
        printf("3 - PIB\n");
        printf("4 - Densidade Populacional\n");
        printf("5 - PIB Per Capita\n");
        printf("6 - Pontos Turisticos\n");
        printf("7 - Super Poder\n");
        printf("\nDigite a segunda comparação desejada:");
        scanf("%d", &opcao2);
        break;

    case 3:
        printf("\n1 - População\n");
        printf("2 - Área\n");
        printf("4 - Densidade Populacional\n");
        printf("5 - PIB Per Capita\n");
        printf("6 - Pontos Turisticos\n");
        printf("7 - Super Poder\n");
        printf("\nDigite a segunda comparação desejada:");
        scanf("%d", &opcao2);
        break;

    case 4:
        printf("\n1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("5 - PIB Per Capita\n");
        printf("6 - Pontos Turisticos\n");
        printf("7 - Super Poder\n");
        printf("\nDigite a segunda comparação desejada:");
        scanf("%d", &opcao2);
        break;

    case 5:
        printf("\n1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Densidade Populacional\n");
        printf("6 - Pontos Turisticos\n");
        printf("7 - Super Poder\n");
        printf("\nDigite a segunda comparação desejada:");
        scanf("%d", &opcao2);
        break;

    case 6:
        printf("\n1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Densidade Populacional\n");
        printf("5 - PIB Per Capita\n");
        printf("7 - Super Poder\n");
        printf("\nDigite a segunda comparação desejada:");
        scanf("%d", &opcao2);
        break;

    case 7:
        printf("\n1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Densidade Populacional\n");
        printf("5 - PIB Per Capita\n");
        printf("6 - Pontos Turisticos\n");
        printf("\nDigite a segunda comparação desejada:");
        scanf("%d", &opcao2);
        break;
    default:
        printf("Opção invalida!");
        break;
    }



    //Área para a logica do menu e comparação dos atributos utilizando switch e if/else
    printf("\n--- RESULTADO DA COMPARAÇÃO ---\n");

    switch (opcao1) //Área para a primeira comparação
    {
    case 1: //comparação população
        printf("----- Atributo: População -----\n");
        printf("Carta 1 -> Cidade: %s | População: %lu\n", cidadeA, populacaoA);
        printf("Carta 2 -> Cidade: %s | População: %lu\n", cidadeB, populacaoB);

        if (populacaoA > populacaoB) {
            printf("\nCarta 1(%s) venceu!", cidadeA);
        } else if (populacaoB > populacaoA) {
            printf("\nCarta 2(%s) venceu!", cidadeB);
        } else {
            printf("\nAs cartas empataram!");
        }

        break;

    case 2:
        printf("----- Atributo: Área -----\n");
        printf("Carta 1 -> Cidade: %s | Área: %.2fKm²\n", cidadeA, areaCidadeA);
        printf("Carta 2 -> Cidade: %s | Área: %.2fKm²\n", cidadeB, areaCidadeB);

        if (areaCidadeA > areaCidadeB) {
            printf("\nCarta 1(%s) venceu!", cidadeA);
        } else if (areaCidadeB > areaCidadeA) {
            printf("\nCarta 2(%s) venceu!", cidadeB);
        } else {
            printf("\nAs cartas empataram!");
        }

        break;
    
    case 3:
        printf("----- Atributo: PIB -----\n");
        printf("Carta 1 -> Cidade: %s | PIB: R$%.2f\n", cidadeA, pibA);
        printf("Carta 2 -> Cidade: %s | PIB: R$%.2f\n", cidadeB, pibB);

        if (pibA > pibB) {
            printf("\nCarta 1(%s) venceu!", cidadeA);
        } else if (pibB > pibA) {
            printf("\nCarta 2(%s) venceu!", cidadeB);
        } else {
            printf("\nAs cartas empataram!");
        }

        break;
    
    case 4:
        printf("----- Atributo: Densidade Populacional -----\n");
        printf("Carta 1 -> Cidade: %s | Densidade: %.2fha/Km²\n", cidadeA, densiPopA);
        printf("Carta 2 -> Cidade: %s | Densidade: %.2fha/Km²\n", cidadeB, densiPopB);

        if (densiPopA < densiPopB) {
            printf("\nCarta 1(%s) venceu!", cidadeA);
        } else if (densiPopB < densiPopA) {
            printf("\nCarta 2(%s) venceu!", cidadeB);
        } else {
            printf("\nAs cartas empataram!");
        }

        break;

    case 5:
    printf("----- Atributo: PIB Per Capita -----\n");
        printf("Carta 1 -> Cidade: %s | PIB Per Capita: R$%.2f\n", cidadeA, pibPerCaptaA);
        printf("Carta 2 -> Cidade: %s | PIB Per Capita: R$%.2f\n", cidadeB, pibPerCaptaB);

        if (pibPerCaptaA > pibPerCaptaB) {
            printf("\nCarta 1(%s) venceu!", cidadeA);
        } else if (pibPerCaptaB > pibPerCaptaA) {
            printf("\nCarta 2(%s) venceu!", cidadeB);
        } else {
            printf("\nAs cartas empataram!");
        }

        break;

    case 6:
        printf("----- Atributo: Pontos Turisticos -----\n");
        printf("Carta 1 -> Cidade: %s | Pontos Turisticos: %d\n", cidadeA, PontosTuristicosA);
        printf("Carta 2 -> Cidade: %s | Pontos Turisticos: %d\n", cidadeB, PontosTuristicosB);

        if (PontosTuristicosA > PontosTuristicosB) {
            printf("\nCarta 1(%s) venceu!", cidadeA);
        } else if (PontosTuristicosB > PontosTuristicosA) {
            printf("\nCarta 2(%s) venceu!", cidadeB);
        } else {
            printf("\nAs cartas empataram!");
        }

        break;

    case 7:
        printf("----- Atributo: Super Poder -----\n");
        printf("Carta 1 -> Cidade: %s | Super Poder: %.2f\n", cidadeA, superPoderA);
        printf("Carta 2 -> Cidade: %s | Super Poder: %.2f\n", cidadeB, superPoderB);

        if (superPoderA > superPoderB) {
            printf("\nCarta 1(%s) venceu!", cidadeA);
        } else if (superPoderB > superPoderA) {
            printf("\nCarta 2(%s) venceu!", cidadeB);
        } else {
            printf("\nAs cartas empataram!");
        }

        break;
    default:
        printf("\n----- Opção invalida! -----");
        break;
    }

    switch (opcao2) //Área para a segunda comparação
    {
    case 1: //comparação população
        printf("----- Atributo: População -----\n");
        printf("Carta 1 -> Cidade: %s | População: %lu\n", cidadeA, populacaoA);
        printf("Carta 2 -> Cidade: %s | População: %lu\n", cidadeB, populacaoB);

        if (populacaoA > populacaoB) {
            printf("\nCarta 1(%s) venceu!", cidadeA);
        } else if (populacaoB > populacaoA) {
            printf("\nCarta 2(%s) venceu!", cidadeB);
        } else {
            printf("\nAs cartas empataram!");
        }

        break;

    case 2:
        printf("----- Atributo: Área -----\n");
        printf("Carta 1 -> Cidade: %s | Área: %.2fKm²\n", cidadeA, areaCidadeA);
        printf("Carta 2 -> Cidade: %s | Área: %.2fKm²\n", cidadeB, areaCidadeB);

        if (areaCidadeA > areaCidadeB) {
            printf("\nCarta 1(%s) venceu!", cidadeA);
        } else if (areaCidadeB > areaCidadeA) {
            printf("\nCarta 2(%s) venceu!", cidadeB);
        } else {
            printf("\nAs cartas empataram!");
        }

        break;
    
    case 3:
        printf("----- Atributo: PIB -----\n");
        printf("Carta 1 -> Cidade: %s | PIB: R$%.2f\n", cidadeA, pibA);
        printf("Carta 2 -> Cidade: %s | PIB: R$%.2f\n", cidadeB, pibB);

        if (pibA > pibB) {
            printf("\nCarta 1(%s) venceu!", cidadeA);
        } else if (pibB > pibA) {
            printf("\nCarta 2(%s) venceu!", cidadeB);
        } else {
            printf("\nAs cartas empataram!");
        }

        break;
    
    case 4:
        printf("----- Atributo: Densidade Populacional -----\n");
        printf("Carta 1 -> Cidade: %s | Densidade: %.2fha/Km²\n", cidadeA, densiPopA);
        printf("Carta 2 -> Cidade: %s | Densidade: %.2fha/Km²\n", cidadeB, densiPopB);

        if (densiPopA < densiPopB) {
            printf("\nCarta 1(%s) venceu!", cidadeA);
        } else if (densiPopB < densiPopA) {
            printf("\nCarta 2(%s) venceu!", cidadeB);
        } else {
            printf("\nAs cartas empataram!");
        }

        break;

    case 5:
    printf("----- Atributo: PIB Per Capita -----\n");
        printf("Carta 1 -> Cidade: %s | PIB Per Capita: R$%.2f\n", cidadeA, pibPerCaptaA);
        printf("Carta 2 -> Cidade: %s | PIB Per Capita: R$%.2f\n", cidadeB, pibPerCaptaB);

        if (pibPerCaptaA > pibPerCaptaB) {
            printf("\nCarta 1(%s) venceu!", cidadeA);
        } else if (pibPerCaptaB > pibPerCaptaA) {
            printf("\nCarta 2(%s) venceu!", cidadeB);
        } else {
            printf("\nAs cartas empataram!");
        }

        break;

    case 6:
        printf("----- Atributo: Pontos Turisticos -----\n");
        printf("Carta 1 -> Cidade: %s | Pontos Turisticos: %d\n", cidadeA, PontosTuristicosA);
        printf("Carta 2 -> Cidade: %s | Pontos Turisticos: %d\n", cidadeB, PontosTuristicosB);

        if (PontosTuristicosA > PontosTuristicosB) {
            printf("\nCarta 1(%s) venceu!", cidadeA);
        } else if (PontosTuristicosB > PontosTuristicosA) {
            printf("\nCarta 2(%s) venceu!", cidadeB);
        } else {
            printf("\nAs cartas empataram!");
        }

        break;

    case 7:
        printf("----- Atributo: Super Poder -----\n");
        printf("Carta 1 -> Cidade: %s | Super Poder: %.2f\n", cidadeA, superPoderA);
        printf("Carta 2 -> Cidade: %s | Super Poder: %.2f\n", cidadeB, superPoderB);

        if (superPoderA > superPoderB) {
            printf("\nCarta 1(%s) venceu!", cidadeA);
        } else if (superPoderB > superPoderA) {
            printf("\nCarta 2(%s) venceu!", cidadeB);
        } else {
            printf("\nAs cartas empataram!");
        }

        break;
    default:
        printf("\n----- Opção invalida! -----");
        break;
    }


    return 0;
} 
