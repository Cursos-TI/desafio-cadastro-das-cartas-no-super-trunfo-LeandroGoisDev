#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

// Meu Código Leandro

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    //Inicializando variáveis
    char estado;
    char codigoCarta[4];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int qtdPontosTuristicos;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
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

    // Exibição dos Dados da Carta 1:
    printf("\nCarta 1");
    printf("\nEstado: %c", estado);
    printf("\nCódigo: %s", codigoCarta);
    printf("\nNomde da cidade: %s", nomeCidade);
    printf("\nPopulação: %d", populacao);
    printf("\nÁrea: %f", area);
    printf("\nPIB: R$%f", pib);
    printf("\nNúmero de Pontos Turísticos: %d", qtdPontosTuristicos);

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

    // Exibição dos Dados da Carta 2:
    printf("\nCarta 2");
    printf("\nEstado: %c", estado);
    printf("\nCódigo: %s", codigoCarta);
    printf("\nNomde da cidade: %s", nomeCidade);
    printf("\nPopulação: %d", populacao);
    printf("\nÁrea: %f", area);
    printf("\nPIB: R$%f", pib);
    printf("\nNúmero de Pontos Turísticos: %d", qtdPontosTuristicos);

    return 0;
}
