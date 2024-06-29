#include<stdio.h>

void main(){
    int x,y,i,j;
    printf("Enter Numbers of Rows: ");
    scanf("%d",&x);
    printf("Enter Numbers of Columns:");
    scanf("%d",&y);

    int mat1[x][y],mat2[x][y];
    printf("-----First Matrix-----");
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            printf("\nEnter Element : ");
            scanf("%d",&mat1[i][j]);
        }
        printf("\n");
    }

    printf("\n-----Second Matrix-----");
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            printf("\nEnter Element : ");
            scanf("%d",&mat2[i][j]);
        }
        printf("\n");
    }

    printf("\n----- Addition is ------");
    printf("\n");
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){

            printf("%d ",mat1[i][j]+mat2[i][j]);
        }
        printf("\n");
    }


}