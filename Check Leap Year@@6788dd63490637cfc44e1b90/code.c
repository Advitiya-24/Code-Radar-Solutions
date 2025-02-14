#include<stdio.h>
int main(){
    int m;
    scanf("%d", &m);
    if((m%4==0 && m%100!=0)||(m%400==0)){
        printf("Leap Year");
    }
    else{
        printf("Not a Leap Year");
    }
}