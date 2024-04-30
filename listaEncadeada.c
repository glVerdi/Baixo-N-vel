#include <stdio.h> 
#include <stdlib.h> 
 
typedef struct TNode { 
    int data; 
    struct TNode* next; 
} Node; 
 
typedef struct { 
    Node* head; 
    //Node* tail; 
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
        //return (*lst).size;    
        return lst->size;        
} 

void add(List* lst, int value) {
        Node *p = malloc(sizeof(Node));
        p->data = value;
        p->next = lst->head;

        lst->head = p;
        lst->size++;
}


List* create() {
        List *p = malloc(sizeof(List));
        p->head = NULL;
        p->size = 0;


void dump(List* lst) {
        printf("size= %d, data = [", lst->size);
        Node *p = lst->head;
        if (p) {
                printf("%d", p->data);
                p = p->next;
        }
        while (p) {
                printf(",%d", p->data);
                p = p->next;
        }
        printf("]\n");
}

// TODO: append, usando tail
// TODO: find, procurando o valor
// TODO: get, na posição i
// TODO: remove, na posição i

int main(void) {
        printf("LISTAS!\n");

        // Testing
        List lst1;
        lst1.size = 42;
        printf("%d\n", lst1.size);

        int s = len(&lst1);

        printf("%d\n", s);
        printf("%d\n", lst1.head->data);
        dump(&lst1);

        add(&lst1, 51);
        add(&lst1, 14);
        dump(&lst1);

        List *lst2;
        lst2 = create();
        add(lst2, 3);
        add(lst2, 2);
        add(lst2, 1);
        dump(lst2);
        return EXIT_SUCCESS;
}
