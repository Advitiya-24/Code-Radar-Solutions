#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d", &a,&b);
    int b= b*b;
    if(a==b){
        printf("Yes");
    }
    else{
        printf("No");
    }
}