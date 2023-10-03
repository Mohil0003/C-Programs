#include<stdio.h>
void main(){
    int i=1,sum=0,n;
    printf("Enter the Last Term of Series:");
    scanf("%d",&n);
    while (i<=n)
    {
        printf("\n%d",(i*i));
        sum=sum+(i*i);
        i++;
    }
    printf("\nSum of this Series is:%d",sum);
}