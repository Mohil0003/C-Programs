#include<stdio.h>

void main(){
    int i=1,n,a=1,sum=0;
    printf("Enter Num of Terms:");
    scanf("%d", &n);
    while(i<=n){
        a=sum+a;
        printf("%d ",a );
        i++;
        sum+=a;
        printf("%d ",sum );

    }
}