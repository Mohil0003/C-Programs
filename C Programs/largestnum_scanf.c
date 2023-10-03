#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter the Three dif. Integer : ");
    scanf("%d %d %d", &a ,&b ,&c);
    if((a>b) && (a>c)){
        printf("Largest is Integer is : %d", a);
    }else if(b>c && b>a){
        printf("Largest Integer is : %d", b);
    }else
    printf("Largest Integer is : %d",c);

}