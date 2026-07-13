#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10

int main(){
    int matriz[LINHAS][COLUNAS];
    int target;
    int found = 0;
    int soma = 1;

    printf("Digite um número de 1 a 100 para ser encontrado na matriz:\n");
    scanf("%d", &target);

    for(int i = 0; i < LINHAS; i++){
        for(int j = 0; j < COLUNAS; j++){
            matriz[i][j] = soma;
            soma++;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    for(int i = 0; i < LINHAS; i++){
        for(int j = 0; j < COLUNAS; j++){
            if(matriz[i][j] == target){
                printf("O elemento %d foi encontrado no indice (%d, %d)", target, i, j);
                found = 1;
                break;
            }
        }
        if(found) break;
    }
    if(!found){
        printf("O elemento %d não foi encontrado na matriz \n", target);
    }

    return 0;
}