#include<stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    if(a%1==0 && a%a!=0){
        printf("Not Prime");
    }
    else{
        printf("Prime");
    }
}