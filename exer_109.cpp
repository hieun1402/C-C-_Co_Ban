#include<iostream>
#include<math.h>

int main(){
 int i , n , odd_value = 0 , even_value = 0;
 printf("Input a number (integer): ");
 scanf("%d",&n);
 if(4<n && n<101){
 printf("\nSquare of each even between 1 and %d\n",n);
 for ( i = 1; i <= n; i++)
 {
    if(i%2==0){
        even_value = pow(i , 2);  //pow(x,y) là hàm toán học để trả về x mũ y
        printf("%d^2 = %d\n",i,even_value); 
    }
 }
 
  printf("\nSquare of each odd between 1 and %d\n",n);
   for ( i = 1; i <= n; i++)
 {
    if(i%2!=0){
        odd_value = pow(i , 2);  //pow(x,y) là hàm toán học để trả về x mũ y
        printf("%d^2 = %d\n",i,odd_value); 
    }
 }
 }
    return 0;
}