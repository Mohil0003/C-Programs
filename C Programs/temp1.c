#include<stdio.h>
 void main(){
    int i,j,k=0;
    j=6/4+2.0/5+1;
    k-=--j;
    for(i=0;i<5;i++){
        switch(i+k){
            case 1:
            case 2:printf("%d\n", i+k); break;
            case 3:printf("%d\n", i+k); break;
            default :printf("%d\n", i+k);
        }
    }
 }