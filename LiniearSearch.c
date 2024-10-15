// Liniear Search in C

#include <stdio.h>

int search(int arr[], int n, int x) {
    // Going through array sequencially
    for (int i = 0; i < n; i++)
        if(arr[i] == x)
          return i;
    return -1;
}

int main() {
    int array[] = {2, 4, 0, 1, 9};
    int x = 1;
    int n = sizeof(array) / sizeof(array[0]);
    
    int result = search(array, n, x);
    
    (result == -1) ? printf("Element not found") : printf("Element found ar index: %d", result);
    
	return 0;
}
