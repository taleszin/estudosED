#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura do nó
struct node {
    int data;
    struct node* next;
};

// Função para inserir um nó no início da lista
void insert(struct node** head_ref, int new_data) {
    // Aloca o novo nó
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    // Define o valor do novo nó
    new_node->data = new_data;
    // Define o próximo nó como o antigo primeiro nó da lista
    new_node->next = *head_ref;
    // Define o novo nó como o primeiro nó da lista
    *head_ref = new_node;
}

// Função para imprimir a lista
void print_list(struct node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
}

// Programa principal
int main() {
    // Cria um ponteiro para o primeiro nó da lista
    struct node* head = NULL;
    // Insere alguns nós na lista
    insert(&head, 1);
    insert(&head, 2);
    insert(&head, 3);
    // Imprime a lista
    printf("Linked List: ");
    print_list(head);
    return 0;
}
