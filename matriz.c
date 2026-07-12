#include <stdio.h>

int main(){

    int index;

    char *Alunos[3][3] = {
        {"aluno 1", "Pt: 30", "Mat: 90"},
        {"aluno 2", "Pt: 60", "Mat: 60"},
        {"aluno 3", "Pt: 90", "Mat: 30"}
    };

    printf("*** Programa de visualização de notas de alunos *** \n");
    printf("Digite o número do aluno que queira ver as notas:\n");
    printf("Para o aluno 1, digite 0\n");
    printf("Para o aluno 2, digite 1\n");
    printf("Para o aluno 3, digite 2\n");
    scanf("%d", &index);
    while(index != 0 && index != 1 && index != 2){
        printf("Opção inválida, tente novamente\n");
        printf("Digite o número do aluno que queira ver as notas:\n");
        printf("Para o aluno 1, digite 0\n");
        printf("Para o aluno 2, digite 1\n");
        printf("Para o aluno 3, digite 2\n");
        scanf("%d", &index);
    }

    printf("As notas do %s são: %s, %s \n", Alunos[index][0], Alunos[index][1], Alunos[index][2]);
    
    return 0;
}