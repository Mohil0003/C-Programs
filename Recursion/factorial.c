// #include<stdio.h>
// #include"read-func.h"

// int fact(int);

// void main(){
//     int a=readInt();
//     int res=fact(a);
//     printf("Result is :%d",res);
// }
// int fact(int a){
//     if(a==1){
//         return 1;
//     }
//     else{
//         return a*fact(a-1);    
//     }
// }

#include<stdio.h>
#include"read-func.h"

int fact(int);

void main(){
    int a=readInt();
    int res=fact(a);
    printf("Result is :%d",res);
}
int fact(int a){
    if(a==1){
    return a;
         }
    int factNm1 = fact(a-1);
    int factN= factNm1 * a;
    return factN;
   

}