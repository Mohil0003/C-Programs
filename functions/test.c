#include<stdio.h>
int swap(int,int)
int a=90,b=100,temp;
void main(){
    
    printf("Before : %d %d",a,b);
    swap(a,b);
    printf("After : %d %d",a,b);
}
int swap(int j, int k){
    temp=j;
    j = k;
    k=temp;
// here return value of b
}

