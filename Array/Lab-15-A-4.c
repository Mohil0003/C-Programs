#include<stdio.h>

void main(){
    int n;
    printf("Enter Length of Array:");
    scanf("%d",&n);

    int i,a[n],temp=1,j,x;
    for(i=0;i<n;i++){
        printf("\nEnter Number in a[%d] :",i);
        scanf("%d",&a[i]);
    }
    printf("\nEnter Number of Search: ");
    scanf("%d",&x);

    for(i=0;i<n;i++){
        if(a[i]==x){
            temp=0;
        } 
    }
    if(temp==0){
        printf("\n Yes , Number is in Array.");
    }else{
        printf("\n No , Number is not in Array.");
    }

}