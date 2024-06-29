#include<stdio.h>

void main(){
    char a[1000];
    printf("Enter String : ");
    gets(a);

    printf("String is:");
    puts(a);
    int i,count=0;
    for(i=0;a[i]!='\0';i++){
        count++;
    }

    printf("Length of String is : %d",count);
}