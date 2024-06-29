#include<stdio.h>
int power(int, int);
void main(){
    int x,y;
    scanf("%d %d",&x,&y);
    int res=power(x,y);
    printf("%d",res);
}
int power(int a,int b){
    if(b==1){
        return a;
    }
    else
    {
        return a*power(a,b-1);
    }
}