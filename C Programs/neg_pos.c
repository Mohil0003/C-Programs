#include<stdio.h>
void main(){
    int a;
    printf("Enter a Number : ");
    scanf("%d", &a);
     if(a>0){
        printf("Number is Positive.");
    }
    else if(a<0){
        printf("Number is Negative");
    }
    else
        printf("Number is 0");
}