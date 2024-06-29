#include<stdio.h>
#include<string.h>

void main(){
    char s1[100],s2[100];
    int i,a,b;
    printf("Enter First String:");
    gets(s1);
    printf("Enter Second String:");
    gets(s2);
    a=strlen(s1);
    b=strlen(s2);
    if(a>b){
        for(i=0;s1[i]!='\0';i++){
            s2[i]=s1[i];
        }
    }else{
        for(i=0;s2[i]!='\0';i++){
            s1[i]=s2[i];
        }
    }
    printf("%s",s1);    
    printf("\n%s",s2);    


}