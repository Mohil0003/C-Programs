#include<stdio.h>

void main(){
    int n,i=1,r,binary=0;
    printf("Enter a Number:");
    scanf("%d", &n);
    while(n!=0){
        r=n%2;
        n=n/2;
        binary=binary+r*i;
        i=i*10;
    }
    printf("%d", binary);
}