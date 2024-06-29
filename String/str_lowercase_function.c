#include<stdio.h>
#include<string.h>

void main(){
    char a[100];
    printf("Enter a String:");
    gets(a);
    int i=0;
    for(;a[i]!='\0';i++){
        if(a[i]>='A' && a[i]<='Z'){
            a[i]= a[i] + 32;
        }
    }
    printf("%s",a);
}