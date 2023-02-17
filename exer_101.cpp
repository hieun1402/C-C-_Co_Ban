#include<iostream>

int main(){
 float x;
 printf("Input a number :\n");
 scanf("%f",&x);
 if( 0<= x && x <=30){
    printf("Rangers: [0-30]");
 }
 else if( 31<= x && x <=50){
    printf("Rangers: [31-50]");
 }
  else if( 51 <= x && x <= 80){
    printf("Rangers: [51-80]");
 }
  else if( 81<= x && x <= 100){
    printf("Rangers: [81-100]");
 }
    return 0;
}