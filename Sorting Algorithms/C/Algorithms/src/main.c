#include "bubbleSort.h"
#include "insertionSort.h"
#include "usefulFncs.h"
#include "mergeSort.h"

int main(){
    FILE *fp = fopen("data.txt", "r");

    int num = countIntsFromFile(fp); //Returns the number of integers in the file
    printf("There are [%d] elements in the array\n", num);
    int *arr = getIntFromFile(fp, num); //Actually grabs the integers from the file

    printf("\nORIGINAL ARRAY\n");
    printArray(arr, num);

    arr = insertionSort(arr, num); //Calls BubbleSort to sort the function
    // mergeSort(arr, 0, num - 1);
    
    printf("\n\nSORTED ARRAY\n");
    printArray(arr, num);
    printf("\n");

    free(arr);
    fclose(fp);
}

