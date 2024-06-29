#include<stdio.h>

void main(){
    int a,b;
    int *ptr1,*ptr2;

    printf("Enter Two Integer Numbers :");
    scanf("%d %d",&a,&b);

    ptr1=&a;
    ptr2=&b;

    printf("Sum is : %d",(*ptr1)+(*ptr2));
}