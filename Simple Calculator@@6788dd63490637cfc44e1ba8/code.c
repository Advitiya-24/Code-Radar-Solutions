#include<stdio.h>
int main(){
    int a,b; char c;
    scanf("%d %d %c", &a,&b,&c);
    if(c=='+'){
        int r=a+b;
        printf("%d", r);
    }
    else if(c=='-'){
        int r=a-b;
        printf("%d", r);
    }
    else if(c=='*'){
        int r=a*b;
        printf("%d", r);
    }
    else if(c=='/'){
        int r=a/b;
        printf("%d", r);
    }

}