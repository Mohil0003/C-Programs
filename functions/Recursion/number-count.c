#include<stdio.h>
int extract(int);
void main(){
    int n;
    scanf("%d",&n);
    int res=extract(n);
    printf("%d",res);
}
int extract(int n){
    if(n==0){
        return 0;
    }
    else{
        return 1+extract(n/10);    
    }
}