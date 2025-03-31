#include <stdlib.h>

// Comparison function for qsort
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b); // Ascending order
}

// Function to sort the array using qsort
void selectionSort(int arr[], int n) {
    qsort(arr, n, sizeof(int), compare);
}

// Function to print the sorted array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}