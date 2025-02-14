#include<stdio.h>
int main(){
    char m;
    scanf("%c", &m);
    if(m>='A' && m<='Z'){
        printf("Uppercase");
    }
    else if(m>='a' && m<='z'){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
}