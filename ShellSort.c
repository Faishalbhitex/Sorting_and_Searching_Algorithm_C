// Shell Sort in C

#include <stdio.h>

// Shell sort
void shellSort(int arr[], int n) {
    // Rearrange elements at each n/2, n/4, n/8 ... intervals
    for (int interval = n / 2; interval > 0; interval /= 2) {
        for (int i = interval; i < n; i += 1) {
            int temp = arr[i];
            int j;
            for (j = i; j >= interval && arr[j - interval] > temp; j -= interval) {
                arr[j] = arr[j - interval];
            }
            arr[j] = temp;
        }
    }
}

// Print an Array
void printArray(int arr[], n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Driver code
int main() {
    int arr[] = {9, 8, 3, 7, 5, 6, 4, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Array before sorted:\n");
    printArray(arr, n);
    printf("Array after sorted use Shell Sort:\n");
    shellSort(arr, n);
    printArray(arr, n);
    
    return 0;
}

