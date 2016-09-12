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
    //push(stack, 'b');
    //push(stack, 'c');
}

static void testPeek(){
    printf("Start testPeek\n");
}

static void testPop(){
    printf("Start testPop\n");
}

static void testGetSize(){
    printf("Start testGetSize\n");
}

