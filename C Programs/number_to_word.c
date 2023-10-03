#include<stdio.h>

void main(){
    int n,i,sum=0,r;
    printf("Enter a Number:");
    scanf("%d",&n);
     while(n!=0){
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    while(sum!=0){
        i=sum%10;
        if(i==1){
            printf(" One ");
            }
        else if(i==2){
            printf(" Two ");
        }
        else if(i==3){
            printf(" Three ");
        }
        else if(i==4){
            printf(" Four ");
        }
        else if(i==5){
            printf(" Five ");
        }
        else if(i==6){
            printf(" Six ");
        }
        else if(i==7){
            printf(" Seven ");
        }
        else if(i==8){
            printf(" Eight ");
        }
        else if(i==9){
            printf(" Nine ");
        }
        else if(i==0){
            printf(" Zero ");
        }
        sum=sum/10;
    }
}