// Optimized Bubble sort in C

#include <stdio.h>

// perform the bubble sort
void bubbleSort(int array[], int size) {

    // loop to acces each array elements
    for (int step = 0; step < size - 1; step++) {
        
        // check if swapping occurs
        int swapped = 0;
        
        // loop to compare array elements
        for (int i = 0; i < size - step - 1; i++) {
            
            // compare two array elements
            // are not in the intended order
            if (array[i] > array[i + 1]){
              
              // swapping occurs if elements
              // are not in the intended order
              int temp = array[i];
              array[i] = array[i + 1];
              array[i + 1] = temp;
            
              swapped = 1;
            }
        }
    
    // no swapping means the array is already sorted
    // so no need for further comparison
    if (swapped == 0) {
      break;
    }
    
  }
}

// print array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

// main method
int main () {
    int data[] = {-2, 45, 0, 11, -9};
    
    // find the array'd length
    int size = sizeof(data)/ sizeof(data[0]);
    
    printf("Array before sorted:\n");
    printArray(data, size);
    
    bubbleSort(data, size);
    
    printf("Array after sorted use bubble sort:\n");
    printArray(data, size);
    
    return 0;
}