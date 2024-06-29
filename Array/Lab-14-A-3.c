#include<stdio.h>

void main(){
    int n;
    printf("Enter size of Array:");
    scanf("%d",&n);

    int i,a[n],odd=0,even=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<nn;i++){
        if(a[i]%2==0){
            even++;
        }else{
            odd++;
        }
    }
    printf("\nEven Number is:%d",even);
    printf("\nOdd Number is:%d",odd);
}