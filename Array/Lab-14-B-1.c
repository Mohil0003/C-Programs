#include<stdio.h>

void main(){   
   int n,i;
    printf("Enter Size Of Num:");
    scanf("%d",&n);
    int arr[n],count=0,avg,sum=0;
    for(i=0;i<n;i++){
        printf("Enter Next Number: ");
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    avg=sum/n;
    for(i=0;i<n;i++){
        if(arr[i]>avg)
        count++;
    }
    printf("Number Which Is grater than AVG:%d",count);
}