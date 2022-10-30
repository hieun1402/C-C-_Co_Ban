#include<iostream>

int main()
{
    int days , years , weeks;
    days = 1329;
    printf("years: %d\n",days/365);
    printf("weeks: %d\n",(days % 365)/7);
    printf("Days: %d\n",days-(((days/365)*365)+(((days % 365)/7)*7)));
    
    return 0;
}