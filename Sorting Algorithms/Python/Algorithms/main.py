
from bubbleSort import bubbleSort
from usefulFncs import get_int_from_file
from insertionSort import insertionSort
from mergeSort import mergeSort


#Main
arr = get_int_from_file()

# arr = bubbleSort(arr)
# arr = insertionSort(arr)
mergeSort(arr)

print(arr)
