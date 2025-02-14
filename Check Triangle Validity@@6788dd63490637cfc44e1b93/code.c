#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    int x= pow(a,2);
    int y=pow(b,2);
    int z=pow(c,2);
    if(x+y==z){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
}