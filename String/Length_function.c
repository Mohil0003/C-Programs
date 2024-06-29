#include<stdio.h>

void main(){
    char a[1000];
    printf("Enter a String:");
    gets(a);
     
    int i=0,count=0;
    for(i=0;a[i]!='\0';i++){
        count++;
    }

    printf("Lenght of String is:%d",count);
}