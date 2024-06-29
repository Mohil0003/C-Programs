#include<stdio.h>

void main(){
    int n;
    printf("Enter size of Array:");
    scanf("%d",&n);

    int i,a[n],posCount=0,negCount=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]>0){
            posCount++;
        }else{
            negCount++;
        }
    }
    printf("\nNumber of Positive is:%d",posCount);
    printf("\nNumber of Negative is:%d",negCount);
}