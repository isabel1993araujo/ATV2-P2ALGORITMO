#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TAM 100

// Definição da estrutura de pilha
typedef struct {
    int dados[TAM];
    int topo;
} Pilha;

// Inicializa a pilha
void inicializar(Pilha *p) {
    p->topo = -1;
}

// Insere um valor na pilha
void push(Pilha *p, int valor) {
    if (p->topo < TAM - 1) {
        p->topo++;
        p->dados[p->topo] = valor;
    } else {
        printf("Erro: pilha cheia!\n");
    }
}

// Remove o valor do topo da pilha
int pop(Pilha *p) {
    if (p->topo >= 0) {
        int valor = p->dados[p->topo];
        p->topo--;
        return valor;
    } else {
        printf("Erro: pilha vazia!\n");
        return 0;
    }
}

// Mostra o topo da pilha
void topo(Pilha *p) {
    if (p->topo >= 0) {
        printf("Topo: %d\n", p->dados[p->topo]);
    } else {
        printf("Pilha vazia\n");
    }
}

// Lê comandos e executa ações
void interpretar(char comando[], Pilha *p) {
    if (strncmp(comando, "push ", 5) == 0) {
        int valor = atoi(comando + 5);
        push(p, valor);
    } else if (strcmp(comando, "pop") == 0) {
        printf("Removido: %d\n", pop(p));
    } else if (strcmp(comando, "print") == 0) {
        topo(p);
    } else if (strcmp(comando, "exit") == 0) {
        exit(0);
    } else {
        printf("Comando inválido!\n");
    }
}

int main() {
    Pilha pilha;
    inicializar(&pilha);

    char entrada[100];

    printf("Máquina de Pilha (use: push N, pop, print, exit)\n");
    while (1) {
        printf(">>> ");
        fgets(entrada, sizeof(entrada), stdin);
        entrada[strcspn(entrada, "\n")] = 0; // remove \n do final
        interpretar(entrada, &pilha);
    }

    return 0;
}
