#include <stdio.h>
#include <stdlib.h>
#include "tokenize.h"

/*
 Function: tokenize
 Inputs: char array, integer, integer pointer
 Output: char array
 Summary: Performs word tokenization.  Takes a variable size char array as input, cleans it, separates words by single space, while discarding everything else.  3rd input is integer pointer to guide the driver program of how large the returned array is.
 */

char *tokenize(const char input[], int inputLength, int *returnedArraySize)
{
    char *arrayOfinputs = malloc((inputLength) * sizeof(char));
    int  position       = 0;              /* Keeping track of the cursor position only increment on valid entries */
    
    for (int a = 0; a < inputLength; ++a)
    {
        if ((input[a] >= 'A' && input[a] <= 'Z') || (input[a] >= 'a' && input[a] <= 'z') || input[a] == (int)32) //if alphabet or space only
        {
            
            if((input[a] == (int)32) && (a == 0))                                   /* if the first char is a space, discard*/
                continue;
            
            if((input[a] == (int)32) && (arrayOfinputs[position-1] == (int)32))     /* if space and the last char added to array was a space, discard*/
                continue;
            
            else                                                                    /* else, add it to the array and keep count*/
            {
                arrayOfinputs[position] = input[a];
                position++;
            }
        }
    }
    
    /* Close out the char array properly */
    arrayOfinputs[position] = '\0';
    position++;
    
    /* return  */
    *returnedArraySize = position;
    return arrayOfinputs;
        
}

