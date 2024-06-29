#include<stdio.h>

void main(){
    int n,i;
    printf("Enter Size Of Num:");
    scanf("%d",&n);
    int arr[n],sum=0,max,min;
    float avg;
    for(i=0;i<n;i++){
        printf("Enter Next Number: ");
        scanf("%d", &arr[i]);
        sum=sum+arr[i];
    }
    avg=sum/n;
    max=arr[0],min=arr[0];
    for(i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
        if(min>arr[i]){
            min=arr[i];
        }
    }
    printf("Maximum value is %d\n",max);
    printf("Sum is %d\n",sum);
    printf("Avg is %0.2f\n",avg);
    printf("Min value is %d\n",min);
}