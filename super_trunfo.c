#include <stdio.h>
#include <string.h>

// Função para remover o '\n' de uma string lida com fgets
void removerQuebraDeLinha(char *str) {
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
}

// Função para limpar o buffer após scanf
void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    // Variáveis da carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Variáveis da carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // --- Carta 1 ---
    printf("Cadastro da Carta 1:\n");

    printf("Digite o Estado (letra de A a H): ");
    scanf(" %c", &estado1);
    limparBuffer();

    printf("Digite o Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    limparBuffer();

    printf("Digite o Nome da Cidade: ");
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);
    removerQuebraDeLinha(nomeCidade1);

    printf("Digite a População: ");
    scanf("%d", &populacao1);
    limparBuffer();

    printf("Digite a Área (em km²): ");
    scanf("%f", &area1);
    limparBuffer();

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    limparBuffer();

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);
    limparBuffer();

    // --- Carta 2 ---
    printf("\nCadastro da Carta 2:\n");

    printf("Digite o Estado (letra de A a H): ");
    scanf(" %c", &estado2);
    limparBuffer();

    printf("Digite o Código da Carta (ex: B02): ");
    scanf("%s", codigo2);
    limparBuffer();

    printf("Digite o Nome da Cidade: ");
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
    removerQuebraDeLinha(nomeCidade2);

    printf("Digite a População: ");
    scanf("%d", &populacao2);
    limparBuffer();

    printf("Digite a Área (em km²): ");
    scanf("%f", &area2);
    limparBuffer();

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    limparBuffer();

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);
    limparBuffer();

    // --- Exibição das cartas ---
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
