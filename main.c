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

    char charactersArray[MAX_SIZE];
    init(charactersArray, MAX_SIZE);
    printf("Enter characters\n");
    scanf("%s", charactersArray);
    printf("Entered characters: %s\n", charactersArray);



    return 0;
}
