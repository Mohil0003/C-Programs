#include<stdio.h>
#include<string.h>

void main(){
    char s1[]="Their",s2[]="There";
    printf("%s",strchr(s1,'i'));
    printf("%s",strstr(s1,"he"));
    printf("%s",s1);
}
