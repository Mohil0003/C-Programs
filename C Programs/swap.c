#include<stdio.h>
void main(){
    int a,b;
    printf("Enter a Integer value of A : ");
    scanf("%d",&a);
    printf("Enter a Integer value of B : ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("A=%d",a);
    printf("\nB=%d",b);


}