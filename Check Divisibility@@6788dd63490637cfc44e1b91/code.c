#include<stdio.h>
int main(){
    int m;
    scanf("%d", &m);
    if(m%5==0 && m%11==0){
        printf("Divisible");
    }
    else{
        printf("Not Divisible");
    }
}