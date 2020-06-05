
def swap(arr, index1, index2):
    get = arr[index1], arr[index2]
    arr[index2], arr[index1] = get
    return get

def bubbleSort(arr):
    print("BUBBLESORT")
    for _ in range(len(arr)-1):
        for j in range(len(arr)-1):
            if(arr[j] > arr[j + 1]):
                swap(arr, j, j + 1)

    return arr
