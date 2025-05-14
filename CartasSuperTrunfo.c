#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Super Trunfo em c: Desenvolvendo a Lógica do Jogo
// O nível novato já foi desenvolvido no desafio passado
//Teste Erick

void PrintCarta(char codigoCidade[5], char estado[3], char nome[25], unsigned long int populacao, int numeroPontosTuristicos, float area, float pib, float densidadePopulacional, float pibPerCapta, float superPoder) {
    printf("\n\n------------------------------\n");
            printf("Código da cidade: %s \n", codigoCidade);
            printf("Estado: %s \n", estado);
            printf("Nome da cidade: %s \n", nome);
            printf("N° de pontos turísticos da cidade: %d \n", numeroPontosTuristicos);
            printf("População da cidade: %lu \n", populacao);
            printf("Área da cidade: %.2f \n", area); //uso de %.2f para limitar o valor depois da virgula a 2 casas decimais
            printf("PIB da cidade: %.2f \n", pib);
            printf("Densidade populacional da cidade: %.2f \n", densidadePopulacional);
            printf("PIB per capta da cidade: %.2f \n", pibPerCapta);
            printf("Super Poder da Carta: %.2f \n", superPoder);
            printf("------------------------------\n\n");
}

int CompararCartasFloat(float valor1, float valor2){ //função comum para comparação de área, pib, densidade, pib per capta e super poder.
    if(valor1 > valor2){
        return 1;
    }else{
        return 0;
    }
}

int CompararCartasPontoTuristico(int valor1, int valor2){
    if(valor1 > valor2){
        return 1;
    }else{
        return 0;
    }
}

int CompararCartasPopulacao(unsigned long int valor1, unsigned long int valor2){
    if(valor1 > valor2){
        return 1;
    }else{
        return 0;
    }
}

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado1[5], estado2[5];
    char codigoCarta1[5], codigoCarta2[5];
    char nome1[25], nome2[25];
    unsigned long int populacao1, populacao2;
    int numeroPontosTuristicos1, numeroPontosTuristicos2;
    float area1, area2;
    float pib1, pib2;
    float densidadePopulacional1, pibPerCapta1, densidadePopulacional2, pibPerCapta2;
    float superPoder1, superPoder2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    printf("CADASTRO DE CARTAS SUPER TRUNFO\n\n");
    printf("Cadastro da carta 1\n");  
    
    printf("Digite o código da primeira carta: \n");
    scanf("%s", &codigoCarta1);

    printf("Digite o estado (Sigla) da primeira carta: \n");
    scanf("%s", &estado1);

    printf("Digite o nome da cidade da primeira carta: \n");            
    scanf("%s", &nome1);  //uso de %[^\n] no lugar de %s para ler espaços caso o nome da cidade seja um nome composto. Ex: Porto Alegre

    printf("Digite o número de pontos turísticos da cidade da primeira carta: \n");
    scanf("%d", &numeroPontosTuristicos1);

    printf("Digite a população da cidade da primeira carta: \n");
    scanf("%lu", &populacao1);

    printf("Digite a área (Km²) da cidade da primeira carta: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade da primeira carta: \n");
    scanf("%f", &pib1);
    
    densidadePopulacional1 = (float) populacao1 / area1;
    pibPerCapta1 = pib1 / (float) populacao1;
    superPoder1 = numeroPontosTuristicos1 + populacao1 + area1 + pib1 + pibPerCapta1 - densidadePopulacional1;

    PrintCarta(codigoCarta1, estado1, nome1, populacao1, numeroPontosTuristicos1, area1, pib1, densidadePopulacional1, pibPerCapta1, superPoder1);

    printf("Cadastro da carta 2\n");  
    
    printf("Digite o código da carta da segunda carta: \n");
    scanf("%s", &codigoCarta2);

    printf("Digite o estado (Sigla) da segunda carta: \n");
    scanf("%s", &estado2);

    printf("Digite o nome da cidade da segunda carta: \n");            
    scanf("%s", &nome2);  //uso de %[^\n] no lugar de %s para ler espaços caso o nome da cidade seja um nome composto. Ex: Porto Alegre

    printf("Digite o número de pontos turísticos da cidade da segunda carta: \n");
    scanf("%d", &numeroPontosTuristicos2);

    printf("Digite a população da cidade da segunda carta: \n");
    scanf("%lu", &populacao2);

    printf("Digite a área (Km²) da cidade da segunda carta: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade da segunda carta: \n");
    scanf("%f", &pib2);
    
    densidadePopulacional2 = (float) populacao2 / area2;
    pibPerCapta2 = pib2 / (float) populacao2;
    superPoder2 = numeroPontosTuristicos2 + populacao2 + area2 + pib2 + pibPerCapta2 - densidadePopulacional2;

    PrintCarta(codigoCarta2, estado2, nome2, populacao2, numeroPontosTuristicos2, area2, pib2, densidadePopulacional2, pibPerCapta2, superPoder2);

    printf("***Fase das Comparações***\n\n");

    printf("População: ");
    if(CompararCartasPopulacao(populacao1, populacao2) == 1){
        printf("A Carta 1 Venceu!!\n");
    }else{
        printf("A Carta 2 Venceu!!\n");
    }

    printf("Número de Pontos Turísticos: ");
    if(CompararCartasPontoTuristico(numeroPontosTuristicos1, numeroPontosTuristicos2) == 1){
        printf("A Carta 1 Venceu!!\n");
    }else{
        printf("A Carta 2 Venceu!!\n");
    }

    printf("Área: ");
    if(CompararCartasFloat(area1, area2) == 1){
        printf("A Carta 1 Venceu!!\n");
    }else{
        printf("A Carta 2 Venceu!!\n");
    }

    printf("PIB: ");
    if(CompararCartasFloat(pib1, pib2) == 1){
        printf("A Carta 1 Venceu!!\n");
    }else{
        printf("A Carta 2 Venceu!!\n");
    }

    printf("Densidade Populacional: ");
    if(CompararCartasFloat(densidadePopulacional1, densidadePopulacional2) == 0){ //Aqui foi comparado com 0 para a carta 1 pois Densidade Populacional ganha o menor valor invés do maior
        printf("A Carta 1 Venceu!!\n");
    }else{
        printf("A Carta 2 Venceu!!\n");
    }

    printf("PIB Per Capta: ");
    if(CompararCartasFloat(pibPerCapta1, pibPerCapta2) == 1){
        printf("A Carta 1 Venceu!!\n");
    }else{
        printf("A Carta 2 Venceu!!\n");
    }
    
    printf("Super Poder: ");
    if(CompararCartasFloat(superPoder1, superPoder2) == 1){
        printf("A Carta 1 Venceu!!\n");
    }else{
        printf("A Carta 2 Venceu!!\n");
    }

    return 0;
}
