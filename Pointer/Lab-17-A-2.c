#include<stdio.h>

void main(){
    int *ptr1,n;
    char *ptr2,a;
    float *ptr3,x;
    double *ptr4,y;

    
    printf("Enter Integer Value :");
    scanf("%d",&n);
    ptr1=&n;

    printf("Enter Char Value :");
    scanf(" %c",&a);
    ptr2=&a;


    printf("Enter Float Value :");
    scanf("%f",&x);
    ptr3=&x;

    printf("Enter Double Value :");
    scanf("%lf",&y);
    ptr4=&y;

    printf("\nInteger value %d and It's Address is : %d",*ptr1,ptr1);

    printf("\nCharacter value %c and It's Address is : %d",*ptr2,ptr2);

    printf("\nFloat value %f and It's Address is : %d",*ptr3,ptr3);

    printf("\nDouble value %lf and It's Address is : %d",*ptr4,ptr4);
        


}

