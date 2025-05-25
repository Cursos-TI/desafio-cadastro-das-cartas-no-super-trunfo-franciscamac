#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


/*
    Programa: Super Trunfo - Cadastro de Cartas (Nível Aventureiro)
    Autor: Francisca Macário
    Data: 25/05/2025

    Descrição:
    -----------
    Este programa realiza o cadastro de duas cartas para o jogo Super Trunfo com o tema "Países".
    Cada carta representa uma cidade de um estado fictício, com os seguintes atributos:
        - Estado (letra de A a H)
        - Código da carta (exemplo: A01, B02)
        - Nome da cidade
        - População (int)
        - Área em km² (float)
        - PIB em bilhões de reais (float)
        - Número de pontos turísticos (int)

    Funcionalidades:
    ----------------
    - O usuário insere os dados de cada carta via terminal utilizando scanf.
    - Após o cadastro, o programa exibe os dados de cada carta de forma organizada.
    - O programa calcula e exibe a densidade populacional (população/área) e o PIB per capita (PIB em reais/população) para cada cidade.
    - Todos os valores de ponto flutuante são exibidos com duas casas decimais.
    - Não são utilizados laços ou condicionais, conforme o desafio do nível Novato/Aventureiro.
    - O programa utiliza getchar para consumir caracteres de nova linha do buffer de entrada, garantindo que o nome da cidade seja lido corretamente.

    Observações:
    ------------
    - O PIB informado deve ser em bilhões de reais. Para o cálculo do PIB per capita, o valor é convertido para reais.
    - Todos os atributos são exibidos ao final do cadastro, incluindo as propriedades calculadas.
*/

int main() {
    // Declaração das variáveis da carta 01
    char estado1;
    char codigo1[4];
    char nomeCidade1[100];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;

    // Declaração das variáveis da carta 02
    char estado2;
    char codigo2[4];
    char nomeCidade2[100];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;

    // Cadastro da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o codigo da carta (ex: A01): \n");
    scanf(" %3s", codigo1);
    getchar(); // consome o '\n' deixado pelo scanf
    printf("Digite o nome da cidade: ");
    getchar(); // consome o próximo '\n' se houver
    scanf(" %[^\n]", nomeCidade1);
    printf("Digite a populacao: ");
    scanf(" %d", &populacao1);
    printf("Digite a area em km²: ");
    scanf(" %f", &area1);
    printf("Digite o PIB (em bilhões de reais): ");
    scanf(" %f", &pib1);
    printf("Digite o numero de pontos turisticos: ");
    scanf(" %d", &pontosTuristicos1);

    // Calculando densidade e PIB per capita da carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    // Cadastro da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o codigo da carta (ex: B02): ");
    scanf(" %3s", codigo2);
    getchar();
    printf("Digite o nome da cidade: ");
    getchar();
    scanf(" %[^\n]", nomeCidade2);
    printf("Digite a populacao: ");
    scanf(" %d", &populacao2);
    printf("Digite a area em km²: ");
    scanf(" %f", &area2);
    printf("Digite o PIB (em bilhões de reais): ");
    scanf(" %f", &pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf(" %d", &pontosTuristicos2);

    // Calculando densidade e PIB per capita da carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Exibição dos dados das cartas cadastradas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}
