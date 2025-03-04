#include <stdio.h>

// Meu Código Leandro

int main() {
    
    //Inicializando variáveis
    char estado;
    char codigoCarta[4];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int qtdPontosTuristicos;

    char estado2;
    char codigoCarta2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int qtdPontosTuristicos2;

    float superPoder1, superPoder2;

    
    // Cadastro das Cartas:
    
    printf("DESAFIO SUPER TRUNFO\n");
    //Armazenando dados da carta 1
    printf("Digite os dados a seguir referente a Carta 1\n");
    printf("Digite a letra, em maiúsculo, referente ao Estado\n");
    scanf(" %c", &estado);

    printf("Digite o código da carta, iniciando com uma letra maiúscula seguida de dois números\n");
    scanf(" %s", &codigoCarta);

    printf("Entre com o nome da cidade\n");
    scanf(" %s", &nomeCidade);

    printf("Digite o valor da população dessa cidade\n");
    scanf(" %d", &populacao);

    printf("Digite o valor da área (em Km²) dessa cidade\n");
    scanf(" %f", &area);

    printf("Digite o valor do PIB dessa cidade\n");
    scanf(" %f", &pib);

    printf("Quantos pontos turísticos essa cidade possui\n");
    scanf(" %d", &qtdPontosTuristicos);
    printf("\n");

    //Inicializando variáveis do nivel aventureiro
    float densidadePopulacional;
    float pibPerCapita;

    densidadePopulacional = populacao / area;
    pibPerCapita = (pib * 1e9) / (float)populacao;
    superPoder1 = populacao + area + pib + qtdPontosTuristicos + pibPerCapita + (1 / densidadePopulacional);

    // Exibição dos Dados da Carta 1:
    printf("\nCarta 1");
    printf("\nEstado: %c", estado);
    printf("\nCódigo: %s", codigoCarta);
    printf("\nNome da cidade: %s", nomeCidade);
    printf("\nPopulação: %d", populacao);
    printf("\nÁrea: %f", area);
    printf("\nPIB: R$%.2f bilhões", pib);
    printf("\nNúmero de Pontos Turísticos: %d", qtdPontosTuristicos);
    printf("\nDensidade demografica da cidade é: %.2f hab/km²", densidadePopulacional);
    printf("\nO PIB per capita é: %.2f reais", pibPerCapita);
    printf("\n");

    
    //Armazenando dados da carta 2
    printf("\nDigite os dados a seguir referente a Carta 2\n");
    printf("Digite a letra, em maiúsculo, referente ao Estado\n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta, iniciando com uma letra maiúscula seguida de dois números\n");
    scanf(" %s", &codigoCarta2);

    printf("Entre com o nome da cidade\n");
    scanf(" %s", &nomeCidade2);

    printf("Digite o valor da população dessa cidade\n");
    scanf(" %d", &populacao2);

    printf("Digite o valor da área (em Km²) dessa cidade\n");
    scanf(" %f", &area2);

    printf("Digite o valor do PIB dessa cidade\n");
    scanf(" %f", &pib2);

    printf("Quantos pontos turísticos essa cidade possui\n");
    scanf(" %d", &qtdPontosTuristicos2);

    //Inicializando variáveis do nivel aventureiro
    float densidadePopulacional2;
    float pibPerCapita2;

    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib * 1e9) / (float)populacao2;
    superPoder2 = populacao2 + area2 + pib2 + qtdPontosTuristicos2 + pibPerCapita2 + (1 / densidadePopulacional2);

    // Exibição dos Dados da Carta 2:
    printf("\nCarta 2");
    printf("\nEstado: %c", estado2);
    printf("\nCódigo: %s", codigoCarta2);
    printf("\nNome da cidade: %s", nomeCidade2);
    printf("\nPopulação: %d", populacao2);
    printf("\nÁrea: %f", area2);
    printf("\nPIB: R$%f", pib2);
    printf("\nNúmero de Pontos Turísticos: %d", qtdPontosTuristicos2);
    printf("\nDensidade demografica da cidade é: %.2f", densidadePopulacional2);
    printf("\nO PIB per capita é: %.2f reais", pibPerCapita2);
    printf("\n");

    // Comparação das Cartas
    printf("\nComparação de Cartas:\n");
    //printf("População: %d\n", populacao > populacao2);
    if(populacao > populacao2){
        printf("População de %s é maior que população de %s\n", nomeCidade, nomeCidade2);
    } else {
        printf("População de %s é maior que população de %s\n", nomeCidade2, nomeCidade);
    }
    //printf("Área: %d\n", area > area2);
    if(area > area2){
        printf("Area de %s é maior que Area de %s\n", nomeCidade, nomeCidade2);
    } else {
        printf("Area de %s é maior que Area de %s\n", nomeCidade2, nomeCidade);
    }
    //printf("PIB: %d\n", pib > pib2);
    if(pib > pib2){
        printf("PIB de %s é maior que PIB de %s\n", nomeCidade, nomeCidade2);
    } else {
        printf("PIB de %s é maior que PIB de %s\n", nomeCidade2, nomeCidade);
    }
    //printf("Pontos Turísticos: %d\n", qtdPontosTuristicos > qtdPontosTuristicos2);
    if(qtdPontosTuristicos > qtdPontosTuristicos2){
        printf("A quantidade de pontos turísticos de %s é maior que a quantidade de pontos turísticos de %s\n", nomeCidade, nomeCidade2);
    } else {
        printf("A quantidade de pontos turísticos de %s é maior que a quantidade de pontos turísticos de %s\n", nomeCidade2, nomeCidade);
    }
    //printf("Densidade Populacional: %d\n", densidadePopulacional < densidadePopulacional2);
    if(densidadePopulacional > densidadePopulacional2){
        printf("A densidade populacional de %s é maior que a densidade populacional de %s\n", nomeCidade, nomeCidade2);
    } else {
        printf("A densidade populacional de %s é maior que a densidade populacional de %s\n", nomeCidade2, nomeCidade);
    }
    //printf("PIB per Capita: %d\n", pibPerCapita > pibPerCapita2);
    if(pibPerCapita > pibPerCapita2){
        printf("PIB per Capita de %s é maior que PIB per Capita de %s\n", nomeCidade, nomeCidade2);
    } else {
        printf("PIB per Capita de %s é maior que PIB per Capita de %s\n", nomeCidade2, nomeCidade);
    }
    //printf("Super Poder: %d\n", superPoder1 > superPoder2);
    if(superPoder1 > superPoder2){
        printf("O super poder de %s é maior que o super poder de %s\n", nomeCidade, nomeCidade2);
    } else {
        printf("O super poder de %s é maior que o super poder de %s\n", nomeCidade2, nomeCidade);
    }


    
    return 0;
}