#include<stdio.h>
void main(){
    int a;
    printf("Enter an Integer:");
    scanf("%d", &a);
    if(a & 1 == 1){
        printf("Number is an Odd Number");
    }else{
        printf("Number is an Even Number");
    }
}