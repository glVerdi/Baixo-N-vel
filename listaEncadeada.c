#include <stdio.h>
#include <stdlib.h>

// Estrutura de um nó
typedef struct Node {
    int data;
    struct TNode* next;   // conveniente sempre saber o tamanho
} Node;

typedef struct {
    Node* head;
    Node* tail;
    int size;   // conveniente sempre saber o tamanho
} List;

//len(List* lst): retorna o comprimento da lista
int len(List* lst);
//add(List* lst, int value): adiciona um elemento ao início da lista
void add(List* lst, int value);
//dump(List* lst): mostra o conteúdo da lista
void dump(List* lst);
//Lst* create(): cria um descritor para lista
List* create();

int len(List* lst) {
    return (*lst).size;
}

int main(void){
    printf("Listas!\n");
    List lst1;
    lst1.size = 42;
    printf("%d\n", lst1.size);
    int s = len(&lst1);
    printf("%d\n", s);
    return EXIT_SUCCESS;
}
                                                                                                                                    26,10         Top
