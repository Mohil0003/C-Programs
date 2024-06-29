#include<stdio.h>

void main(){
    int i,a[5],b[5];

    for(i=0;i<5;i++){
        printf("Enter Height Of person[%d]:",i);
        scanf("%d",&a[i]);
        printf("Enter Weight of Person[%d]:",i);
        scanf("%d",&b[i]);
        printf("\n");
    }
    int count=0;
     for(i=0;i<5;i++){
        if(a[i]>=170 && b[i]<=50){
            count++;
        }
    }
    printf("\nNumber Of Person is:%d",count);
}