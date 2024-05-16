
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//FUNCTION PROTOTYPES
void bubbleSort(int array[], int size); //perform bubble sort

int main(int argc, char *argv[]) {

    // size is 1 fewer than any entry on command line T
    int size = argc - 2;
    int data[size];

    // loop through each value in argv begins at index 1
    // skips the executable name), convert it to an integer
    // and assign it to the correct index in the integer array (argv index minus 1 offset due to excluding the A & D & main):
    for (int x = 1; x < argc; x++)
        data[x-2] = atoi(argv[x]);

    // Print the elements in the array
    for (int x = 0; x < size; x++)
        printf("%d: %d\n", x, data[x]);

    //call for bubble sort
    bubbleSort(int array[], int size);
}

// perform the bubble sort
void bubbleSort(int array[], int size) {

    // loop to access each array element
    for (int step = 0; step < size - 2; ++step) {

        // loop to compare array elements
        for (int x = 0; x < size - step - 2; ++x) {

            // compare two adjacent elements
            // change > to < to sort in descending order
            if (array[x] > array[x + 1]) {

                // swapping occurs if elements
                // are not in the intended order
                int temp = array[x];
                array[x] = array[x + 1];
                array[x + 1] = temp;
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

//int main() {
//    int data[] = {-2, 45, 0, 11, -9};
//
//    // find the array's length
//    int size = sizeof(data) / sizeof(data[0]);
//
//    bubbleSort(data, size);
//
//    printf("Sorted Array in Ascending Order:\n");
//    printArray(data, size);
//}

/*canvas bubble sort
#include <iostream>
#define SIZE 10

using namespace std;

void bubbleSort(int a[], int size){

    for (int i = 0 ; i < size-1; i++) {
        for (int j = 0; j < size-1-i; j++){
            if (a[j] > a[j+1]) {
                int swap = a[j];
                a[j] = a[j+1];
                a[j+1] = swap;
            }
        }
    }

}

int main() {
    int arr[SIZE] = {1,4,8,9,3,2,7,6,3,5};

    cout << "before sort" << endl;
    for(int i = 0; i < SIZE; i++){
        cout << arr[i] << endl;
    }

    bubbleSort(arr, SIZE);

    cout << "after sort" << endl;
    for(int i = 0; i < SIZE; i++){
        cout << arr[i] << endl;
    }

}*/