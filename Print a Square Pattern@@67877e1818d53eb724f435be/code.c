#include<stdio.h>
int main(){
    int n;
    int m;
    scanf("%d",&n);
    scanf("%d",&m);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            printf("* ");
        }
        printf("\n");
    }
}