#include<stdio.h>
#include<math.h>

void main(){
    int i=1;
    float ans;
    while(i<=9){
        ans=sqrt(i);
        printf("\n%d = %.2f",i,ans);
        i++;
    }
}