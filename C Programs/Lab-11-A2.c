#include<stdio.h>

void main(){
    int i,n,sum=0;
    printf("Enter Num of Terms:");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        sum=sum+i;
        printf("%d ",i);
    }
    printf("\nThe Sum of Series is:%d", sum);
}