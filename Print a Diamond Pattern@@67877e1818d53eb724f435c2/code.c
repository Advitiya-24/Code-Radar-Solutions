#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i+=2){
        for(int j=1;j<=n-i;j+=2){
            printf(" ");
        }
        for(int k=1;k<=(2*i-1);k+=2){
            printf("*");
        }
        printf("\n");
    }
    for (int i = n - 2; i >= 1; i -= 2) {
        // Print spaces
        for (int j = n; j > i; j -= 2) {
            printf(" ");
        }
        // Print stars
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

}