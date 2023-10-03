#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter a Integer value of A : ");
    scanf("%d", &a);
    printf("Enter a Integer value of B : ");
    scanf("%d", &b);
    c=a;
    a=b;
    b=c;
    printf("A = %d \nB = %d", a,b);
}