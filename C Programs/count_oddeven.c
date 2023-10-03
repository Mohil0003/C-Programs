#include<stdio.h>
void main(){
    int n,i=1,odd=0,even=0;
    while(i<=10){
        scanf("%d", &n);
        if(n%2==0){
            even++;
        }else{
            odd++;
        }
        i++;
    } 
    printf("%d Even Numbers.", even);
    printf("\n%d Odd Numbers.", odd);
}