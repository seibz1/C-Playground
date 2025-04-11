#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam_nome 50
#define max 100

typedef struct {
    char nome[tam_nome];
    char telefone[20];
} contato;

typedef struct {
    contato lista[max];
    int total;
} agenda;

void iniciar_agenda(agenda *a) {
    a->total = 0;
}

void adicionar_contato(agenda *a, char *nome, char *telefone) {
    if (a->total < max) {
        strcpy(a->lista[a->total].nome, nome);
        strcpy(a->lista[a->total].telefone, telefone);
        a->total++;
    }
}

void remover_contato(agenda *a, char *nome) {
    int i, j;
    for (i = 0; i < a->total; i++) {
        if (strcmp(a->lista[i].nome, nome) == 0) {
            for (j = i; j < a->total - 1; j++) {
                a->lista[j] = a->lista[j + 1];
            }
            a->total--;
            break;
        }
    }
}

void buscar_contato(agenda *a, char *nome) {
    int i, achou = 0;
    for (i = 0; i < a->total; i++) {
        if (strcmp(a->lista[i].nome, nome) == 0) {
            printf("nome: %s\n", a->lista[i].nome);
            printf("telefone: %s\n", a->lista[i].telefone);
            achou = 1;
        }
    }
    if (!achou) {
        printf("contato nao encontrado\n");
    }
}

int main() {
    agenda a;
    iniciar_agenda(&a);
    int op;
    char nome[tam_nome], telefone[20];

    while (1) {
        printf("\n1 - adicionar\n2 - remover\n3 - buscar\n4 - sair\n");
        scanf("%d", &op);
        getchar();
        if (op == 1) {
            printf("nome: ");
            fgets(nome, tam_nome, stdin);
            nome[strcspn(nome, "\n")] = 0;
            printf("telefone: ");
            fgets(telefone, 20, stdin);
            telefone[strcspn(telefone, "\n")] = 0;
            adicionar_contato(&a, nome, telefone);
        } else if (op == 2) {
            printf("nome a remover: ");
            fgets(nome, tam_nome, stdin);
            nome[strcspn(nome, "\n")] = 0;
            remover_contato(&a, nome);
        } else if (op == 3) {
            printf("nome a buscar: ");
            fgets(nome, tam_nome, stdin);
            nome[strcspn(nome, "\n")] = 0;
            buscar_contato(&a, nome);
        } else if (op == 4) {
            break;
        }
    }

    return 0;
}