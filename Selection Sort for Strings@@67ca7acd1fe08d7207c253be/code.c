#include <stdlib.h>
int compare(const void *a, const void *b) {
    return (*(char **)a - *(char **)b);
}
void selectionSort(char arr[], int n) {
    qsort(arr, n, sizeof(char *), compare);
}

void printArray(char *arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s ", arr[i]);
    }
    printf("\n");
}