#include<stdio.h>
void main(){
    int a,b,c,x;
    printf("Enter a First Integer Number :");
    scanf("%d", &a);
    printf("Enter a Second Integer Number :");
    scanf("%d", &b);
    printf("Enter a Third Integer Number :");
    scanf("%d", &c);
    x=(a+b+c)/3;
    printf("Average value is : %d", x);
}