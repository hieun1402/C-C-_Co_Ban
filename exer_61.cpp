#include<iostream>
#include<math.h>
int main(){
double x , y;
printf("Input value of x: ");
scanf("%lf",&x);
if(x!=0.0){
    y = sin(1/x);
   printf("Value of sin(1/x) = %0.4lf",y);
}else{
    printf("Value of x is not be zero");
}
    return 0;
}