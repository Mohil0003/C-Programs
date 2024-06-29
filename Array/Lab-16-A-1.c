#include<stdio.h>

void main(){
    int x,y;
    printf("Enter Length of Array: ");
    scanf("%d",&x);
    printf("Enter Width of Array: ");
    scanf("%d",&y);

    int a[x][y],i,j;
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            printf("Enter Number:");
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }

}