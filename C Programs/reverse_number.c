#include<stdio.h>

void main(){
    int n,i;
    printf("Enter a Number :");
    scanf("%d", &n);
    while(n!=0){
        i=n%10;
        printf("%d",i);
        n=n/10;
        
    }
}
