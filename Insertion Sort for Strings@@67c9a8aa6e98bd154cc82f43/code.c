#include<stdlib.h>
#include<string.h>
int compare(const void *a, const void *b){
    return strcmp(*(const char *)a,*(const char *)b);
}
void insertionSort(char arr[][100],int n){
    qsort(arr,n,sizeof(char[100]),compare);
}
void printArray(char arr[][100],int n){
    printf("%s /n",arr[i]);
}