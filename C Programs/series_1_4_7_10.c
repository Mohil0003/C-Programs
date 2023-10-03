#include<stdio.h>
 void main(){
    int i=1,n,sum=-2,a=0;
    printf("Enter number of term:");
    scanf("%d",&n);
    while(i<=n){
        sum=sum+3;
        printf("%d ", sum);
        a=a+sum;
        i++;

    }
    printf("\nThe Sum of Series is:%d",a);
 }