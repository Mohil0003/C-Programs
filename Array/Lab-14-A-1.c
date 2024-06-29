#include<stdio.h>

void main(){
    int n;
    printf("Enter size of Array:");
    scanf("%d",&n);

    int i,arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++){
        printf("\n%d",arr[i]);
    }
        printf("\n");
    for(i=n;i>=0;i--){
        printf("\n%d",arr[i]);
    }
    

}