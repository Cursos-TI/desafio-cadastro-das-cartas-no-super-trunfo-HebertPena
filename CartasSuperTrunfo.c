#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char nome[20];
    char codigo[4];
    int populacao, p_turisticos;
    float area, pib;

    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome[0]);
    printf("Digite o código da cidade: \n");
    scanf("%s", &codigo[0]);
    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao);
    printf("Digite o número de pontos turisticos da cidade: \n");
    scanf("%d", &p_turisticos);
    printf("Digite a área da cidade: \n");
    scanf("%f", &area);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    //primeiro e ultimo printf apenas pulando linhas por estética
    printf("\n\n\n\n\n\n\n");
    printf("Cidade: %s\n", nome);
    printf("Código: %s\n", codigo);
    printf("População: %d\n", populacao);
    printf("Pontos turisticos: %d\n", p_turisticos);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("\n\n\n\n");

    return 0;
}
