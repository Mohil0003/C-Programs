#include<stdio.h>
void main(){
    int a;
    printf("Enter a Number : ");
    scanf("%d", &a);
    if(a%2==1){
        printf("Number is ODD");
    }else
    printf("Number is EVEN");
}