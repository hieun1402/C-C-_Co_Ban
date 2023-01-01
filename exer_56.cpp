#include<iostream>
#include<math.h>

int main(){
   int a , b;
   printf("input value: ");
   scanf("%d",&a);
   a=a*2<<2;
   b=a;
   printf("the left shifted data is=%d",b);
    return 0;
}