 // Addition of Array Through Call by Value

#include<stdio.h>

 int add(int a[5]);

 void main(){
    int i,a[5];
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
   int res = add(a);
   printf("Ans is : %d",res);
 }

 int add(int a[5]){
    int sum=0,i;
    for(i=0;i<5;i++){
        sum=sum+a[i];
    }
    return sum;
 }