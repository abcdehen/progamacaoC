#include <stdio.h>

void recursivo1(int numero){
    if(numero > 0){
        printf("%d \n", numero);
        recursivo1(numero - 1);
    }
}
void recursivo2(int numero){
    if(numero > 0){
        recursivo2(numero - 1);
        printf("%d \n", numero);
    }
}

int main(){
    int quantidade = 10;
    printf("Contagem regressiva: \n");
    recursivo1(quantidade);

    printf("Contagem progressiva: \n");
    recursivo2(quantidade);

    return 0;
}