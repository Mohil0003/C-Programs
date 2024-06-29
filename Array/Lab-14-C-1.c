#include<stdio.h>

void main(){
    int n;
    printf("Enter The Numbers of Elements:");
    scanf("%d",&n);

    int i,a[n],count=0,j;
    for(i=0;i<n;i++){
        printf("Enter Number:");
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
        if(a[i]==a[j]){
            count++;
         }
    }
    }
        printf("\n Duplicate Number is :%d",count);
         
}