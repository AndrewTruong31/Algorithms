#include "bubbleSort.h"

int *bubbleSort(int* arr, int num){
    printf("BUBBLESORT\n");
    for(int i = 0; i < num-1; i ++){ //will run once for every element in the array
        for(int j = 0; j < num-1; j ++){ //iterates through every element in the array
            if(arr[j] > arr[j+1]){ //compares adjacent values and swap them if they are out of order
                swap(&arr[j], &arr[j+1]);
            }
        }
    }

    return arr;
}

void swap(int *a, int *b){ //swaps 2 given pointers
    int temp = *a;
    *a = *b;
    *b = temp;
}

