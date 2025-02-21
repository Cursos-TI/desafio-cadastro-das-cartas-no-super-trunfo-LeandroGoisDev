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

    densidadePopulacional = (float)populacao / area;
    pibPerCapita = (pib * 1e9) / (float)populacao;

    // Exibição dos Dados da Carta 2:
    printf("\nCarta 2");
    printf("\nEstado: %c", estado);
    printf("\nCódigo: %s", codigoCarta);
    printf("\nNome da cidade: %s", nomeCidade);
    printf("\nPopulação: %d", populacao);
    printf("\nÁrea: %f", area);
    printf("\nPIB: R$%f", pib);
    printf("\nNúmero de Pontos Turísticos: %d", qtdPontosTuristicos);
    printf("\nDensidade demografica da cidade é: %.2f", densidadePopulacional);
    printf("\nO PIB per capita é: %.2f reais", pibPerCapita);
    printf("\n");

    
    return 0;
}