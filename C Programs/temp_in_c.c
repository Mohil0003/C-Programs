#include<stdio.h>
void main(){
    float c,f;
    printf("Enter the Temperature in Fahrenhit : ");
    scanf("%f", &f);
    c=(((f-32)*5)/9);
    printf("Tempreture in Celcius : %f", c);
}