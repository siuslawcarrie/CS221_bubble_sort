//
// Created by siusl on 5/16/2024.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "declarations.h"

//FUNCTIONS


// perform the bubble sort ascending
void BubbleSortAscending(int array[], int size) {

    // loop to access each array element
    for (int step = 0; step < size - 2; ++step) {

        // loop to compare array elements
        for (int x = 0; x < size - step - 1; ++x) {//go up to the end which is actually - 2 ie < compare 2nd to last to last

            // compare two adjacent elements
            // change > to < to sort in descending order
            if (array[x] > array[x + 1]) { //this is where it compares to sort ascending

                // swapping occurs if elements
                // are not in the intended order
                int hold_integer = array[x];
                array[x] = array[x + 1];
                array[x + 1] = hold_integer;
            }
        }
    }
}

// perform the bubble sort descending
void BubbleSortDescending(int array[], int size) {
// loop to access each array element
    for (int step = 0; step < size - 2; ++step) {

        // loop to compare array elements
        for (int x = 0; x < size - step - 1; ++x) {//go up to the end which is actually - 2 ie < compare 2nd to last to last

            // compare two adjacent elements
            // change > to < to sort in descending order
            if (array[x] < array[x + 1]) { //this is where it compares to sort ascending

                // swapping occurs if elements
                // are not in the intended order
                int hold_integer = array[x];
                array[x] = array[x + 1];
                array[x + 1] = hold_integer;
            }
        }
    }
}


// print array
void printArray(int array[], int size) {
    for (int x = 0; x < size; ++x) {
        printf("%d  ", array[x]);
    }
    printf("\n");
}




