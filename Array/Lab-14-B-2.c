#include<stdio.h>
#include<math.h>

void main(){
    int n;
    printf("Enter Size Of Array:");
    scanf("%d",&n);

    int i,a[n],sum=0;
    float gm,avg,y,x=1,hm,temp;
    for(i=0;i<n;i++){
        printf("Enter Next Number: ");
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    avg=(float)sum/n;
    printf("\n%f",avg);
    for(i=0;i<n;i++){
        x=x*a[i];
    
    }
    y=(float)1/n;
    gm = pow(x,y);
    printf("\n Geometric Mean :%f", gm);
    hm=pow(gm,2)/avg;
    printf("\n Harmonic Mean :%f",hm);

}