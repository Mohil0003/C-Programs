#include<stdio.h>


void main(){
    int n;
    printf("Enter the Length of Array: ");
    scanf("%d",&n);
    int a[n],i,count=0,j,temp,label;
    for ( i = 0; i < n; i++)
    {
       printf("Enter the Element in Array:");
       scanf("%d",&a[i]);
    }
    for ( i = 0; i < n; i=i+temp)
    {
  
        for ( j = i+1; j < n; j++)
        {
            
            if (a[i]<=a[j])
            {
                
               if (a[i]==a[j])
               {
                    count++;
                    temp=count;

               } 
            }else{
                count=0;
                break;
                goto label;
            }
            
        } 

    }
    label:
    if (temp>2)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}