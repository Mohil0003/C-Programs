#include<stdio.h>

void main(){
    int n;

    printf("Enter Length of Array:");
    scanf("%d",&n);

    int i,a[n],j,k;
    for(i=0;i<n;i++){
        printf("Enter Number:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){

            for(k=j;k<n;k++){
                a[k]=a[k+1];
                
            }
            n--;
            j--;
        }
    }
    }
    printf("-----------\n");
    printf("Wihtout Duplicate Elimantes :");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }

}
