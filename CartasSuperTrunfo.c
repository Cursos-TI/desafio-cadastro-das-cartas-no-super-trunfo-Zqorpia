#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char codcarta[10], codcarta2[10];
    char nome[30], nome2[30];
    unsigned long int population, population2;
    float area, area2;
    float gdp, gdp2;
    int turs, turs2;
    char estado[15], estado2[15];
    float densipop, densipop2;
    float gdpcap, gdpcap2;
    float superpoder, superpoder2;


    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("CARTA1 - Digite o Estado: \n");
    scanf(" %s", estado);

    printf("CARTA1 - Digite o código da carta: \n");
    scanf(" %s", codcarta);

    printf("CARTA1 - Digite o nome da cidade: \n");
    scanf(" %s", nome);

    printf("CARTA1 - Digite a população da cidade: \n");
    scanf("%lu", &population);

    printf("CARTA1 - Digite a área da cidade: \n");
    scanf("%f", &area);

    printf("CARTA1 - Digite o PIB da cidade: \n");
    scanf("%f", &gdp);

    printf("CARTA1 - Digite número de pontos turísticos da cidade: \n");
    scanf("%i", &turs);
    printf("\n\n");

    printf("CARTA2 - Digite o Estado: \n");
    scanf(" %s", estado2);

    printf("CARTA2 - Digite o código da carta: \n");
    scanf(" %s", codcarta2);

    printf("CARTA2 - Digite o nome da cidade: \n");
    scanf(" %s", nome2);

    printf("CARTA2 - Digite a população da cidade: \n");
    scanf("%lu", &population2);

    printf("CARTA2 - Digite a área da cidade: \n");
    scanf("%f", &area2);

    printf("CARTA2 - Digite o PIB da cidade: \n");
    scanf("%f", &gdp2);

    printf("CARTA2 - Digite o número de pontos turísticos da cidade: \n");
    scanf("%i", &turs2);
    printf("\n\n");

    // Adicionando novas variáveis que calculam a desidade populacional e pib per capta.
    densipop = (float)population / area;
    densipop2 = (float)population2 / area2;

    gdpcap = gdp / (float)population;
    gdpcap2 = gdp2 / (float)population2;

    // Cálculo do SuperPoder, somando todos os atributos numéricos
    superpoder = (float)population + area + gdp + (float)turs + gdpcap + densipop;
    superpoder2 = (float)population2 + area2 + gdp2 + (float)turs2 + gdpcap2 + densipop2;

    // Comparação das cartas
    int popwin = population > population2;
    int areawin = area > area2;
    int gdpwin = gdp > gdp2;
    int turswin = turs > turs2;
    int gdpcapwin = gdpcap > gdpcap2;
    int densipopwin = densipop < densipop2;
    int spwin = superpoder > superpoder2;


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf(":::::CARTA1::::: \n");
    printf("Estado: %s \n", estado);
    printf("Código da carta: %s \n", codcarta);
    printf("Cidade: %s \n", nome);
    printf("População: %lu habitantes \n", population);
    printf("Área: %.2f km² \n", area);
    printf("PIB: %.2f bilhões de reais \n", gdp);
    printf("Pontos Turísticos: %i \n", turs);
    printf("Densidade Populacional: %.2f hab/km² \n", densipop);
    printf("PIB per capita: %.2f reais \n", gdpcap);
    printf("\n\n");

    printf(":::::CARTA2::::: \n");
    printf("Estado: %s \n", estado2);
    printf("Código da carta: %s \n", codcarta2);
    printf("Cidade: %s \n", nome2);
    printf("População: %lu habitantes \n", population2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", gdp2);
    printf("Pontos Turísticos: %i \n", turs2);
    printf("Densidade Populacional: %.2f hab/km² \n", densipop2);
    printf("PIB per capita: %.2f reais \n", gdpcap2);
    printf("\n\n");

    printf(":::::VENCEDOR::::: \n");
    printf("(1 = CARTA1  0 = CARTA2) \n");
    printf("POPULAÇÃO: %i\n", popwin);
    printf("ÁREA: %i\n", areawin);
    printf("PIB: %i\n", gdpwin);
    printf("P.TURÍSTICO: %i\n", turswin);
    printf("DENS.POPULACIONAL: %i\n", densipopwin);
    printf("PIBperCAPITA: %i\n", gdpcapwin);
    printf("SUPER TRUNFO: %i\n", spwin);


    


    return 0;
}
