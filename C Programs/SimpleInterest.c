#include<stdio.h>
void main(){
    float p,r,t;
    printf("Enter the Principal :");
    scanf("%f", &p);
    printf("Enter the Roi :");
    scanf("%f", &r);
    printf("Enter the Time Period :");
    scanf("%f", &t);
    printf("Interest is : %f" , (p*r*t)/100);
}