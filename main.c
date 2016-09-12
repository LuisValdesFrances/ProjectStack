#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#include "stack_test.h"

#define MAX_SIZE 20

static void init(char *charactersArray, int size){
    int i = 0;
    while(i < size){
        charactersArray[i] = 0;
        i++;
    }
}





int main()
{
    test();

    int *p = malloc(sizeof(int));
    *p = 10;

    printf("\nValue: %p", p);
    printf("\nDirection: %p", &p);
    printf("\nRef: %d", *p);
    free(p);

    printf("\n");

    int *p2 = malloc(sizeof(int));
    printf("\nValue: %p", p2);
    printf("\nDirection: %p", &p2);
    printf("\nRef: %d", *p2);


    printf("\n");


    char charactersArray[MAX_SIZE];
    init(charactersArray, MAX_SIZE);
    printf("Enter characters\n");
    scanf("%s", charactersArray);
    printf("Entered characters: %s\n", charactersArray);



    return 0;
}
