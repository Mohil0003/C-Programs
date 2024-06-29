#include<stdio.h>

void main(){
    int n;
    printf("Enter size of Array :");
    scanf("%d",&n);

    int a[n],i;
    int *ptr;

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("------------\n");
    for(i=0;i<n;i++){
        ptr=&a[i];
        printf("%d ",*ptr);

    }
}