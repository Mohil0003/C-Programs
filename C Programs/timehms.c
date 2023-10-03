#include<stdio.h>
void main(){
    int sec,min,hour;
    printf("Enter Seconds : ");
    scanf("%d",&sec);
    hour=sec/3600;
    min=((sec-(hour*3600))/60);
    sec=((sec-(hour*3600)-(min*60)));
    printf("%d : %d : %d", hour,min,sec);
}