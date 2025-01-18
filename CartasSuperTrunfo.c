#include <stdio.h>

//declarar funções
void get_info(void);
void print_results(void);
float calculo_dp(float populacao, float area);
float calculo_pc(float pib, float populacao);
float calculo_sp(int populacao, int p_turisticos, float area, float pib, float densidade_pop, float pib_c);

//declarar variaveis
char nome[20], nome2[20];
char codigo[5], codigo2[5];
int populacao, populacao2, p_turisticos, p_turisticos2;
float area, area2, pib, pib2, densidade_pop, densidade_pop2, pib_c, pib_c2;
float super_poder, super_poder2;

//Função main chamando todas as outras funções e finalizando com o return 0
int main() {
    get_info();
    calculo_dp(populacao, area);
    calculo_dp(populacao2, area2);
    calculo_pc(pib, populacao);
    calculo_pc(pib2, populacao2);
    unsigned int super_poder = calculo_sp(populacao, p_turisticos, area, pib, densidade_pop, pib_c);
    unsigned int super_poder2 = calculo_sp(populacao2, p_turisticos2, area2, pib2, densidade_pop2, pib_c2);
    print_results();
    return 0;
}

// Cadastro das Cartas
// Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
void get_info() {
    printf("CIDADE Nº1\n");
    printf("Digite o nome da cidade Nº1: \n");
    scanf("%s", &nome[0]);
    printf("Digite o código da cidade Nº1: \n");
    scanf("%s", &codigo[0]);
    printf("Digite a população da cidade Nº1: \n");
    scanf("%d", &populacao);
    printf("Digite o número de pontos turisticos da cidade Nº1: \n");
    scanf("%d", &p_turisticos);
    printf("Digite a área da cidade Nº1: \n");
    scanf("%f", &area);
    printf("Digite o PIB da cidade Nº1: \n");
    scanf("%f", &pib);

    printf("CIDADE Nº2\n");
    printf("Digite o nome da cidade Nº2: \n");
    scanf("%s", &nome2[0]);
    printf("Digite o código da cidade Nº2: \n");
    scanf("%s", &codigo2[0]);
    printf("Digite a população da cidade Nº2: \n");
    scanf("%d", &populacao2);
    printf("Digite o número de pontos turisticos da cidade Nº2: \n");
    scanf("%d", &p_turisticos2);
    printf("Digite a área da cidade Nº2: \n");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade Nº2: \n");
    scanf("%f", &pib2);
}

//Função para imprimir valores, primeiro e ultimo printf com linhas extras por estética
void print_results() {
    printf("\n\n\n\n\n");
    printf("***RESULTADO DA BATALHA ENTRE AS CIDADES***\n");


    if (populacao > populacao2) {
        printf("%s é a vencedora em população\n", nome);
    }
    else if (populacao < populacao2) {
        printf("%s é a vencedora em população\n", nome2);
    }
    else {
        printf("Temos um empate em população\n");
    }


    if (p_turisticos > p_turisticos2) {
        printf("%s é a vencedora em pontos turisticos\n", nome);
    }
    else if (p_turisticos < p_turisticos2) {
        printf("%s é a vencedora em pontos turisticos\n", nome2);
    }
    else {
        printf("Temos um empate em pontos turisticos\n");
    }


    if (area > area2) {
        printf("%s é a vencedora em Área\n", nome);
    }
    else if (area < area2) {
        printf("%s é a vencedora em Área\n", nome2);
    }
    else {
        printf("Temos um empate em Área\n");
    }


    if (pib > pib2) {
        printf("%s é a vencedora em PIB\n", nome);
    }
    else if (pib < pib2) {
        printf("%s é a vencedora em PIB\n", nome2);
    }
    else {
        printf("Temos um empate em PIB\n");
    }


    if (densidade_pop2 > densidade_pop) {
        printf("%s é a vencedora em densidade populacional\n", nome);
    }
    else if (densidade_pop2 < densidade_pop) {
        printf("%s é a vencedora em densidade populacional\n", nome2);
    }
    else {
        printf("Temos um empate em densidade populacional\n");
    }


    if (pib_c > pib_c2) {
        printf("%s é a vencedora em PIB per capita\n", nome);
    }
    else if (pib_c < pib_c2) {
        printf("%s é a vencedora em PIB per capita\n", nome2);
    }
    else {
        printf("Temos um empate em PIB per capita\n");
    }


    if (super_poder > super_poder2) {
        printf("%s é a vencedora em SUPER PODER\n", nome);
    }
    else if (super_poder < super_poder2) {
        printf("%s é a vencedora em SUPER PODER\n", nome2);
    }
    else {
        printf("Temos um empate em SUPER PODER\n");
    }
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

float calculo_sp(int populacao, int p_turisticos, float area, float pib, float densidade_pop, float pib_c) {
    super_poder = populacao + p_turisticos + area + pib + densidade_pop + pib_c;
    return super_poder;
}