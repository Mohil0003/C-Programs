#include<stdio.h>

void main(){
    int n,sum=0,r,digit;
    printf("Enter a Number:");
    scanf("%d",&n);
    while(n!=0){
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    while(sum!=0){
        digit=sum%10;
        printf("%d\n", digit);
        sum=sum/10;
    }
}
