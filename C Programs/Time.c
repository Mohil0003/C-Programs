#include<stdio.h>
void main(){
    int s,m,h,days,weeks,months,years,century;
    printf("Enter the Seconds :");
    scanf("%d", &s);
    m=s/60;
    s=s%60;
    h=m/60;
    m=m%60;
    days=h/24;
    h=h%24;
    weeks=days/7;
    days=days%7;
    months=weeks/4;
    weeks=weeks%4;
    years=months/12;
    months=months%12;
    
    printf("Years : ");
    printf("%d", years);
    printf("\nMonths : ");
    printf("%d", months);
    printf("\nWeeks : ");
    printf("%d", weeks);
    printf("\nDays : ");
    printf("%d", days);
    printf("\nHours : ");
    printf("%d", h);
    printf("\nMinutes : ");
    printf("%d", m);
    printf("\nSeconds : ");
    printf("%d", s);
}