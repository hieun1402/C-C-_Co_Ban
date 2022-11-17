#include<iostream>

int main(){ 
   int a ;
   printf("Input an integer: ");
   scanf("%d",&a);
   if(a>=0 && a%2==0){
    printf("This is positive even");
   }
   else if(a<=0 && a%2==0){
    printf("This is negative even ");
   }
   else if(a>0 && a%2!=0){
    printf("This is positive odd");
   }
   else if(a<0 && a%2!=0){
    printf("This is negative odd");
   }
    return 0;
}