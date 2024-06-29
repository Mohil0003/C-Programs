// Using recursion print factorial

#include<stdio.h>
#include"read-func.h"

int fact(int);

void main(){
    int a=readInt();
    int res=fact(a);
    printf("Result is :%d",res);
}
int fact(int a){
    if(a==1){
        return 1;
    }
    else{
        return a*fact(a-1);    
    }
}