#include<stdio.h>

void main(){
    int a,n,count=0,i;
    printf("Enter NUM:");
    scanf("%d", &n);
    while(n!=0){
        a=n%10;
        for(i=0; i<=a ; i++ ){
            if(i>=0){
                count=count+1;
            }
        }
        n=n/10;
        if(count!=0)
        printf("%d,%d", a,count);
    }
}
       