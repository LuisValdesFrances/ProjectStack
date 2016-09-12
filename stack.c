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
    node *first;
};

static void addNode(node *currentNode, node *finalNode){

    if(currentNode->next == NULL){
        printf("\npush\n");
        //currentNode->next = finalNode;
    }else{
        //addNode(currentNode->next, finalNode);
    }

}

Stack createStack(){
    Stack stack = malloc(sizeof(struct _stack));
    stack->size = 0;
    stack->first = NULL;
    return stack;
}

void destroyStack(Stack *pStack){
    free(*pStack);
    *pStack = NULL;
}

void push(Stack stack, char value){
    node finalNode = {value, NULL};
    addNode(stack->first, &finalNode);
    stack->size++;
}

