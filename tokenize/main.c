/*
  main.c
  tokenize driver program

  Created by Mike Edukonis on 11/25/22.
*/

#include <stdio.h>
#include <stdlib.h>
#include "tokenize.h"

int main(int argc, const char * argv[])
{
    int length = 0;
    int returnedLength = 0;
    int position = 0;
    int testing = 0;
    char *userInput = "Hello! We () are {} ~ tokenizing *& over $# 43% here.";
    while(userInput[position] != '\0')
    {
        length++;
        position++;
    }
    length = length + 1;
    
    char *newArray = tokenize(userInput, length, &returnedLength);
    
    for(int x=0; x < returnedLength; x++)
    {
        printf("%c", newArray[x]);
        if(newArray[x] =='\0')
            printf("-");
    }
    printf("\n");
   /* printf("returnedLength: %d\n", returnedLength);
    printf("testing: %d\n", testing); */
    free(newArray);
    return 0;
}
