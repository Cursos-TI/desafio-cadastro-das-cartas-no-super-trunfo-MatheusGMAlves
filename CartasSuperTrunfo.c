#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Matheus

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    int código_da_cidade, número_de_pontos_turísticos;
    double população, área, PIB;
    char nome[50];

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Digite o Código da Cidade: \n");
    scanf("%d", &código_da_cidade);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &número_de_pontos_turísticos);

    printf("Digite a população: \n");
    scanf("%lf", &população);

    printf("Digite a área: \n");
    scanf("%lf", &área);

    printf("Digite o PIB: \n");
    scanf("%lf", &PIB);

    printf("Digite o nome: \n");
    scanf("%s", nome);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Código da cidade: %d\n", código_da_cidade);
    printf("Número de pontos turísticos: %d\n", número_de_pontos_turísticos);
    printf("População: %lf\n", população);
    printf("Área: %lf\n", área);
    printf("PIB: %lf\n", PIB);
    printf("Nome: %s\n", nome);

    return 0;
}
