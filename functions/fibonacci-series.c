#include<stdio.h>

int fibo_series(int);

void main(){
    int n;
    scanf("%d",n);
    int res=fibo_series(n);
}

int fibo_series(int n){
    int i=1,a=1,sum=0;
    while(i<=n){
        if(a==1){
            return a;
            i++;
        }else{
            a=sum+a;
            printf("%d",a);
            i++;
            sum=sum+a
            return sum;
        }
    }

}