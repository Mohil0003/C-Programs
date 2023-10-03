#include<stdio.h>
void main(){
    float sec,min,hour,days,weeks,months,years,century;
    printf("Enter the Seconds : ");
    scanf("%f" , &sec);

    century=sec/3153600000;
    years=(sec-(century*3153600000))/31536000;
    months=(sec-(century*3153600000)-(years*31536000))/2630000;
    weeks=(sec-(century*3153600000)-(years*31536000)-(months*2630000))/604800;
    days=(sec-(century*3153600000)-(years*31536000)-(months*2630000)-(weeks*604800))/86400;
    hour=(sec-(century*315360000)-(years*31536000)-(months*2630000)-(weeks*604800)-(days*86400))/3600;
    min=(sec-(century*315360000)-(years*31536000)-(months*2630000)-(weeks*604800)-(days*86400)-(hour*3600))/60;
    sec=(sec-(century*315360000)-(years*31536000)-(months*2630000)-(weeks*604800)-(days*86400)-(hour*3600)-(min*60));

    printf("Century : %f", century);
    printf("\nYears : %f", years);
    printf("\nMonths : %f", months);
    printf("\nWeeks : %f", weeks);
    printf("\nDays : %f", days);
    printf("\nHours : %f", hour);
    printf("\nMinutes : %f", min);
    printf("\nSeconds : %f", sec);

}