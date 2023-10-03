#include<stdio.h>
 void main(){
    int a,b,c;
    printf("Enter a First Number :");
    scanf("%d",&a);
    printf("Enter a Second Number :");
    scanf("%d",&b);
    printf("Choices of Operations");
    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\n Enter your choice ");
    scanf("%d",&c);
    if(c==1){
      printf("Addition of Two Numbers is : %d",a+b);
    }else if(c==2){
      printf("Subtraction of Two Numbers is : %d" ,a-b);
    }else if(c==3){
      printf("Multiplication of Two Numbers is : %d", a*(char)b);
    }else if(c==4){
      printf("Division of Two Numbers is : %d", (int)(a/(float)b));
    }else {
      printf("Invalid Output");
    }
 }