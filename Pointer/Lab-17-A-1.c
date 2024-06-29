#include<stdio.h>

void main(){
    int a=10;
    int *ptr=&a;


    printf("Address is : %d\n",ptr);
    printf("---------------------\n");
    printf("value is : %d",*ptr);
}