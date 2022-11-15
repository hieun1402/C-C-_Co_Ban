#include<iostream>
#include<math.h>
int main(){
    float a , b , c , x1 , x2 , y;
    printf("input a: ");
    scanf("%f",&a);
    printf("input b: ");
    scanf("%f",&b);
    printf("input c: ");
    scanf("%f",&c);
    y = (b*b)-(4*a*c);
    if(a!=0 && b>0){
        x1 = (-b+sqrt(y))/(2*a);
        x2 = (-b-sqrt(y))/(2*a);
        printf("root 1: %.5f\n",x1);
        printf("root 2: %.5f",x2);
    }else{
        printf("Not possible to find the roots");
    }
    return 0;
}