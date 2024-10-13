// Selection sort in C

#include <stdio.h>

// function to swap the postion of two elements
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int size) {
    for (int step = 0; step < size - 1; step++) {
        int min_idx = step;
        for (int i = step + 1; i < size ; i++) {
            
            // To sort in decending order, change > to < in this line.
            // Select the minimun element in each loop
            if (arr[i] < arr[min_idx])
              min_idx = i;
        }        
        
        // put min at the correct postion
        swap(&arr[min_idx], &arr[step]);
    }
}

// function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// driver code
int main() {
    int data[] = {20, 12, 10, 15, 2};
    int size = sizeof(data) / sizeof(data[0]);
    printf("Array before sorted:\n");
    printArray(data, size);
    printf("Array after sorted use Selection Sort:\n");
    selectionSort(data, size);
    printArray(data, size);
    
    return 0;
}