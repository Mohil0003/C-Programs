#include<stdio.h>
void main(){
    char x;
    printf("Enter any character a to z : ");
    scanf("%c", &x);
    if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U'){
        printf("Character is Vowel");
    }else{
        printf("Character is Consonant ");
    }
}