// print value by using pointer to pointer

#include<stdio.h>

void main(){
    int i=3;
    int *ptr = &i;
    int **pptr = &ptr;

    printf("%d",**pptr);
}