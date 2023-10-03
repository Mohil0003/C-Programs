#include<stdio.h>

void main(){
    int a,n,i=1,sum;
    printf("Enter a Number:");
    scanf("%d", &n);
    a=n;
    while(i<n){
        if(n%i==0){
            sum=sum+i;
        } i++;
    } if(a==sum){
        printf("Perfect Number");
    }else {
        printf("Not Perfect Number");
    }
}