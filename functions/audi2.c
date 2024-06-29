#include<stdio.h>
int swap(int ,int)

void main(){
    int a=90,b=100;
    printf("Before : %d %d",a,b);
  int res,res1 =  swap(a,b);
    printf("After : %d %d",res,res1);
}
int swap(int a, int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    return a,b;
// here return value of b
}

