#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Erick

void PrintCartas(char codigoCidade[5], char nome[25], int populacao, int numeroPontosTuristicos, double area, double pib, double densidadePopulacional, double pibPerCapta) {
    printf("\n\n------------------------------\n");
            printf("Código da cidade: %s \n", codigoCidade);
            printf("Nome da cidade: %s \n", nome);
            printf("N° de pontos turísticos da cidade: %d \n", numeroPontosTuristicos);
            printf("População da cidade: %d \n", populacao);
            printf("Área da cidade: %.2f \n", area); //uso de %.2f para limitar o valor depois da virgula a 2 casas decimais
            printf("PIB da cidade: %.2f \n", pib);
            printf("Densidade populacional da cidade: %.2f \n", densidadePopulacional);
            printf("PIB per capta da cidade: %.2f \n", pibPerCapta);
            printf("------------------------------\n\n");
}

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char codigoCidade[5];
    char nome[25];
    int populacao;
    int numeroPontosTuristicos;
    double area;
    double pib;
    double densidadePopulacional, pibPerCapta;
    int opcao;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    printf("CADASTRO DE CARTAS SUPER TRUNFO\n\n");
    do{  //estrutura de repetição para o cadastro de mais de uma carta sem encerrar o programa
        printf("Para cadastrar carta digite 1\nPara Sair digite 2\n");
        scanf("%d", &opcao);
        switch (opcao)  //estrutura condicional para o usuário escolher a opção de cadastro ou encerrar programa
        {
        case 1:
            printf("Digite o código da cidade (3 letras): \n");
            scanf("%s", &codigoCidade);
            scanf("%*c");

            printf("Digite o nome da cidade: \n");            
            scanf("%[^\n]", &nome);  //uso de %[^\n] no lugar de %s para ler espaços caso o nome da cidade seja um nome composto. Ex: Porto Alegre

            printf("Digite o número de pontos turísticos da cidade: \n");
            scanf("%d", &numeroPontosTuristicos);

            printf("Digite a população da cidade: \n");
            scanf("%d", &populacao);

            printf("Digite a área (Km²) da cidade: \n");
            scanf("%lf", &area);

            printf("Digite o PIB da cidade: \n");
            scanf("%lf", &pib);
            
            densidadePopulacional = (double) populacao / area;
            pibPerCapta = pib / (double) populacao;

            PrintCartas(codigoCidade, nome, populacao, numeroPontosTuristicos, area, pib, densidadePopulacional, pibPerCapta);

            break;
        
        case 2:
            printf("Até logo!");
            break;

        default:
            printf("Opção inválida! Tente novamente.");
            break;
        }
    }while(opcao != 2);

    return 0;
}
