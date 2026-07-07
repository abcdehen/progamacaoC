#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int escolha_jogador, escolha_computador;
    srand(time(0));

    printf("*** Jogo de jokenpô *** \n");
    printf("Escolha uma opção: \n");
    printf("1. Pedra \n");
    printf("2. Papel \n");
    printf("3. Tesoura \n");
    scanf("%d", &escolha_jogador);
    escolha_computador = rand() % 3 + 1;

    switch(escolha_jogador) {
        case 1:
            printf("Jogador: Pedra - ");
            break;
        case 2:
            printf("Jogador: Papel - ");
            break;
        case 3:
            printf("Jogador: Tesoura - ");
            break;
        default:
            printf("Opção inválida \n");
            break;
    }

    switch(escolha_computador) {
        case 1:
            printf("Computador: Pedra \n");
            break;
        case 2:
            printf("Computador: Papel \n");
            break;
        case 3:
            printf("Computador: Tesoura \n");
            break;
    }

    if(escolha_jogador == escolha_computador) {
        printf("### O jogo empatou! ### \n");
    } else if((escolha_jogador == 1) && (escolha_computador == 3) || (escolha_jogador == 2) && (escolha_computador == 1) || (escolha_jogador == 3) && (escolha_computador == 2)){
        printf("### Parábens, você venceu! ### \n");
    } else{
        printf("### Você perdeu! ### \n");
    }

    return 0;
}