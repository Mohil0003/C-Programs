#include<stdio.h>

void main(){
    char s1[100],s2[100];
    int n,i;
    printf("Enter Any String :");
    gets(s1);

    printf("Enter Other String :");
    gets(s2);

    printf("Enter number of charcaters copy to other string: ");
    scanf("%d",&n);

    for(i=0;i!=n;i++){
        s1[i]=s2[i];
    }
    s1[i]='\0';
    printf("Modified String : %s",s1);

}