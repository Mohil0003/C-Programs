#include<stdio.h>

void main(){
    int a,n,sum=0,r;
    printf("Enter a Number:");
    scanf("%d",&n);
    a=n;
    while(n!=0){
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }if(a==sum){
        printf("Palindrome Number");
    }else{
        printf("Not Palindrome Number");
    }
}