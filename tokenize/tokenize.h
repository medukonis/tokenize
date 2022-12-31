/*
 Function: tokenize
 Inputs: char array, integer, integer pointer
 Output: char array
 Summary: Performs word tokenization.  Takes a variable size char array as input, cleans it, separates words by single space, while discarding everything else.  3rd input is integer pointer to guide the driver program of how large the returned array is.
 Created by Mike Edukonis on 11/25/22.
 */


#ifndef tokenize_h
#define tokenize_h

char *tokenize (char[], int, int*);
#endif /* tokenize_h */
