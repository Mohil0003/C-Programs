#include<stdio.h>
#include<math.h>

void main(){
 float sum=0;
    int n,r,i,a,b,count=0;
    printf("Enter a Number:");
    scanf("%d",&n);
    a=n;
    b=n;
        while(n!=0){
        i=n%10;
        n=n/10;
        count++;
    }
    while(b!=0){
        r=b%10;
        sum=sum + pow(r,count);
        b=b/10;
    }
    if(a==sum){
        printf("Armstrong");
    }else {
        printf("Not Armstrong");
    }
}