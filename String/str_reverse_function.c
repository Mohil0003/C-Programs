#include<stdio.h>
#include<string.h>

void main(){
    char a[100];
    printf("Enter a String:");
    gets(a);

    int length=strlen(a);
    int i=0,j=length-1;
    for(;i<length/2;i++){
        char temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        j--;
    }
    printf("Reversed String is:%s",a);
}