#include<stdio.h>
void main(){
    int b,c,t,u,v,w,x;
    printf("Enter Obtained Marks of 5 Subject :");
    scanf("%d %d %d %d %d",&t,&u,&v,&w,&x);
    b=t+u+v+w+x;
    c=(int)(b/(float)5);
    if(c<=35){
      printf("Student is Fail");
    }else if(c>35 && c<=45){
        printf("Student is Pass");
    }else if (c>46 && c<=60){
        printf("Student is Good");
    }else if(c>61 && c<=70){
        printf("Student is Topper");
    }else if(c>71){
        printf("Student is Genius");
    }

}