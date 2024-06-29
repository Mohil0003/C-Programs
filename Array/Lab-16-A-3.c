#include<stdio.h>

void main(){
    int a[20][3],i,j;

    for(i=0;i<20;i++){
        printf("Enter Student Roll no : ");
        scanf("%d",&a[i][j]);
        for(j=0;j<3;j++){
            if(j==0){
                printf("Enter Phyics Marks :");
                scanf("%d",&a[i][j]);
            }else if (j==1){
                printf("Enter Chemsitry Marks :");
                scanf("%d",&a[i][j]);
            }else{
                printf("Enter Maths Marks :");
                scanf("%d",&a[i][j]);
            } 
            
        }
        printf("\n");
    }

    for(i=0;i<20;i++){
        for(j=0;j<3;j++){
            printf("student Result is : %d",a[i][j]);

        }

    }
}