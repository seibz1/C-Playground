#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int linhas;
    int colunas;
    int **dados;
} matriz;

matriz *criar_matriz(int l, int c) {
    matriz *m = malloc(sizeof(matriz));
    m->linhas = l;
    m->colunas = c;
    m->dados = malloc(l * sizeof(int *));
    for (int i = 0; i < l; i++) {
        m->dados[i] = malloc(c * sizeof(int));
    }
    return m;
}

void liberar_matriz(matriz *m) {
    for (int i = 0; i < m->linhas; i++) {
        free(m->dados[i]);
    }
    free(m->dados);
    free(m);
}

void preencher_matriz(matriz *m) {
    for (int i = 0; i < m->linhas; i++) {
        for (int j = 0; j < m->colunas; j++) {
            scanf("%d", &m->dados[i][j]);
        }
    }
}

matriz *somar_matrizes(matriz *a, matriz *b) {
    if (a->linhas != b->linhas || a->colunas != b->colunas) return NULL;
    matriz *r = criar_matriz(a->linhas, a->colunas);
    for (int i = 0; i < a->linhas; i++) {
        for (int j = 0; j < a->colunas; j++) {
            r->dados[i][j] = a->dados[i][j] + b->dados[i][j];
        }
    }
    return r;
}

matriz *multiplicar_matrizes(matriz *a, matriz *b) {
    if (a->colunas != b->linhas) return NULL;
    matriz *r = criar_matriz(a->linhas, b->colunas);
    for (int i = 0; i < a->linhas; i++) {
        for (int j = 0; j < b->colunas; j++) {
            r->dados[i][j] = 0;
            for (int k = 0; k < a->colunas; k++) {
                r->dados[i][j] += a->dados[i][k] * b->dados[k][j];
            }
        }
    }
    return r;
}

matriz *transpor_matriz(matriz *m) {
    matriz *r = criar_matriz(m->colunas, m->linhas);
    for (int i = 0; i < m->linhas; i++) {
        for (int j = 0; j < m->colunas; j++) {
            r->dados[j][i] = m->dados[i][j];
        }
    }
    return r;
}

void imprimir_matriz(matriz *m) {
    for (int i = 0; i < m->linhas; i++) {
        for (int j = 0; j < m->colunas; j++) {
            printf("%d ", m->dados[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int l, c;

    printf("digite o numero de linhas e colunas das matrizes: ");
    scanf("%d %d", &l, &c);

    matriz *m1 = criar_matriz(l, c);
    matriz *m2 = criar_matriz(l, c);

    printf("digite os elementos da primeira matriz:\n");
    preencher_matriz(m1);

    printf("digite os elementos da segunda matriz:\n");
    preencher_matriz(m2);

    matriz *soma = somar_matrizes(m1, m2);
    matriz *transp = transpor_matriz(m1);

    printf("soma:\n");
    imprimir_matriz(soma);

    printf("transposta da primeira matriz:\n");
    imprimir_matriz(transp);

    liberar_matriz(m1);
    liberar_matriz(m2);
    liberar_matriz(soma);
    liberar_matriz(transp);

    return 0;
}