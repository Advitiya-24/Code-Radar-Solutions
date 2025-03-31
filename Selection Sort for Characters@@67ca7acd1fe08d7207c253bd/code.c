#include <stdlib.h>
char compare(const void *a, const void *b) {
    return (*(char *)a - *(char *)b);
}
void selectionSort(char arr[], int n) {
    qsort(arr, n, sizeof(int), compare);
}

void printArray(char arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%c ", arr[i]);
    }
    printf("\n");
}