#include<stdio.h>
void main(){
    int min,max;
    printf("Enter two numbers : ");
    scanf("%d %d", &min,&max);
    while(min<=max){
        if(min%2!=0){
            printf("%d ", min);
        }min++;
    }
}