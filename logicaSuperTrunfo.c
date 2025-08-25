#include <stdio.h>

int main(){
    char estadoA01[50], estadoB02[50]; //declaração das variáveis
    char codCartaA01[50], codCartaB02[50];
    char nCidadeA01[50], nCidadeB02[50];
    float areaA01, areaB02;
    float pibA01, pibB02;
    int NPturismoA01, NPturismoB02;
    int populacaoA01, populacaoB02;
    
    //declaração das novas variáveis (pib per capita e densidade populacional)
    float densiPopA01, densiPopB02;
    float pibperCapitaA01, pibperCapitaB02;

    printf("Inicie abaixo o cadastro da primeira carta do SUPER TRUNFO\n"); //Mensagem explicativa para o usuário
    
    printf("Informe o nome do estado: "); //início das perguntas para interação com o usuário e armazenamento dos dados ref a carta 1
    scanf("%s", &estadoA01);

    printf("Informe o código da carta: ");
    scanf("%s", &codCartaA01);

    printf("Informe o nome da cidade: ");
    scanf("%s", &nCidadeA01);

    printf("Informe o número da habitantes: ");
    scanf("%d", &populacaoA01);

    printf("Informe o tamanho da área do estado em km²: ");
    scanf(" %f", &areaA01);

    printf("Digite agora o valor do PIB: ");
    scanf(" %f", &pibA01);

    printf("E por último, digite o número de pontos turísticos: ");
    scanf("%d", &NPturismoA01);

    printf("Agora, vamos cadastrar a segunda carta!\n"); //Mensagem explicativa para o usuário

    printf("Informe o nome do estado: "); //início das perguntas para interação com o usuário e armazenamento dos dados ref a carta 2
    scanf("%s", &estadoB02);

    printf("Informe o código da carta: ");
    scanf("%s", &codCartaB02);

    printf("Informe o nome da cidade: ");
    scanf("%s", &nCidadeB02);

    printf("Informe o número da habitantes: ");
    scanf("%d", &populacaoB02);

    printf("Informe o tamanho da área do estado em km²: ");
    scanf("%f", &areaB02);

    printf("Digite agora o valor do PIB: ");
    scanf(" %f", &pibB02);

    printf("E por último, digite o número de pontos turísticos: ");
    scanf("%d", &NPturismoB02);

    //declarando os resultados que cada variável recebe
    densiPopA01 = populacaoA01 / areaA01;
    densiPopB02 = populacaoB02 / areaB02;
    pibperCapitaA01 = pibA01 / populacaoA01;
    pibperCapitaB02 = pibB02 / populacaoB02;

    printf(" \n"); //espaço para facilitar a leitura e organização
    printf("Veja abaixo as duas cartas cadastradas\n"); //informação para o usuário
    printf(" \n"); //espaço para facilitar a leitura e organização

    printf("Carta nº1\n"); //exibição na tela dos dados da carta 1
    printf("Estado: %s\n", estadoA01);
    printf("Cód. Carta: %s\n", codCartaA01);
    printf("Cidade: %s\n", nCidadeA01);
    printf("População: %d habitantes\n", populacaoA01);
    printf("Área em km²: %.2f\n", areaA01);
    printf("PIB: %.2f\n", pibA01);
    printf("Pontos turísticos: %d\n", NPturismoA01);
    printf("Densidade populacional: %.2f hab/km²\n", densiPopA01);
    printf("PIB per capita: %.2f reais\n", pibperCapitaA01);

    printf("Carta nº2\n"); //exibição na tela dos dados da carta 2
    printf("Estado: %s\n", estadoB02);
    printf("Cód. Carta: %s\n", codCartaB02);
    printf("Cidade: %s\n", nCidadeB02);
    printf("População: %d habitantes\n", populacaoB02);
    printf("Área em km²: %.2f\n", areaB02);
    printf("PIB: %.2f\n", pibB02);
    printf("Pontos turísticos: %d\n", NPturismoB02);
    printf("Densidade populacional: %.2f hab/km²\n", densiPopB02);
    printf("PIB per capita: %.2f reais\n\n", pibperCapitaB02);

    //exibiçao para o usuário de que o atributo população será comparado entre carta1 e carta2
    printf("Comparação de cartas (Atributo: População):\n\n");
    printf("Carta 1 - %s - População: %d habitantes\n", estadoA01, populacaoA01);
    printf("Carta 2 - %s - População: %d habitantes\n\n", estadoB02, populacaoB02);

    //inicio da logica de comparaçao
    if ( populacaoA01 > populacaoB02 ){
        printf("Carta 1 (%s) venceu!\n", estadoA01);
    } else{
        printf("Carta 2 (%s) venceu!\n", estadoB02);
    }
    
return 0;
}
