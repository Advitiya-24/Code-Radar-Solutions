#include<stdio.h>
int main(){
    int m;
    scanf("%d", &m);
    if(m>0){
        printf("Positive");
    }
    else if(m<0){
        printf("Negative");
    }
    else(m==0){
        printf("Zero");
    }
}