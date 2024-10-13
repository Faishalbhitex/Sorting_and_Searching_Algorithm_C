// Insertion in C

#include <stdio.h>

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insertionSort(int arr[], size) {
    for (int step = 1; step < size; step++) {
        int key = arr[step];
        int j = step - 1;
        
        // Compare key with each element on thr left of it until an element smaller than
        // it is found.
        // For descending order, change key < arr[j] to key > arr[j]
        while (j >= 0 && key < arr[j]) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// Driver code
int main() {
    int data[] = {9, 5, 1, 4, 3};
    int size = sizeof(data) / sizeof(data[0]);
    printf("Array before sorted:\n");
    printArray(data, size);
    printf("Array after sorted use Insertion sort:\n");
    insertionSort(data, size);
    printArray(data, size);
    
    return 0;
}