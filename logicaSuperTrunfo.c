#include <stdio.h>

int main() {
    // ===================================================
    //               VARIÁVEIS DAS CARTAS
    // ===================================================

    // --- Variáveis para a Carta 1 ---
    char estado1[3]; 
    char codigo1[10];
    char cidade1[50];
    int populacao1; // Usando int, conforme solicitado no nível novato
    float area1;
    float pib1;
    int pontos_turismo1;
    float densidade_populacional1;
    float renda_per_capita1;

    // --- Variáveis para a Carta 2 ---
    char estado2[3]; 
    char codigo2[10];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turismo2;
    float densidade_populacional2;
    float renda_per_capita2;

    // ===================================================
    //               LEITURA DOS DADOS
    // ===================================================

    printf("Olá, Bem vindo ao Super Trunfo - NÍVEL NOVATO!\n");

    // --- Leitura da Carta 1 ---
    printf("\n--- Cadastro da Carta 1 ---\n");
    printf("Digite o estado (sigla de 2 letras): ");
    scanf("%2s", estado1);
    printf("Digite o codigo da carta: ");
    scanf("%9s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf("%49s", cidade1);
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1); // %d para int
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade (em milhões): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turismo1);

    // --- Leitura da Carta 2 ---
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Digite o estado (sigla de 2 letras): ");
    scanf("%2s", estado2);
    printf("Digite o codigo da carta: ");
    scanf("%9s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf("%49s", cidade2);
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2); // %d para int
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade (em milhões): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turismo2);

    // ===================================================
    //              CÁLCULOS DOS ATRIBUTOS
    // ===================================================

    // Calcula a densidade populacional e renda per capita para ambas as cartas
    densidade_populacional1 = (float)populacao1 / area1;
    renda_per_capita1 = (pib1 * 1000000) / (float)populacao1;

    densidade_populacional2 = (float)populacao2 / area2;
    renda_per_capita2 = (pib2 * 1000000) / (float)populacao2;

    // ===================================================
    //      COMPARAÇÃO DAS CARTAS (Nível Novato)
    // ===================================================

    // vou comparar o atributo "População".
    
    printf("\n\n---------------------------------------------------\n");
    printf("       Comparação de Cartas (Atributo: População)\n");
    printf("---------------------------------------------------\n\n");

    // Mostra os valores das duas cartas para o atributo escolhido
    printf("Carta 1 - %s (%s): %d habitantes\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d habitantes\n", cidade2, estado2, populacao2);
    
    // Inicia a estrutura de decisão para determinar o vencedor
    // Caso 1: A população da Carta 1 é maior que a da Carta 2
    if (populacao1 > populacao2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
    }
    // Caso 2: Se o primeiro caso for falso, verifica se a população da Carta 2 é maior
    else if (populacao2 > populacao1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
    }
    // Caso 3: Se nenhum dos casos acima for verdadeiro, as populações são iguais
    else {
        printf("\nResultado: Houve um empate!\n");
    }
    
    printf("\n---------------------------------------------------\n");

    return 0;
}