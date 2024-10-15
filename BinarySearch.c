// Binary Search in C

#include <stdio.h>

int binarySearch(int arr[], int x, int low, int high) {
    // Repeat until thr pointers low and high meet each other
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if ( x == arr[mid])
          return mid;
        
        if (x > arr[mid])
          low = mid + 1;
        
        else
          high = mid - 1;
    }
    
    return -1;
}

int main() {
    int array[] = {3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(array) / sizeof(array[0]);
    int x = 4;
    int result = binarySearch(array, x, 0, n -1);
    if (result == -1)
      printf("Not found");
    else
      printf("Element is fount at index: %d", result);
    return 0;
}
