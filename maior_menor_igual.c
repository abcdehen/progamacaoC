#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numerojogador, numerocomputador, resultado;
    char tipocomparacao;

    // Gerar números aleatórios
    srand(time(0));
    numerocomputador = rand() % 100 + 1; // Número entre 1 e 100

    // Início do jogo
    printf("Bem-vindo ao jogo Maior, Menor ou Igual!\n");
    printf("Você deve escolher um número e o tipo de comparação.\n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. Igual\n");

    printf("Escolha a comparação:\n");
    scanf("%c", &tipocomparacao);

    printf("Digite seu número (entre 1 e 100):\n");
    scanf("%d", &numerojogador);

    // Lógica para a comparação
    switch (tipocomparacao)
    {
    case 'M':
    case 'm':
        printf("Você escolheu a opção maior!\n");
        resultado = numerojogador > numerocomputador ? 1 : 0;
        printf("O número do computador é %d e o do jogador é %d \n", numerocomputador, numerojogador);
        break;
    case 'N':
    case 'n':
        printf("Você escolheu a opção menor!\n");
        resultado = numerojogador < numerocomputador ? 1 : 0;
        printf("O número do computador é %d e o do jogador é %d \n", numerocomputador, numerojogador);
        break;
    case 'I':
    case 'i':
        printf("Você escolheu a opção igual!\n");
        resultado = numerojogador == numerocomputador ? 1 : 0;
        printf("O número do computador é %d e o do jogador é %d \n", numerocomputador, numerojogador);
        break;
    default:
        printf("Opção inválida, tente novamente\n");
        break;
    }

    // Exibindo quem venceu
    if (resultado == 1){
        printf("Parabéns, você venceu!\n");
    } else{
        printf("Infelizmente, você perdeu!\n");
    }
}