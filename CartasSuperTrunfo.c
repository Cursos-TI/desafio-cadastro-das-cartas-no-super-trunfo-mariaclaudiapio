#include <stdio.h>

int main() 
{
    // Cabeçalho
    printf("\n");
    printf("****************************************************\n");
    printf("**   Desafio Super Trunfo de Países - Iniciante   **\n");
    printf("****************************************************\n");
    printf("\n");

    // Declaração das Variáveis (1ª carta)
    char estado1; // armazena a letra escolhida pelo usuário (de A a H)
    char codigoDaCarta1[4]; // armazena o código da carta (no formato letra + número de 01 a 04 - ex: A01, B03)
    char cidade1[30]; // armazena o nome da cidade inserido pelo usuário
    int populacao1; // armazena a população da cidade inserida pelo usuário
    float areaQuadrada1; // armazena a área da cidade, medida em kilômetros quadrados
    float pib1; // armazena o produto interno bruto da cidade escolhida pelo usuário
    int pontosTuristicos1; // armazena o número de pontos turísticos da cidade escolhida pelo usuário

     // Declaração das Variáveis (2ª carta)
     char estado2; // armazena a letra escolhida pelo usuário (de A a H)
     char codigoDaCarta2[4]; // armazena o código da carta (no formato letra + número de 01 a 04 - ex: A01, B03)
     char cidade2[30]; // armazena o nome da cidade inserido pelo usuário
     int populacao2; // armazena a população da cidade inserida pelo usuário
     float areaQuadrada2; // armazena a área da cidade, medida em kilômetros quadrados
     float pib2; // armazena o produto interno bruto da cidade escolhida pelo usuário
     int pontosTuristicos2; // armazena o número de pontos turísticos da cidade escolhida pelo usuário

    // Entrada dos dados (1ª carta)
    printf("Olá! Para o cadastro da 1ª carta, digite os dados solicitados a seguir.\n");
    printf("Digite uma letra de 'A' a 'H': ");
    scanf(" %c", &estado1);

    printf("Digite a letra informada anteriormente, seguida de um número de 01 a 04: ");
    scanf("%s", codigoDaCarta1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite o número de habitantes da cidade escolhida: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade (em quilômetros quadrados): ");
    scanf("%f", &areaQuadrada1);

    printf("Digite o Produto Interno Bruto (PIB) da cidade: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &pontosTuristicos1);
    printf("\n");

     // Entrada dos dados (2ª carta)
     printf("Agora vamos para o cadastro da 2ª carta. Digite os dados solicitados a seguir.\n");
     printf("Digite uma letra de 'A' a 'H': ");
     scanf(" %c", &estado2);
 
     printf("Digite a letra informada anteriormente, seguida de um número de 01 a 04: ");
     scanf("%s", codigoDaCarta2);
 
     printf("Digite o nome da cidade: ");
     scanf("%s", cidade2);
 
     printf("Digite o número de habitantes da cidade escolhida: ");
     scanf("%d", &populacao2);
 
     printf("Digite a área da cidade (em quilômetros quadrados): ");
     scanf("%f", &areaQuadrada2);
 
     printf("Digite o Produto Interno Bruto (PIB) da cidade: ");
     scanf("%f", &pib2);
 
     printf("Digite a quantidade de pontos turísticos da cidade: ");
     scanf("%d", &pontosTuristicos2);
     printf("\n");
 

    // Saída de Dados da 1ª carta (apresentação dos dados cadastrados na tela)
    printf("Carta 1:\n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s\n", codigoDaCarta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d habitantes \n", populacao1);
    printf("Área: %.2f km² \n", areaQuadrada1);
    printf("PIB: R$%.2f \n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("\n");

    // Saída de Dados da 2ª carta (apresentação dos dados cadastrados na tela)
    printf("Carta 2:\n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s\n", codigoDaCarta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d habitantes \n", populacao2);
    printf("Área: %.2f km² \n", areaQuadrada2);
    printf("PIB: R$%.2f \n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("\n");

    return 0;
}