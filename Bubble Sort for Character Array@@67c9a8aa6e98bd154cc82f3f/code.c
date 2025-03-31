#include<stdlib.h>
int compare(const void *a,const void *b){
    return(*(int *)a - *(int *)b);
}
void bubbleSort(char arr[],int n){
    qsort(arr,n,sizeof(char),compare);
}
void printArray(char arr[],int n){
    for(int i=0;i<n;i++){
        printf("%c \n",arr[i]);
    }
}