#include<stdio.h>
void main(){
    int i=1,n,sum=0;
    printf("Enter the Number of Term:");
    scanf("%d",&n);
        while (i<=n)
        {
            if (i%2!=0)
            {
                printf("\n+%d",i);
                sum=sum+i;
                i++;
            }
            else
            {
                printf("\n-%d",i);
                sum=sum-i;
                i++;
            }
        }
    printf("\nSum of Fibonacci Series is:%d",sum);
}