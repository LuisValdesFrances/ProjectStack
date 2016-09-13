#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "stack.h"
#include "stack_test.h"

static void testCreateStack();
static void testDestroyStack();
static void testPush();
static void testPeek();
static void testPop();
static void testGetSize();

void test(){
    testCreateStack();
    testDestroyStack();
    testPush();
    testPeek();
    testPop();
    testGetSize();
}

static void testCreateStack(){
    printf("Start testCreateStack\n");
    Stack stack = createStack();
    assert(stack != NULL);
    destroyStack(&stack);
}

static void testDestroyStack(){
    printf("Start testDestroyStack\n");
    Stack stack = createStack();
    destroyStack(&stack);
    assert(stack == NULL);
}

static void testPush(){
    printf("Start testPush\n");
    Stack stack = createStack();
    push(stack, 'a');
    assert(peek(stack) == 'a');
    destroyStack(&stack);
}

static void testPeek(){
    printf("Start testPeek\n");
    Stack stack = createStack();
    push(stack, 'a');
    push(stack, 'b');
    push(stack, 'c');
    assert(peek(stack) == 'c');
    assert(getSize(stack) == 3);
    destroyStack(&stack);
}

static void testPop(){
    printf("Start testPop\n");
    Stack stack = createStack();
    push(stack, 'a');
    push(stack, 'b');
    push(stack, 'c');
    assert(pop(stack) == 'c');
    assert(pop(stack) == 'b');
    assert(pop(stack) == 'a');
    assert(getSize(stack) == 0);
    destroyStack(&stack);
}

static void testGetSize(){
    printf("Start testGetSize\n");
    Stack stack = createStack();
    assert(getSize(stack) == 0);
    push(stack, 'a');
    assert(getSize(stack) == 1);
    push(stack, 'b');
    assert(getSize(stack) == 2);
    push(stack, 'c');
    assert(getSize(stack) == 3);
    destroyStack(&stack);
}

