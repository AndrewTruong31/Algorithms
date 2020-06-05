
def insertionSort(arr):
    print("INSERTIONSORT")

    for i in range(1, len(arr)):
        cur = arr[i]

        j = i - 1
        while(j >= 0 and arr[j] > cur):
            arr[j+1] = arr[j]
            j -= 1

        arr[j+1] = cur

    return arr