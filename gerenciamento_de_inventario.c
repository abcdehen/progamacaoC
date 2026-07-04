#include <stdio.h>

int main() {
    //declaração de variáveis
    char produtoA[30] = "Produto A";
    char produtoB[30] = "Produto B";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 10.50;
    float valorB = 20.40;

    unsigned int estoqueminimoA = 500;
    unsigned int estoqueminimoB = 2500;

    double valorTotalA = estoqueA * valorA;
    double valorTotalB = estoqueB * valorB;

    //Exibir informações do estoque
    printf("*** Programa de gerenciamento de estoque ***\n");
    printf("%s tem estoque de %u unidades, com valor unitário de R$ %.2f e estoque mínimo de %u \n", produtoA, estoqueA, valorA, estoqueminimoA);
    printf("%s tem estoque de %u unidades, com valor unitário de R$ %.2f e estoque mínimo de %u \n", produtoB, estoqueB, valorB, estoqueminimoB);

    //Comparação com o valor mínimo de estoque
    int resultadoA = estoqueA > estoqueminimoA;
    int resultadoB = estoqueB > estoqueminimoB;

    printf("1 representa sim e 0 representa não\n");
    printf("O estoque do %s está acima do mínimo? %d\n", produtoA, resultadoA);
    printf("O estoque do %s está acima do mínimo? %d\n", produtoB, resultadoB);

    //Comparação do valor total do estoque
    int resultadoValorTotal = valorTotalA > valorTotalB;
    printf("O valor total do estoque do %s (R$ %.2f) é maior que o do %s (R$ %.2f)? %d\n", produtoA, valorTotalA, produtoB, valorTotalB, resultadoValorTotal);

    return 0;
}