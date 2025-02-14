#include<stdio.h>
int main(){
    char a;
    scanf("%c", &a);
    if((a>='a' && a<='z' && (a=='a' || a=='e' || a=='i' || a=='o' || a=='u')) || (a>='A' && a<='Z' && (a=='A' || a=='E' || a=='I' || a=='O' || a=='U'))){
        printf("Vowel");
    }
    else if((a>='a' && a<='z') || (a>='A' && a<='Z') ){
        printf("Consonant");
    }
    else if(isdigit(a)){
        printf("Digit");
    }
    else{
        printf("Special character");
    }
}