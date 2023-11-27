#include <stdio.h>
#include <stdlib.h>

struct Node {
    int key;
    struct Node* next;
};

typedef struct Node Node;

void insert(Node** head, int key) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->key = key;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
    } else {
        Node* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
}

void printList(Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->key);
        head = head->next;
    }
    printf("\\\n");
}

int main() {
    int cases;
    scanf("%d", &cases);

    // Loop para cada caso de teste
    for (int i = 0; i < cases; i++) {
        int m, c;
        scanf("%d %d", &m, &c);

        // Array de listas encadeadas (inicializando)
        Node* hashTable[m];
        for (int j = 0; j < m; j++) {
            hashTable[j] = NULL;
        }

        // Loop para cada chave
        for (int j = 0; j < c; j++) {
            int key;
            scanf("%d", &key);

            // Calcula o índice usando a função de dispersão
            int index = key % m;

            // Insere a chave na lista encadeada correspondente
            insert(&hashTable[index], key);
        }

        // Imprime o resultado para este caso de teste
        for (int j = 0; j < m; j++) {
            printf("%d -> ", j);
            printList(hashTable[j]);
        }

        // Adiciona uma linha em branco entre os casos de teste
        if (i < cases - 1) {
            printf("\n");
        }
    }

    return 0;
}
