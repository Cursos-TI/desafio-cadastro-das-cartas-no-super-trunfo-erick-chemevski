#include <stdio.h>
#include <stdbool.h>

// Desafio Super Trunfo - Países
// Tema 2 - Super Trunfo em c: Desenvolvendo a Lógica do Jogo
// Nível mestre
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
    return (valor1 > valor2) ? 1 : 0;
}

int CompararCartasPontoTuristico(int valor1, int valor2){
    return (valor1 > valor2) ? 1 : 0;
}

int CompararCartasPopulacao(unsigned long int valor1, unsigned long int valor2){
    return (valor1 > valor2) ? 1 : 0;
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
    bool continuar; //variável para sair do loop de escolha de atributo
    int opcao1, opcao2, resultado1, resultado2;

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
    scanf("%s", &nome1);  

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
    scanf("%s", &nome2);  

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
    
    do{
        continuar = false; //Condição de saída da repetição
        printf("Qual o primeiro atributo que você deseja comparar? (Digite um número de 1 a 7)\n");
        printf("(1) População\n");
        printf("(2) Número de Pontos Turísticos\n");
        printf("(3) Área\n");
        printf("(4) PIB\n");
        printf("(5) Densidade Populacional\n");
        printf("(6) PIB Per Capta\n");
        printf("(7) Super Poder\n");
        
        scanf("%d", &opcao1);

        switch (opcao1)
        {
        case 1:
            printf("População é o primeiro atributo! ");
            resultado1 = CompararCartasPopulacao(populacao1, populacao2);
            break;

        case 2:
            printf("Número de Pontos Turísticos é o primeiro atributo! ");
            resultado1 = CompararCartasPontoTuristico(numeroPontosTuristicos1, numeroPontosTuristicos2);
            break;

        case 3:
            printf("Área é o primeiro atributo! ");
            resultado1 = CompararCartasFloat(area1, area2);
            break;

        case 4:
            printf("PIB é o primeiro atributo! ");
            resultado1 = CompararCartasFloat(pib1, pib2);
            break;

        case 5:
            printf("Densidade Populacional é o primeiro atributo! ");
            resultado1 = !CompararCartasFloat(densidadePopulacional1, densidadePopulacional2); //Aqui foi usado negação para que o valor da variável reflita se ganhou a carta 1 ou 2, porque a carta 1 ganha se o resultado for 0, já que Densidade Populacional ganha o menor valor invés do maior, e na lógica a carta vencedora é a carta 1 se o valor for 1.
            break;

        case 6:
            printf("PIB Per Capta é o primeiro atributo! ");
            resultado1 = CompararCartasFloat(pibPerCapta1, pibPerCapta2);
            break;

        case 7:
            printf("Super Poder é o primeiro atributo! ");
            resultado1 = CompararCartasFloat(superPoder1, superPoder2) ;
            break;
       
        default: //Qualquer valor diferente do intervalo 1-7 acusa opção inválida e volta para o menu de escolha
            printf("Opção inválida, tente novamente\n");
            continuar = true;
            break;
        }
        printf("\n\n");
    }while(continuar == true);

    do{
        continuar = false; //Condição de saída da repetição
        printf("Qual o segundo atributo que você deseja comparar? (Digite um número de 1 a 7)\n");
        printf("(1) População\n");
        printf("(2) Número de Pontos Turísticos\n");
        printf("(3) Área\n");
        printf("(4) PIB\n");
        printf("(5) Densidade Populacional\n");
        printf("(6) PIB Per Capta\n");
        printf("(7) Super Poder\n");
        
        scanf("%d", &opcao2);

        if(opcao2 == opcao1){
            printf("O segundo atributo não pode ser igual ao primeiro! Tente de novo\n");
            continuar = true;
        }else{
            switch (opcao2)
            {
            case 1:
                printf("População é o segundo atributo! ");
                resultado2 = CompararCartasPopulacao(populacao1, populacao2);
                break;

            case 2:
                printf("Número de Pontos Turísticos é o segundo atributo! ");
                resultado2 = CompararCartasPontoTuristico(numeroPontosTuristicos1, numeroPontosTuristicos2);
                break;

            case 3:
                printf("Área é o segundo atributo! ");
                resultado2 = CompararCartasFloat(area1, area2);
                break;

            case 4:
                printf("PIB é o segundo atributo! ");
                resultado2 = CompararCartasFloat(pib1, pib2);
                break;

            case 5:
                printf("Densidade Populacional é o segundo atributo! ");
                resultado2 = !CompararCartasFloat(densidadePopulacional1, densidadePopulacional2); //Aqui foi usado negação para que o valor da variável reflita se ganhou a carta 1 ou 2, porque a carta 1 ganha se o resultado for 0, já que Densidade Populacional ganha o menor valor invés do maior, e na lógica a cartão vencedora é a carta 1 se o valor for 1.
                break;

            case 6:
                printf("PIB Per Capta é o segundo atributo! ");
                resultado2 = CompararCartasFloat(pibPerCapta1, pibPerCapta2);
                break;

            case 7:
                printf("Super Poder é o segundo atributo! ");
                resultado2 = CompararCartasFloat(superPoder1, superPoder2) ;
                break;
        
            default: //Qualquer valor diferente do intervalo 1-7 acusa opção inválida e volta para o menu de escolha
                printf("Opção inválida, tente novamente\n");
                continuar = false;
                break;
            }
        }
        
        printf("\n\n");
    }while(continuar == true);
    
    if(resultado1 && resultado2){ //ser for 1 e 1, o resultado é true e entra no if
        printf("A carta 1 venceu!!\n");
    }else if(resultado1 != resultado2){ //se forem resultados diferentes significa que houve empate
        printf("Empatou!!\n");
    }else{
        printf("A carta 2 venceu!!\n"); //se não cair em nenhuma das condições anteriores o resultado é 0 e 0, a carta 2 vence
    }

    return 0;
}
