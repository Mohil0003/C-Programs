#include<stdio.h>

void main(){
    int i=1,n,a,sum=0;
    printf("Enter N : ");
    scanf("%d",&n);
    while(i<=n){
        a=i*i;
        sum=sum+a;
        i++;
    }
    printf("%d", sum);
}