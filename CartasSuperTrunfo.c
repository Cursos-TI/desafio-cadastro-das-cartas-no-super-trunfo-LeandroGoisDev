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
    char condigoCarta[3];
    char nomeCidade[10];
    int populacao;
    float area;
    float pib;
    int qtdPontosTuristicos;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("DESAFIO SUPER TRUNFO");
    //Armazenando dados da carta 1
    printf("Digite os dados a seguir referente a Carta 1");
    printf("Digite a letra, em maiúsculo, referente ao Estado");
    scanf("%s", &estado);

    printf("Digite o código da carta, iniciando com uma letra maiúscula seguida de dois números");
    scanf("%s", &condigoCarta);

    printf("Entre com o nome da cidade");
    scanf("%s", &nomeCidade);

    printf("Digite o valor da população dessa cidade");
    scanf("%d", &populacao);

    printf("Digite o valor da área (em Km²) dessa cidade");
    scanf("%f", &area);

    printf("Digite o valor do PIB dessa cidade");
    scanf("%f", &pib);

    printf("Quantos pontos turísticos essa cidade possui");
    scanf("%d", &qtdPontosTuristicos);

    // Exibição dos Dados da Carta 1:
    printf("Carta 1");
    printf("Estado: %s", estado);
    printf("Código: %s", condigoCarta);
    printf("Nomde da cidade: %s", nomeCidade);
    printf("População: %d", populacao);
    printf("Área: %f", area);
    printf("PIB: R$%f", pib);
    printf("Número de Pontos Turísticos: %d", &qtdPontosTuristicos);

    //Armazenando dados da carta 2
    printf("Digite os dados a seguir referente a Carta 2");
    printf("Digite a letra, em maiúsculo, referente ao Estado");
    scanf("%s", &estado);

    printf("Digite o código da carta, iniciando com uma letra maiúscula seguida de dois números");
    scanf("%s", &condigoCarta);

    printf("Entre com o nome da cidade");
    scanf("%s", &nomeCidade);

    printf("Digite o valor da população dessa cidade");
    scanf("%d", &populacao);

    printf("Digite o valor da área (em Km²) dessa cidade");
    scanf("%f", &area);

    printf("Digite o valor do PIB dessa cidade");
    scanf("%f", &pib);

    printf("Quantos pontos turísticos essa cidade possui");
    scanf("%d", &qtdPontosTuristicos);

    // Exibição dos Dados da Carta 2:
    printf("Carta 2");
    printf("Estado: %s", estado);
    printf("Código: %s", condigoCarta);
    printf("Nomde da cidade: %s", nomeCidade);
    printf("População: %d", populacao);
    printf("Área: %f", area);
    printf("PIB: R$%f", pib);
    printf("Número de Pontos Turísticos: %d", &qtdPontosTuristicos);

    return 0;
}
