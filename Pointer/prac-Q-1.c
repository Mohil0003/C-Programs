

#include<stdio.h>

void main(){
    int x;
    int *ptr;

    ptr=&x;
    *ptr=0; //asignment value to variable by using pointer

    printf(" X = %d\n",x);//0
    printf(" *ptr = %d\n",*ptr);//0

    *ptr+=5;//change value of variable by pointer

    printf(" X = %d\n",x); //5
    printf(" *ptr = %d\n",*ptr); //5

    (*ptr)++;

    printf(" X = %d\n",x); //6
    printf(" *ptr = %d\n",*ptr); //6
 

}