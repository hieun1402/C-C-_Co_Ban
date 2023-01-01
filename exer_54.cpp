#include<iostream>

int main(){
float a;
printf("input the distance in cm: ");
scanf("%f",&a);
printf("Distance of %.2f cms is:%.2f inches",a,(a/2.54));
    return 0;
}