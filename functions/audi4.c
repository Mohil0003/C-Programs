// Using void data type print value in main func

#include<stdio.h>

void add(int,int,int,int*);

void main(){
    int a,b,c,sum=0;
    scanf("%d %d %d",&a,&b,&c);
    add(a,b,c,&sum);
    printf(" Ans is : %d",sum);
}

void add(int a,int b,int c,int *sum){
    *sum=a+b+c;
}