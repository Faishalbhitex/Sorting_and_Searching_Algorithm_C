// Radix Sort in C programming
#include <stdio.h>
// Function to get the maximum value in the array
int getMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
          max = arr[i];
        }
    }
    return max;
}

// Using counting sort to sort the elements based on significant places
void countingSort(int arr[], int n, int place) {
    int output[n];
    int count[10] = {0};
    // Calculate count of elements
    for (int i = 0; i < n; i++) {
        int index = (arr[i] / place) % 10;
        count[index]++;
    }
    // Calculate cumulative count
    for (int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }
    // Place the elements in sorted order
    for (int i = n - 1; i >= 0; i--) {
        int index = (arr[i] / place) % 10;
        output[count[index] - 1] = arr[i];
        count[index]--;
    }
    // Copy the sorted elements into original array
    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}

// Main function to implement radix sort
void radixSort(int arr[], int n) {
    // Get maximum element
    int maxElement = getMax(arr, n);
    // Apply counting sort to sort elements based on place value
    for (int place = 1; maxElement / place > 0; place *= 10) {
        countingSort(arr, n, place);
    }
}

// Print Array
void printArray(int arr[], size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int data [] = {121, 432, 564, 23, 1, 45, 788};
    int n = sizeof(data) / sizeof(data[0]);
    radixSort(data, n);
    printArray(data, n);
    
    return 0;
}