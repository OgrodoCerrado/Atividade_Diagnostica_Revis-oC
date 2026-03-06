#include <stdio.h>

int main() {
    int nota1 = 0;
    int nota2 = 0;
    int frequencia = 0;

    printf("Seja bem vindo a calculadora de notas e frequencia\n");
    printf("Para ser aprovado, sua media de notas deve ser 7 ou acima\n");
    printf("Seu numero de faltas deve seguir a frequencia minima de 75%%\n");

    printf("Insira aqui a nota do seu primeiro bimestre: ");
    scanf("%d", &nota1);

    printf("Insira aqui a nota do seu segundo bimestre: ");
    scanf("%d", &nota2);

    int media = (nota1 + nota2)/2;

    printf("Insira aqui quantos dias voce faltou a materia: ");
    scanf("%d", &frequencia);

    if(media > 7 && 4 >= frequencia) {
        printf("Aprovado!");
    } else {
        printf("Reprovado! Tente novamente no proximo semestre.");
    }

    return 0;
}