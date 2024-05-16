
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//FUNCTION PROTOTYPES
void bubbleSort(int array[], int size); //perform bubble sort
//function to count argc !<3 !>34
//function to sort - begin end like C++?

int main(int argc, char *argv[]) {

    //take input on command line
    //loop through argv - values
    if (argc <3 || argc >34){
        printf("invalid entry"); //see class usage recommendation
        return -1;
    }
    // size is 1 fewer than any entry on command line T
    int size = argc - 2;
    int data[size];

    // loop through each value in argv begins at index 2
    // offsets for ./main and A or D for the sort), atoi converts it to an integer
    // and assign it to the correct index in the integer array (argv index minus 1 offset due to excluding the A & D & main):
    for (int x = 2; x < argc; x++) //index into argv
        data[x-2] = atoi(argv[x]);

    // Print the elements in the array
    for (int x = 0; x < size; x++)//index into the data array
        printf("%d: %d\n", x, data[x]);

    //call for bubble sort
    //if statement argv[1] = A sort ascedning, D - descending, neither - invalid message *** OR within the less than 3, greater than 34 if statement
    bubbleSort(data, size);
    // Print the elements in the array
    for (int x = 0; x < size; x++)//index into the data array **move to function as this is after the sort
        printf("%d: %d\n", x, data[x]);
}

// perform the bubble sort
void bubbleSort(int array[], int size) { //2 bubble sort methods - this one ascending have another one for descending

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

// print array
void printArray(int array[], int size) {
    for (int x = 0; x < size; ++x) {
        printf("%d  ", array[x]);
    }
    printf("\n");
}

//char validation_char() {
//    char entered_char;
//    bool valid = false;//valid labeling this as not correct
//    while (!valid){//valid now true
//        bool is_alpha = true;
//        getline(cin,entered_string);
//        int i=0;
//        while (is_alpha and i<entered_string.length()){
//
//            is_alpha = isalpha(entered_string [i]);
//            i++;
//        }
//        if (!cin or !is_alpha){
//            cout<<"Sorry, that is not a valid entry. Please try again: "<<endl;
//            cin.clear();
//// Discard previous input
//            cin.ignore(123, '\n');
//            cout << endl;
//        }
//        else{
//            valid = true;
//        }
//    }
//    return entered_string;
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