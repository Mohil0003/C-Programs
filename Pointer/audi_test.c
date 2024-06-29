#include<stdio.h>

void main(){
    char city[3][25] ={"Baroda","Rajkot" , "Morbi"};
    printf("\n%c",**(city+1));
    printf("\n%s",*(city+2));
}