#include<stdio.h>
void main(){
    int n,i,count=0;
    printf("Enter a Number");
    scanf("%d", &n);
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            count=count+1;
            break;
        }
    }
    if(count==0){
        printf("Number is Prime");
    } else {
        printf("Number is Non-Prime");
    }
}