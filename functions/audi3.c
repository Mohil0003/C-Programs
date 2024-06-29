#include<stdio.h>
int swap(int *,int *);

void main(){
    int a=90,b=100;
    printf("Before : %d %d",a,b);
    swap(&a,&b);
    printf("\nAfter : %d %d",a,b);
}
int swap(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
