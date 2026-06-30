#include <stdio.h>

// Função para calcular a média de 3 notas
float calcularMedia(float n1, float n2, float n3) {
    float media;
    media = (n1 + n2 + n3) / 3;
    return media;
}

int main() {
    char nomes[5][50];
    float notas[5][3];
    float medias[5];
    int qtd;

    printf("Quantos alunos voce vai cadastrar (max 5)? ");
    scanf("%d", &qtd);

    // Entrada de dados
    for (int i = 0; i < qtd; i++) {
        printf("\nDigite o nome do aluno %d: ", i + 1);
        scanf("%s", nomes[i]);

        printf("Digite a nota 1: ");
        scanf("%f", &notas[i][0]);
        printf("Digite a nota 2: ");
        scanf("%f", &notas[i][1]);
        printf("Digite a nota 3: ");
        scanf("%f", &notas[i][2]);

        medias[i] = calcularMedia(notas[i][0], notas[i][1], notas[i][2]);
    }

    // Mostrando a tabela
    printf("\nNome\tNota1\tNota2\tNota3\tMedia\tSituacao\n");

    int maior = 0; // guarda o índice do aluno com maior média

    for (int i = 0; i < qtd; i++) {
        printf("%s\t%.1f\t%.1f\t%.1f\t%.1f\t", nomes[i], notas[i][0], notas[i][1], notas[i][2], medias[i]);

        if (medias[i] >= 7) {
            printf("Aprovado\n");
        } else {
            printf("Reprovado\n");
        }

        if (medias[i] > medias[maior]) {
            maior = i;
        }
    }

    printf("\nO aluno com a maior media foi: %s com media %.1f\n", nomes[maior], medias[maior]);

    return 0;
}