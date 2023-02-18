#include<iostream>

int main(){
 int n;
 printf("Input a number(integer): ");
 scanf("%d",&n);
 if(n>0 && n%2!=0){
    printf("Number is positive odd");
 }
 else if(n<0 && n%2!=0){
    printf("Number is negative odd");
 }
 else if(n>0 && n%2==0){
    printf("Number is positive even");
 }
 else if(n<0 && n%2==0){
    printf("Number is negative even");
 }
 else if(n==0){
    printf("Zero");
 }
    return 0;
}