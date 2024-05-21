/* Carrie Bailey
 * CS 221 Spring 2024
 Command Line Arguments
 * Description: Takes user choice of A for ascending or D for descending and up to 32 integers from the command line and sort accordingly*/

#include <stdio.h>
#include <stdlib.h>
#include "declarations.h"
#include "functions.c"


int main(int argc, char *argv[]) {
    //take input on command line
    //loop through argv - values
    if (argc < 3 || argc > 34) {
        printf("invalid entry"); //see class usage recommendation
        return -1;
    }
    // size is 1 fewer than any entry on command line T
    int size = argc - 2;
    int integer_array[size];

    // loop through each value in argv begins at index 2
    // offsets for ./main and A or D for the sort), atoi converts it to an integer
    // and assign it to the correct index in the integer array (argv index minus 1 offset due to excluding the A & D & main):
    for (int x = 2; x < argc; x++) //index into argv
        integer_array[x - 2] = atoi(argv[x]);
    //if statement argv[1] = A sort ascending, D - descending, neither - invalid message *** OR within the less than 3, greater than 34 if statement
    if (argv[1][0] == 'A')
    {    printf("ascending\n");
    BubbleSortAscending(integer_array, size);
    printArray(integer_array, size); // Print the elements in the array
    }
    else if  (argv[1][0] == 'D'){
            printf("descending\n");
            BubbleSortDescending(integer_array, size);
            printArray(integer_array, size);

    }

}






