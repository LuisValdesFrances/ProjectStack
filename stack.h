#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

/*Abstract data structure*/
typedef struct _stack *Stack;

Stack createStack();
void destroyStack(Stack *pStack);
void push(Stack stack, char value);
char peek(Stack stack);
char pop(Stack stack);
int getSize(Stack stack);

#endif
