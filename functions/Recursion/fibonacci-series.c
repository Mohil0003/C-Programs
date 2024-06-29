#include<stdio.h>
int fibo_series(int );

void main(){
    int n,i;
    printf("Enter Number of terms : ");
    scanf("%d",&n);
    int result=fibo_series(n);
    printf("%dth term in Fibonacci Series is :%d",n,result);
}
int fibo_series(int n){
    if(n==0 || n==1){
        if(n==0){
            return 0;
        }else {
            return 1;
        }
    }
    int fibNm1 = fibo_series(n-1);
    int fibNm2 = fibo_series(n-2);
    int fibN=fibNm1 + fibNm2;
    return fibN;
}