#include<stdio.h>
void main(){
    char temp;
    printf("Enter a Character : ");
    scanf("%c", &temp);
    if(temp<='z'){
        printf("Character is in Lower Case.");
    }else if(temp<='Z'){
        printf("Character is in Upper Case.");
    }else if (temp<=9){
        printf("Character is Digit.");
    }else {
        printf("Character is Special Symbol.");
    }
}