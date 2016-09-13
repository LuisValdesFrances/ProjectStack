#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

typedef struct _node node;
struct _node{
    char value;
    node *next;
};

struct _stack{
    int size;
    node *head;
};

Stack createStack(){
    Stack stack = malloc(sizeof(struct _stack));
    stack->size = 0;
    stack->head = NULL;
    return stack;
}

void destroyStack(Stack *pStack){
    free(*pStack);
    *pStack = NULL;
}

void push(Stack stack, char value){
    node *n = malloc(sizeof(node));
    n->value = value;
    n->next = stack->head;
    stack->head = n;
    stack->size++;
}

char peek(Stack stack){
    if(stack->size > 0){
        node n = *stack->head;
        return n.value;
    }else{
        return NULL;
    }
}

char pop(Stack stack){
    if(stack->size > 0){
        node *n = stack->head;
        stack->head = n->next;
        char value = n->value;
        free(n);
        stack->size--;
        return value;
    }else{
        return NULL;
    }
}

int getSize(Stack stack){
    return stack->size;
}

