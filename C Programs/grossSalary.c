#include<stdio.h>
void main(){
    int basic,hra,da,grosssalary;
    printf("Enter Your Basic Salary : ");
    scanf("%d",&basic);
    if(basic>=10000 && basic<20000){
    hra=basic*(float)0.2;
    da=basic*(float)0.8;
    grosssalary=basic + hra + da;
    printf("%d",grosssalary);
    }else if(basic>=20000 && basic<30000){
    hra=basic*(float)0.25;
    da=basic*(float)0.9;
    grosssalary=basic + hra + da;
    printf("%d",grosssalary);
    }else if(basic>=30000){
    hra=basic*(float)0.3;
    da=basic*(float)0.95;
    grosssalary=basic + hra + da;
    printf("%d",grosssalary);
    }else{
        printf("Invalid Input");
    }
}