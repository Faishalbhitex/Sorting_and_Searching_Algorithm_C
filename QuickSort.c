// Quick sort in C

#include <stdio.h>

// function to swap elements
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// function to find the partition postion
int partition(int arr[], int low, int high) {
    
    // select the rightmost element as pivot
    int pivot = arr[high];
    
    // pointers for greater element
    int i = (low - 1);
    
    // traverse each element of the array
    // compare them with the pivot
    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
        
          //if element smaller than pivot is found
          // swal it with the greater element pointed by i
          i++;
          
          // swap element at i with element at j
          swap(&arr[i], &arr[j]);
        }
    }
    // swap the pivot element with the greater element at i
    swap(&arr[i + 1], &arr[high]);
    
    // return the partition point
    return (i + 1);
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
      
      //find the pivot element such that
      // elements smaller than pivot are on the left of pivot
      // elements greater than pivot are on right of pivot
      int pi = partition(arr, low, high);
      
      // recursive call on thr left of pivot
      quickSort(arr, low, pi - 1);
      
      // recursive call on the right of pivot
      quickSort(arr, pi + 1, high);
    }
}

// function to print array elements
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// main function
int main() {
    int data[] = {8, 7, 2, 1, 0, 9, 6};
    
    int n = sizeof(data) / sizeof(data[0]);
    
    printf("Array before sorted:\n");
    printArray(data, n);
    printf("Array after sorted use Quick Sort:\n");
    quickSort(data, 0, n - 1);
    printArray(data, n);
    
    return 0;
}