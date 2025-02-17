#include<stdio.h>
int main(){
    int a,b; 
    char c;
    scanf("%d %d %*c%c", &a,&b,&c);
    if(c=='+'){
        printf("%d", a+b);
    }
    else if(c=='-'){
        
        printf("%d", a-b);
    }
    else if(c=='*'){
       
        printf("%d", a*b);
    }
    else if(c=='/'){

        printf("%d", a/b);
    }

}