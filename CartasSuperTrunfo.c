#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    int codigo_da_cidade, numero_de_pontos_turisticos, populacao, estado;
    float area, PIB; 
    char nome[50]; //*50 para dar um espaço maior para cidades com nomes compostos gigantes.

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Digite o Estado: \n");
    scanf("%d", &estado);

    printf("Digite o Nome da cidade: \n");
    scanf("%s", &nome);

    printf("Digite o Código da Cidade: \n");
    scanf("%d", &codigo_da_cidade);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numero_de_pontos_turisticos);

    printf("Digite a população: \n");
    scanf("%d", &populacao);
    
    //*Deixei que fosse o %lf (para o double) por não saber qual unidade de medida seria utilizada, se m² ou km², na via das duvidas o valor pode ser enfatizado da mesma forma.
    printf("Digite a área: \n");
    scanf("%f", &area);

    //*PIB também me utilizei do %lf pelo tamanho do valor de cidades.
    printf("Digite o PIB: \n");
    scanf("%f", &PIB);



    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    printf("Estado: %d\n", estado);
    printf("Código da cidade: %d\n", codigo_da_cidade);
    printf("Número de pontos turísticos: %d\n", numero_de_pontos_turisticos);
    printf("População: %d\n", populacao);
    printf("Área: %f\n", area);
    printf("PIB: %f\n", PIB);
    printf("Nome: %s\n", nome);

    return 0;

}