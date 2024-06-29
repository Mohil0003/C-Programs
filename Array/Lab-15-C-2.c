#include<stdio.h>

void main(){
    int n;
    printf("Enter The Numbers of Elements:");
    scanf("%d",&n);

    int i,a[n],temp,j,index,x,swap;
    for(i=0;i<n;i++){
        printf("Enter Sorted Array :");
        scanf("%d",&a[i]);
    }

    printf("Enter a Insert Value :");
    scanf("%d",&x);

    for(i=0;i<n;i++){
        if(x<a[i]){
            swap=a[i];
            a[i]=x;
            a[i+1]=swap;
            printf("%d ",a[i]);
            i++;
        }
        printf("%d ",a[i]);
        }
    }
