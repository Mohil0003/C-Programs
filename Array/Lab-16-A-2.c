#include<stdio.h>

void main(){
    int a[3][3],i,j,poscount=0,negcount=0,z=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter Number :");
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(a[i][j]>0){
                poscount++;
            } else if(a[i][j]<0){
                negcount++;
            } else{
                z++;
            }
            }
        }
        printf("Zero Number is :%d",z);
    printf("\nPositive Number is :%d",poscount);
    printf("\nNegative Number is :%d",negcount);
    }
    