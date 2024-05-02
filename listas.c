#include <stdio.h> 
#include <stdlib.h> 
#include "listas.h"

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