#include<stdio.h>
#include<math.h>

void main(){
    float a,b,c,d,root1,root2;
    printf("Enter Coefficients of Quadratic Equation : ");
    scanf("%d %d %d", &a,&b,&c);
    d=b*b-4*a*c;
     if(d>0){
        root1=(-b + sqrt(d))/(2*a);
        root2=(-b - sqrt(d))/(2*a);
        printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
    }else if(d==0){
        root1=-b/(2*a);
        printf("root1 = %.2lf and root2 = %.2lf", root1);
    }else{
        printf("INVALID");
    }
}