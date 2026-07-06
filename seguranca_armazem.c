#include <stdio.h>

int main() {
    //declaração de variáveis
    float temperatura, umidade;
    unsigned int estoque;

    printf("*** Programa de verificação de segurança do armazém ***\n");
    printf("Digite a temperatura do armazém (em °C): \n");
    scanf("%f", &temperatura);
    printf("Digite a umidade do armazém (em %%): \n");
    scanf("%f", &umidade);
    printf("Digite o estoque do armazém: \n");
    scanf("%u", &estoque);

    if(temperatura > 30){
        printf("A temperatura está alta! \n");
    } else{
        printf("A temperatura está dentro dos parâmetros! \n");
    }

    if(umidade > 50){
        printf("A umidade está elevada! \n");
    } else{
        printf("A umidade está dentro dos parâmetros! \n");
    }

    if(estoque < 1000){
        printf("O estoque está abaixo do mínimo! \n");
    } else{
        printf("O estoque está normal! \n");
    }
}