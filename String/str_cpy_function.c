#include<stdio.h>

void main(){

    char a[100],b[100];
    int i;
    
    printf("Enter String: \n");
    gets(a);
    for(i=0;a[i]!=0;i++){
        b[i]=a[i];
    }
    a[i]='\0';
    printf("%s",b);
}