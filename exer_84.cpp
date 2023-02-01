#include<iostream>

int main(){
   int num, limit, count, sum = 0;
   float avg;
   printf("How many number do you want to enter: \n");
   scanf("%d",&limit);
   printf("Enter %d number\n",limit);
   for(count = 1 ; count<=limit ; count++){
    scanf("%d",&num);
    sum= sum + num;
   }
   avg = sum / limit;
   printf("The average value of the said numbers is %.2f",avg);
    return 0;
}