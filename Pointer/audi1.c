#include<stdio.h>

void main(){
    int a[5]={1000,2,3,4,5};
    char str[10]="Hello";
    int *ptr;
    char *ptr1=str;
    ptr=a;
    printf("%d",*(ptr+1)+20);
    printf("\n%c",*(ptr1+1));
}