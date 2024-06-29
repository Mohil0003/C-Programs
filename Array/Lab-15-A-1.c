#include<stdio.h>

void main(){
    int n;
    printf("Enter Length of Array:");
    scanf("%d",&n);

    int i,a[n],b[n];
    for(i=0;i<n;i++){
        printf("\nEnter Number in a[%d] :",i);
        scanf("%d",&a[i]);
    }
    printf("\n");
    for(i=0;i<n;i++){
        b[i]=a[i];
        printf("\n New Array b[%d] is = %d",i,b[i]);
    }
}