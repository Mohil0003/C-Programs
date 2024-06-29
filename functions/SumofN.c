#include<stdio.h>

int sum(int n);
void main(){
    int n;
    printf("Enter Number of terms : ");
    scanf("%d",&n);
    int res=sum(n);
    printf("Sum of %d Natural Number is : %d",n,res);
    
}
int sum(int n){
    if(n==1){
        return 1;
    }
    int n_minus_1=sum(n-1);
    int sum_of_N=sum(n-1)+n;
    }