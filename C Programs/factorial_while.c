#include<stdio.h>

void main(){
    int n,i=1,a=1;
    printf("Enter a Number :");
    scanf("%d",&n);
    while(i<=n){
        a=a*i;
        i++;
    }printf("%d", a);
}