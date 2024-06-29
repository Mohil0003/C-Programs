#include<stdio.h>

void main(){
    int n;
    printf("Enter The Numbers of Elements:");
    scanf("%d",&n);

    int i,a[n],temp,j;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
        if(a[i]>a[j]){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
         }
    }
    }
        printf("\n Asecnding order is:");
         for(i=0;i<n;i++){
            printf("\n%d",a[i]);
    }
}