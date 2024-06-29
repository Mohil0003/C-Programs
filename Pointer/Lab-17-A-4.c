#include<stdio.h>

void main(){
    int a,b,temp;
    int *ptr1,*ptr2;

    printf("Enter Two Integer Numbers :");
    scanf("%d %d",&a,&b);

    ptr1=&a;
    ptr2=&b;

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("\nswapped Number is : %d %d",*ptr1,*ptr2);


}