#include<stdio.h>
void main(){
    int x;
    printf("Enter a Integer Number : ");
    scanf("%d", &x);
    if(x%2==0){
        printf("Last Digit of Number is Even.");
    }else{
        printf("Last Digit Number is Odd.");
    }
}