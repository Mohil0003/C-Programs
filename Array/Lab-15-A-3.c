#include<stdio.h>

void main(){
    int n;
    printf("Enter Length of Array:");
    scanf("%d",&n);

    int i,a[n],count=0;
    for(i=0;i<n;i++){
        printf("\nEnter Number in a[%d] :",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]%3==0){
            count++;
        }
    }
    printf("\n Total Number which is Divisible by 3 is: %d",count);

}