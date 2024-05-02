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