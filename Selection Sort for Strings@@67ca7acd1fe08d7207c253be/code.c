#include<stdlib.h>
int compare(const void *a, const void *b) {
    return((const char *)a, (const char *)b);
}
void selectionSort(char arr[][100], int n) {
    qsort(arr, n, sizeof(arr[0]), compare);
}
void printArray(char arr[][100], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s ", arr[i]);
    }
    printf("\n");
}