#include<stdio.h>
void main(){
    int unit;
    float x,bill;
    printf("Enter Units : ");
    scanf("%d", &unit);
    if(unit>=0 && unit<=50){
        x=unit*0.50;
    }else if(unit>50 && unit<=150){
        x=(unit-50)*0.75 + 25;
    }else if(unit>150 && unit<=250){
        x=(unit-150)*1.20 + 25 + 75;
    }else{
        x=(unit-250)*1.50 + 25 + 75 + 120;
    }
    bill=x;
    bill=bill+(bill*(0.2));
    printf("Your Electricity Bill is : %f", bill);
}