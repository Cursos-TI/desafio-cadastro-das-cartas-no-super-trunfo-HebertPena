#include <stdio.h>

//declarar funções
void get_info(void);
void print_info(void);
float calculo_dp(float populacao, float area);
float calculo_pc(float pib, float populacao);

//declarar variaveis
char nome[20];
char codigo[5];
int populacao, p_turisticos;
float area, pib, densidade_pop, pib_c;

//Função main chamando todas as outras funções e finalizando com o return 0
int main() {
    get_info();
    calculo_dp(populacao, area);
    calculo_pc(pib, populacao);
    print_info();
    return 0;
}

// Cadastro das Cartas
// Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
void get_info() {
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
}

//Função para imprimir valores, primeiro e ultimo printf com linhas extras por estética
void print_info() {
    printf("\n\n\n\n\n\n\n");
    printf("Cidade: %s\n", nome);
    printf("Código: %s\n", codigo);
    printf("População: %d\n", populacao);
    printf("Pontos turisticos: %d\n", p_turisticos);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Densidade populacional: %.2f\n", densidade_pop);
    printf("PIB per capita: %.2f\n", pib_c);
    printf("\n\n\n\n");
}

//função para calculo da densidade populacional
float calculo_dp(float populacao, float area) {
    densidade_pop = populacao / area;
    return densidade_pop;
}

//função para calculo do PIB per capita
float calculo_pc(float pib, float populacao) {
    pib_c = pib / populacao;
    return pib_c;
}
