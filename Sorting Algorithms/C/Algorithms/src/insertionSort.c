#include "insertionSort.h"

int *insertionSort(int *arr, int num){
    printf("INSERTIONSORT\n");
    int cur, i, j;
    for(i = 1; i < num; i ++){ //will run once for every element in the array
        cur = arr[i]; //holds the current value to be comapared

        for(j = i - 1; j >= 0 && arr[j] > cur; j --){
            arr[j+1] = arr[j]; //shifts the elements that are larger to the right
        }

        arr[j+1] = cur; //places the current value back into the array
    }

    return arr;

}